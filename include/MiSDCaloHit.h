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

		double  getE();
		MiGID*  getGID();
		string  getname();				// Added 13.11.2020

		int  setE(double in_e);
		int  setGID(MiGID& in_GID);
		int  setname(string in_name);			// Added 13.11.2020
		
	private:

		double 		E;			// Particle energy
		MiGID 		GID;			// Hit GID
		string     	name;		// Added 13.11.2020		

	ClassDef(MiSDCaloHit,1);		
};

#endif // MISDCALOHIT_HH
