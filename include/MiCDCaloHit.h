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
		double gett();
		double getts();

		int setE(double in_E);
		int setEs(double in_Es);
		int sett(double in_t);
		int setts(double in_ts);
		
	private:

		double E;	// Particle energy
		double Es;	// Particle energy sigma
		double t;	// Particle arrival time
		double ts;	// Particle arrival time sigma

	ClassDef(MiCDCaloHit,1);		
};

#endif // MICDCALOHIT_HH
