#ifndef MIMODULE_HH
#define MIMODULE_HH

// Bayeux hlavicky
#include "bayeux/dpp/base_module.h"
#include "bayeux/mctools/simulated_data.h"
#include "falaise/snemo/processing/module.h"
#include "falaise/snemo/datamodels/calibrated_data.h"
#include "falaise/snemo/datamodels/particle_track_data.h"

// Mi hlavicky
#include "MiCD.h"
#include "MiEvent.h"
#include "MiGID.h"
#include "MiSD.h"
#include "MiSDCaloHit.h"
#include "MiSDParticle.h"

// ROOT hlavicky
#include "TFile.h"
#include "TTree.h"

// Standardne hlavicky
#include "ctime"
#include "string"

using namespace std;

class MiModule : public dpp::base_module
{
	public:
		//! Construct module
		MiModule();

		//! Destructor
		virtual ~MiModule();

		//! Configure the module
		virtual void initialize( const datatools::properties& myConfig,
				  	  datatools::service_manager& flServices,
			        	dpp::module_handle_dict_type& what);
                                                                                      
		//! Process supplied data record
		virtual dpp::base_module::process_status process(datatools::things& workItem);

		//! Reset the module
		virtual void reset();

		void fillSD(datatools::things& workI);
		void fillCD(datatools::things& workI);
		void fillPTD(datatools::things& workI);
 
		string its(int in_i); 	// Gets a integer number and returns string with this number (its=inttostring)

	private:

		void setInitialized(bool _init);
		bool isInitialized();
		bool init;

		// collection of variables used in fillSD 
		mctools::simulated_data       SD;
		genbb::primary_event 	      primev;
		list<genbb::primary_particle> prcoll;
		genbb::primary_particle       the_particle;
		mctools::base_step_hit        the_scin_hit;

		// collection of variables used in fillCD 
		snemo::datamodel::calibrated_data CD;

		// collection of variables used in fillPTD 
		snemo::datamodel::particle_track_data      PTD;
		snemo::datamodel::ParticleHdlCollection    particles_collection;

		MiEvent E;

		int eventNo;
		time_t buneve_st;
		time_t buneve_end;

		TFile* subor;
		TTree* strom;		
	
		// Macro which automatically creates the interface needed
		// to enable the module to be loaded at runtime
		DPP_MODULE_REGISTRATION_INTERFACE(MiModule);
};

#endif // MIMODULE_HH
