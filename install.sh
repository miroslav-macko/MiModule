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
	
	echo "rootcint: ./include/MiCD.h         -> ./lib/MiCDdict_rdict.pcm         + ./src/dicts/MiCDdict.cpp"
      	      rootcint -f ../lib/MiCDdict.cpp          MiCD.h+
	echo "rootcint: ./include/MiCDCaloHit.h  -> ./lib/MiCDCaloHitdict_rdict.pcm  + ./src/dicts/MiCDCaloHitdict.cpp"
      	      rootcint -f ../lib/MiCDCaloHitdict.cpp   MiCDCaloHit.h+
	echo "rootcint: ./include/MiCDParticle.h -> ./lib/MiCDParticledict_rdict.pcm + ./src/dicts/MiMiCDParticledict.cpp"
      	      rootcint -f ../lib/MiCDParticledict.cpp  MiCDParticle.h+
	echo "rootcint: ./include/MiEvent.h      -> ./lib/MiEventdict_rdict.pcm      + ./src/dicts/MiEventdict.cpp"
      	      rootcint -f ../lib/MiEventdict.cpp       MiEvent.h+
	echo "rootcint: ./include/MiFilters.h    -> ./lib/MiFiltersdict_rdict.pcm    + ./src/dicts/MiFiltersdict.cpp"
      	      rootcint -f ../lib/MiFiltersdict.cpp     MiFilters.h+
	echo "rootcint: ./include/MiGID.h        -> ./lib/MiGIDdict_rdict.pcm        + ./src/dicts/MiGIDdict.cpp"
      	      rootcint -f ../lib/MiGIDdict.cpp         MiGID.h+
	echo "rootcint: ./include/MiPTD.h        -> ./lib/MiPTDdict_rdict.pcm        + ./src/dicts/MiPTDdict.cpp"
      	      rootcint -f ../lib/MiPTDdict.cpp         MiPTD.h+
	echo "rootcint: ./include/MiSD.h         -> ./lib/MiSDdict_rdict.pcm         + ./src/dicts/MiSDdict.cpp"
      	      rootcint -f ../lib/MiSDdict.cpp          MiSD.h+
	echo "rootcint: ./include/MiSDCaloHit.h  -> ./lib/MiSDCaloHitdict_rdict.pcm  + ./src/dicts/MiSDCaloHitdict.cpp"
      	      rootcint -f ../lib/MiSDCaloHitdict.cpp   MiSDCaloHit.h+
	echo "rootcint: ./include/MiSDParticle.h -> ./lib/MiSDParticledict_rdict.pcm + ./src/dicts/MiSDParticledict.cpp"
      	      rootcint -f ../lib/MiSDParticledict.cpp  MiSDParticle.h+
	echo "rootcint: ./include/MiTools.h      -> ./lib/MiToolsdict_rdict.pcm      + ./src/dicts/MiToolsdict.cpp"
      	      rootcint -f ../lib/MiTools.cpp           MiTools.h+
	echo "rootcint: ./include/MiVector3D.cpp -> ./lib/MiVector3Ddict_rdict.pcm   + ./src/dicts/MiVector3Ddict.cpp"
      	      rootcint -f ../lib/MiVector3Ddict.cpp    MiVector3D.h+
	echo "rootcint: ./include/MiVertex.cpp   -> ./lib/MiVertexdict_rdict.pcm     + ./src/dicts/MiVertexdict.cpp"
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

	make

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
