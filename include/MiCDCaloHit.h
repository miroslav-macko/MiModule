#ifndef MICDCALOHIT_HH
#define MICDCALOHIT_HH

// MiHeaders
#include "MiGID.h"

// ROOT headers
#include "TObject.h"

using namespace std;

class MiCDCaloHit: public TObject
{
	public:
		//! Constructor
		MiCDCaloHit();

		//! Destructor
		~MiCDCaloHit();

		double getE();
		double getEs();
		MiGID* getGID();
		double gett();
		double getts();

		int setE(double in_E);
		int setEs(double in_Es);
		int setGID(MiGID& in_GID);
		int sett(double in_t);
		int setts(double in_ts);
		
	private:

		double E;	// Particle energy
		double Es;	// Particle energy sigma
		MiGID GID;	// Hit GID
		double t;	// Particle arrival time
		double ts;	// Particle arrival time sigma

	ClassDef(MiCDCaloHit,1);		
};

#endif // MICDCALOHIT_HH
