#ifndef MISDVISUHIT_HH
#define MISDVISUHIT_HH

// MiHeaders
#include "MiVector3D.h"

// ROOT headers
#include "TObject.h"

// Standard headers
#include "string"

using namespace std;

class MiSDVisuHit: public TObject
{
	public:
		//! Constructor
		MiSDVisuHit();

		//! Destructor
		~MiSDVisuHit();

		void setEdep        (double _Ed);				// Added 16.10.2020
		void setMaterial    (string mat);				// Added 28.3.2018 15:25
		void setParentID    (int ID);					// Added 28.3.2018 15:25
		void setParticleName(string name);				// Added 27.3.2018 19:10
		void setProcess	    (string proc);				// Added 28.3.2018 15:25
		void setStart       (double x, double y, double z);
		void setStop        (double x, double y, double z);
		void setStepNo      (int No);					// Added 28.3.2018 15:25
		void setTrackID	    (int ID);					// Added 28.3.2018 15:25
		void setTStart	    (double _ti);				// Added 16.10.2020
		void setTStop	    (double _tf);				// Added 16.10.2020

		double 		getEdep();					// Added 16.10.2020
		double 		getLength();					// Added 13.10.2020
		string 		getMaterial();					// Added 28.3.2018 15:25
		int 		getParentID();					// Added 28.3.2018 15:25
		string      	getParticleName();				// Added 27.3.2018 19:10
		string 		getProcess();					// Added 28.3.2018 15:25
		MiVector3D* 	getStart();
		MiVector3D* 	getStop();
		int 		getStepNo();					// Added 28.3.2018 15:25
		int 		getTrackID();					// Added 28.3.2018 15:25
		double 		getTStart();					// Added 16.10.2020
		double 		getTStop();					// Added 16.10.2020
	
		void print();
		
	private:

		int 		step_no;				// Added 28.3.2018 15:25
		
		bool 		is_init_material;			// Added 28.3.2018 15:25
		bool 		is_init_process;			// Added 28.3.2018 15:25
		bool 		is_init_start;				// Added 13.10.2020
		bool 		is_init_stop;				// Added 13.10.2020

		string     	particle_name;				// Added 27.3.2018 19:10
		
		int		parent_ID;				// Added 28.3.2018 15:25
		int        	track_ID;				// Added 28.3.2018 15:25

		string 		material;				// Added 28.3.2018 15:25
		string		process;				// Added 28.3.2018 15:25

		MiVector3D 	start;	// Start position of step hit
		MiVector3D 	stop;	// Stop position of step hit
		double		length;					// Added 13.10.2020

		double		t_start;				// Added 16.10.2020
		double		t_stop;					// Added 16.10.2020

		double 		Edep;					// Added 16.10.2020

	ClassDef(MiSDVisuHit,1);		
};

#endif // MISDVISUHIT_HH
