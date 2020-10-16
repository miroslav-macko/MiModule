#!/bin/bash   

	echo "                                          "
	echo "Please enter the full path to *FALAISE* include files:"
	read FAL_INC
	echo "                                          "
	
	rm -rf build testing_products lib ./src/dicts/
	mkdir  build lib

echo "#############################################"
echo "#         GENERATE ROOT DICTIONARIES        #"
echo "#############################################"
echo " "

	cd include
	
	echo "rootcint: ./include/MiBin1D.h         -> ./lib/MiBin1Ddict_rdict.pcm         + ./src/dicts/MiBin1Ddict.cpp"
      	      rootcint -f ../lib/MiBin1Ddict.cpp          MiBin1D.h+
	echo "rootcint: ./include/MiBin2D.h         -> ./lib/MiBin2Ddict_rdict.pcm         + ./src/dicts/MiBin2Ddict.cpp"
      	      rootcint -f ../lib/MiBin2Ddict.cpp          MiBin2D.h+
	echo "rootcint: ./include/MiCD.h            -> ./lib/MiCDdict_rdict.pcm            + ./src/dicts/MiCDdict.cpp"
      	      rootcint -f ../lib/MiCDdict.cpp          MiCD.h+
	echo "rootcint: ./include/MiCDCaloHit.h     -> ./lib/MiCDCaloHitdict_rdict.pcm     + ./src/dicts/MiCDCaloHitdict.cpp"
      	      rootcint -f ../lib/MiCDCaloHitdict.cpp   MiCDCaloHit.h+
	echo "rootcint: ./include/MiCDParticle.h    -> ./lib/MiCDParticledict_rdict.pcm    + ./src/dicts/MiCDParticledict.cpp"
      	      rootcint -f ../lib/MiCDParticledict.cpp  MiCDParticle.h+
	echo "rootcint: ./include/MiChosenEvent1D.h -> ./lib/MiChosenEvent1Ddict_rdict.pcm + ./src/dicts/MiChosenEvent1Ddict.cpp"
      	      rootcint -f ../lib/MiChosenEvent1Ddict.cpp  MiChosenEvent1D.h+
	echo "rootcint: ./include/MiChosenEvent2D.h -> ./lib/MiChosenEvent2Ddict_rdict.pcm + ./src/dicts/MiChosenEvent2Ddict.cpp"
      	      rootcint -f ../lib/MiChosenEvent2Ddict.cpp  MiChosenEvent2D.h+
	echo "rootcint: ./include/MiEvent.h         -> ./lib/MiEventdict_rdict.pcm         + ./src/dicts/MiEventdict.cpp"
      	      rootcint -f ../lib/MiEventdict.cpp       MiEvent.h+
	echo "rootcint: ./include/MiFilters.h       -> ./lib/MiFiltersdict_rdict.pcm       + ./src/dicts/MiFiltersdict.cpp"
      	      rootcint -f ../lib/MiFiltersdict.cpp     MiFilters.h+
	echo "rootcint: ./include/MiGID.h           -> ./lib/MiGIDdict_rdict.pcm           + ./src/dicts/MiGIDdict.cpp"
      	      rootcint -f ../lib/MiGIDdict.cpp         MiGID.h+
	echo "rootcint: ./include/MiPTD.h           -> ./lib/MiPTDdict_rdict.pcm           + ./src/dicts/MiPTDdict.cpp"
      	      rootcint -f ../lib/MiPTDdict.cpp         MiPTD.h+
	echo "rootcint: ./include/MiSD.h            -> ./lib/MiSDdict_rdict.pcm            + ./src/dicts/MiSDdict.cpp"
      	      rootcint -f ../lib/MiSDdict.cpp          MiSD.h+
	echo "rootcint: ./include/MiSDCaloHit.h     -> ./lib/MiSDCaloHitdict_rdict.pcm     + ./src/dicts/MiSDCaloHitdict.cpp"
      	      rootcint -f ../lib/MiSDCaloHitdict.cpp   MiSDCaloHit.h+
	echo "rootcint: ./include/MiSDParticle.h    -> ./lib/MiSDParticledict_rdict.pcm    + ./src/dicts/MiSDParticledict.cpp"
      	      rootcint -f ../lib/MiSDParticledict.cpp  MiSDParticle.h+
	echo "rootcint: ./include/MiSDVisuHit.h     -> ./lib/MiSDVisuHitdict_rdict.pcm     + ./src/dicts/MiSDVisuHitdict.cpp"
      	      rootcint -f ../lib/MiSDVisuHitdict.cpp  MiSDVisuHit.h+
	echo "rootcint: ./include/MiTools.h         -> ./lib/MiToolsdict_rdict.pcm         + ./src/dicts/MiToolsdict.cpp"
      	      rootcint -f ../lib/MiTools.cpp           MiTools.h+
	echo "rootcint: ./include/MiVector3D.cpp    -> ./lib/MiVector3Ddict_rdict.pcm      + ./src/dicts/MiVector3Ddict.cpp"
      	      rootcint -f ../lib/MiVector3Ddict.cpp    MiVector3D.h+
	echo "rootcint: ./include/MiVertex.cpp      -> ./lib/MiVertexdict_rdict.pcm        + ./src/dicts/MiVertexdict.cpp"
      	      rootcint -f ../lib/MiVertexdict.cpp      MiVertex.h+
	echo " "
	echo "Dictionaries generated!"
	echo " "

	cd ..

	cp -R ./lib/ ./src/dicts/
	rm -rf ./lib/*.cpp
	rm -rf ./src/dicts/*.pcm

echo "#############################################"
echo "#         MODULE COMPILATION (CMAKE)        #"
echo "#############################################"
echo " "

	cd build

	
	cmake .. || { echo $'\n****Cmake failed, installation of MiModule aborted!****' ; exit 1; }

echo " "
echo "#############################################"
echo "#         MODULE COMPILATION (MAKE)         #"
echo "#############################################"
echo " "

	make    || { echo $'\n****Make failed, installation of MiModule aborted!****' ; exit 1; }

	mkdir  ../testing_products
	cp p_MiModule_v00.conf ../testing_products/p_MiModule_v00.conf
	rm p_MiModule_v00.conf

	cp libMiModule.so ../lib/libMiModule.so
	rm libMiModule.so

echo " "
echo "#############################################"
echo "#           MODULE TESTING (MAKE)           #"
echo "#############################################"
echo " "

	make test
