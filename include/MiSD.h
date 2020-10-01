#ifndef MISD_HH
#define MISD_HH

// MiHeaders
#include "MiSDCaloHit.h"
#include "MiSDParticle.h"
#include "MiSDVisuHit.h"

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
		int addvisuhit(MiSDVisuHit& in_visu); // adds visuhit into database, added 30.5.2017

		MiSDParticle* getpart(int in_no);
		vector<MiSDParticle>* getpartv();
		MiSDCaloHit*  getcalohit(int in_no);
		vector<MiSDCaloHit>*  getcalohitv();
		vector<MiSDVisuHit>*  getvisuhitv(); // returns vector of visu hits, added 30.5.2017
		
		void print();	
		void printVisuHit(int i_hit);	// prints i-th visu hit on the screen

	private:

		int noOfCaloHits;

		vector<MiSDParticle> part;
		vector<MiSDCaloHit>  calohit;
		vector<MiSDVisuHit>  visuhit;	// Stores all visu hits from simulation, added 30.5.2017

	ClassDef(MiSD,1);		
};

#endif // MISD_HH
