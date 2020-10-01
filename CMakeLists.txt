###########################
# COMPILATION
###########################

cmake_minimum_required(VERSION 3.3)
project(MiModule VERSION "1.0.0")

#Finds ROOT and Falaise packages and defines cmake variables
find_package(Falaise REQUIRED)
find_package(ROOT    REQUIRED)

if(${Falaise_VERSION} VERSION_LESS 4.0.2)
message(FATAL_ERROR "ERROR (MiModule): This version of MiModule is compatible only with Falaise version 4.0.2 or higher! Please use a version of MiModule compatible with your Falaise version (e.g. version 0.0.0)! You can also use Falaise 4.0.2 or higher.")
endif()
	
include_directories(include ${Bayeux_INCLUDE_DIRS})

file(GLOB SOURCES "src/*.cpp" "src/dicts/*.cpp")
add_library(MiModule SHARED ${SOURCES})

target_link_libraries(MiModule PUBLIC Falaise::Falaise ${ROOT_LIBRARIES})

###########################
# TESTING
###########################

# Configure example pipeline script for use from the build dir
configure_file("p_MiModule_v00.conf.in" "p_MiModule_v00.conf" @ONLY)

# Add a basic test of reading a brio file output by the
# standard pipeline
enable_testing()

# - Simulate
add_test(NAME    testMiModule_simulate
         COMMAND Falaise::flsimulate -o test-simu.brio
         WORKING_DIRECTORY ${PROJECT_BINARY_DIR}/../testing_products/)

# - Reconstruct
add_test(NAME    testMiModule_reconstruct
         COMMAND Falaise::flreconstruct -i test-simu.brio -p urn:snemo:demonstrator:reconstruction:1.0.0 -o test-reco.brio
         WORKING_DIRECTORY ${PROJECT_BINARY_DIR}/../testing_products/)

set_tests_properties(testMiModule_reconstruct PROPERTIES DEPENDS testSensitivityModule_simulate)

# - Run Module
add_test(NAME    testMiModule_main
         COMMAND Falaise::flreconstruct -i test-reco.brio -p ../testing_products/p_MiModule_v00.conf
         WORKING_DIRECTORY ${PROJECT_BINARY_DIR}/../testing_products/)

set_tests_properties(testMiModule_main        PROPERTIES DEPENDS testMiModule_reconstruct)

