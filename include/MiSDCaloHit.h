#ifndef MISDCALOHIT_HH
#define MISDCALOHIT_HH

// MiHeaders
#include "MiGID.h"

// ROOT headers
#include "TObject.h"

using namespace std;

class MiSDCaloHit: public TObject
{
	public:
		//! Constructor
		MiSDCaloHit();

		//! Destructor
		~MiSDCaloHit();

		double getE();
		MiGID* getGID();

		int setE(double in_e);
		int setGID(MiGID& in_GID);
		
	private:

		double E;	// Particle energy
		MiGID GID;	// Hit GID

	ClassDef(MiSDCaloHit,1);		
};

#endif // MISDCALOHIT_HH
