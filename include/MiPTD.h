#ifndef MIPTD_HH
#define MIPTD_HH

// MiHeaders
#include "MiCDParticle.h"
#include "MiVertex.h"

// ROOT headers
#include "TObject.h"

// Standard headers
#include "vector"

using namespace std;

class MiPTD: public TObject
{
	public:
		//! Constructor
		MiPTD();

		//! Destructor
		~MiPTD();	

		int addpart(MiCDParticle& in_part);

		MiCDParticle* getpart(int in_i);
		vector<MiCDParticle>* getpartv();

		void print();

	private:

		vector<MiCDParticle> part;

	ClassDef(MiPTD,1);		
};

#endif // MIPTD_HH
