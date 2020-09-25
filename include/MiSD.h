#ifndef MISD_HH
#define MISD_HH

// MiHeaders
#include "MiSDCaloHit.h"
#include "MiSDParticle.h"

// ROOT headers
#include "TObject.h"

// Standard headers
#include "iostream"
#include "vector"

using namespace std;

class MiSD: public TObject
{
	public:
		//! Constructor
		MiSD();

		//! Destructor
		~MiSD();

		int getnoofcaloh();
		
		int addpart(MiSDParticle& in_part);
		int addcalohit(MiSDCaloHit& in_calo);

		MiSDParticle* getpart(int in_no);
		vector<MiSDParticle>* getpartv();
		MiSDCaloHit*  getcalohit(int in_no);
		vector<MiSDCaloHit>*  getcalohitv();
		
		void print();		

	private:

		int noOfCaloHits;

		vector<MiSDParticle> part;
		vector<MiSDCaloHit>  calohit;

	ClassDef(MiSD,1);		
};

#endif // MISD_HH
