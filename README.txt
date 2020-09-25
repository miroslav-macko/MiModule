##################################################################
#                                                                #
# MiModule for Falaise analysis version 0.                       #
#                                                                #  
# LAST UPDATE of README FILE:  25th Sept. 2020                   #
# Made by: Miroslav Macko (miroslav.macko@utef.cvut.cz)          #
#                                                                #
##################################################################

##############################
ABOUT:
##############################

MiModule transforms .brio file produced by Falaise applications flsimulate and/or flreconstruct
into a ROOT file. Each event is in form of object of class MiEvent saved into the TTree in ROOT 
file. The package contains also a class MiFilters. Object of class MiFilters is capable to
return a boolean value true if the event passed given data cut or false in case it does not
pass. 
	
--------------MORE DETAILED DESCRIPTON OF THE PACKAGE TO BE ADDED!

##############################
PACKAGE CONTENTS:
##############################

-folder      ./include:               all the header files "*.h" contained by MiModule
-folder      ./include:               all the source code files "*.cpp"  contained by MiModule 
-file        CMakeLists.txt:          compilation instructions for cmake
-script      install.sh:              installation script 
-file        p_MiModule_v00.conf.in:  template pipeline file used by flreconstruct in process of package testing 					      (during installation)
-ROOT macro  Example_ROOT.cpp         ROOT macro which reads ROOT file produced by test during installation. 
				      This is not an inevitable part of MiModule and can be deleted if necessary. It 					      is an example how the ROOT macro can use MiModule to read its ROOT files. 
##############################
INSTALLATION:
##############################

The installation is performed only by the shell script install.sh
The installation process proceeds in several steps (no interaction from user needed):

1. ROOT dictionaries are generated. In order to ensure compatibility of the module with the ROOT macros, the rootcint application (provided by ROOT package) generates dictionary source files in folder ./src/dicts/ and pcm library files in the folder ./lib/
2. The cmake is invoked and the linking + compilation is checked
3. Make produces the library libMiModule.so. After successful installation the library can be found in folder ./lib/
4. Make tests the very basic functionality of the module in three steps (flsimulate: testMiModule_simulate, flreconstruct - mock calibration: testMiModule_reconstruct, and main test - flreconstruct with MiModule: testMiModule_main). One event ROOT file Default.root (produced by "testMiModule_main") is saved into folder ./testing_products/ along with simualted brio file test-simu.brio (produced by "testMiModule_simulate") and reconstructe brio file test-reco.brio (produced by test "testMiModule_reconstruct")
				      
##############################
HOW TO USE:
##############################

All the important libraries necessary for using MiModule are in the folder ./lib. This folder can be moved freely within a given computer. 
The module should be passed via pipaline configuration file to a flreconstruct application. Template of a simple pipeline file can be found in "p_MiModule_v00.conf.in". In th epipeline file "@PROJECT_BINARY_DIR@/../lib/" should be replaced by the path to folder containing libMiModule.so.

--------------MORE DETAILED DESCRIPTON OF THE PACKAGE USE TO BE ADDED!
