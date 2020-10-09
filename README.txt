##################################################################
#                                                                #
# MiModule for Falaise analysis version 1.0.0                    #
#                                                                #  
# LAST UPDATE of README FILE:  1st Oct. 2020                     #
# Made by: Miroslav Macko (miroslav.macko@utef.cvut.cz)          #
#                                                                #
##################################################################

###################################################
ABOUT:
###################################################

MiModule transforms .brio file produced by Falaise applications flsimulate and/or flreconstruct
into a ROOT file. Each event is in form of object of class MiEvent saved into the TTree in ROOT 
file. The package contains also a class MiFilters. Object of class MiFilters is capable to
return a boolean value true if the event passed given data cut or false in case it does not
pass. 
	
--------------MORE DETAILED DESCRIPTON OF THE PACKAGE TO BE ADDED!

###################################################
PACKAGE CONTENTS:
###################################################

-folder      ./include:               all the header files "*.h" contained by MiModule
-folder      ./src:                   all the source code files "*.cpp"  contained by MiModule 
-file        CMakeLists.txt:          compilation instructions for cmake
-script      install.sh:              installation script 
-file        p_MiModule_v00.conf.in:  template pipeline file used by flreconstruct in process of package testing (during installation)
-ROOT macro  Example_ROOT.cpp         ROOT macro which reads ROOT file produced by test during installation. This is not an inevitable part of MiModule and can be deleted if necessary. It is an example how the ROOT macro can use MiModule to read its ROOT files. 

###################################################
INSTALLATION:
###################################################

The installation is performed only by the shell script install.sh
The installation process proceeds in several steps (only step 1 require input by the user):

1. Script asks for a folder containing Falaise header (.h) files. At this point, the full (not relative) path should be provided by the user. The path should end by folder "/include/". For example (in case of singularity distribution of Falaise) it would be "/opt/supernemo/include/". Adding "falaise" folder at the end of the path would lead to failure of the installation process (in our example: "/opt/supernemo/include/falaise/" would not work). 
2. ROOT dictionaries are generated. In order to ensure compatibility of the module with the ROOT macros, the rootcint application (provided by ROOT package) generates dictionary source files in folder ./src/dicts/ and pcm library files in the folder ./lib/
2. The cmake is invoked and the linking + compilation is checked
4. Make produces the library libMiModule.so. After successful installation the library can be found in folder ./lib/
5. Make tests the very basic functionality of the module in three steps (flsimulate: testMiModule_simulate, flreconstruct - mock calibration: testMiModule_reconstruct, and main test - flreconstruct with MiModule: testMiModule_main). One event ROOT file Default.root (produced by "testMiModule_main") is saved into folder ./testing_products/ along with simualted brio file test-simu.brio (produced by "testMiModule_simulate") and reconstructe brio file test-reco.brio (produced by test "testMiModule_reconstruct")
				
###################################################
HOW TO USE:
###################################################

All the important libraries necessary for using MiModule are in the folder ./lib. This folder can be moved freely within a given computer. 
The module should be passed via pipaline configuration file to a flreconstruct application. Template of a simple pipeline file can be found in "p_MiModule_v00.conf.in". In th epipeline file "@PROJECT_BINARY_DIR@/../lib/" should be replaced by the path to folder containing libMiModule.so.

--------------MORE DETAILED DESCRIPTON OF THE PACKAGE USE TO BE ADDED!
				      
###################################################
CHANGES IN COMPARISON TO VERSION 0.0.0: 
###################################################

1.  Added Scalar multiplication "operator*()" into MiVector3D class (18.5.2017)
2.  Added class MiSDVisuHit (30.5.2017)
3.  Added collection of visu hits "vector<MiSDVisuHit>  visuhit" to MiSD class (30.5.2017)
4.  Added function "int addvisuhit(MiSDVisuHit& in_visu)" to MiSD class (30.5.2017)
5.  Added function "void printVisuHit(int i_hit)" to MiSD class (30.5.2017)
6.  Added function "vector<MiSDVisuHit>*  getvisuhitv()" to MiSD class (30.5.2017)
7.  Added class MiBin1D formerly placed in the projects' root folder (9.10.2017)
8.  Added class MiChosenEvent1D formerly placed in the projects' root folder (9.10.2017)
9.  Added function "void setParticleName(string name)" to MiSDVisuHit class (27.3.2018)
10. Added function "string getParticleName()" to MiSDVisuHit class (27.3.2018)
11. Added variable "string particle_name" to MiSDVisuHit class (27.3.2018)
12. Extended function "void MiSDVisuHit::print()" in MiSDVisuHit class (27.3.2018)
13.  Added function "void setMaterial(string mat)" to MiSDVisuHit class (28.3.2018)
14.  Added function "void setParentID(int ID)" to MiSDVisuHit class (28.3.2018)
15.  Added function "void setProcess(int proc)" to MiSDVisuHit class (28.3.2018)
16.  Added function "void setMaterial(string mat)" to MiSDVisuHit class (28.3.2018)
17. Added function "void setTrackID(int ID)" to MiSDVisuHit class (28.3.2018)
18. Added function "string getMaterial()" to MiSDVisuHit class (28.3.2018)
19. Added function "int getParentID()" to MiSDVisuHit class (28.3.2018)
20. Added function "string getProcess()" to MiSDVisuHit class (28.3.2018)
21. Added function "int getTrackID()" to MiSDVisuHit class (28.3.2018)
22. Added variable "int parent_ID" to MiSDVisuHit class (28.3.2018)
23. Added variable "int track_ID" to MiSDVisuHit class (28.3.2018)
24. Added variable "string material" to MiSDVisuHit class (28.3.2018)
25. Added variable "string process" to MiSDVisuHit class (28.3.2018)
26. Added variable "bool is_init_material" to MiSDVisuHit class (28.3.2018)
27. Added variable "bool is_init_process" to MiSDVisuHit class (28.3.2018)
28. Added function "void setStepNo(int No)" to MiSDVisuHit class (28.3.2018)
29. Added function "int getStepNo()" to MiSDVisuHit class (28.3.2018)
30. Added variable "int step_no" to MiSDVisuHit class (28.3.2018)
31. Extended function "void MiSDVisuHit::print()" in MiSDVisuHit class (28.3.2018)
32. Renamed variable types such as "snemo::datamodel::particle_track_data::particle_collection_type    particles_collection;" (in MiModule.h) to snemo::datamodel::ParticleHdlCollection particles_collection; to ensure compatibility with name of types from Falaise version 4.0.2 and higher (1.10.2020)
33. Added variable "string name" and respective "setname" and "getname" methods to MiSDParticle class (9.10.2020) 
