#ifndef MICDPARTICLE_HH
#define MICDPARTICLE_HH

// ROOT headers
#include "TObject.h"

// MiHeaders
#include "MiCDCaloHit.h"
#include "MiVertex.h"

// Standard headers
#include "vector"

using namespace std;

class MiCDParticle: public TObject
{
	public:
		//! Constructor
		MiCDParticle();

		//! Destructor
		~MiCDParticle();
	
		int addcalohit(MiCDCaloHit& in_calohit);
		int addvertex(MiVertex& in_vertex);

		MiCDCaloHit* getcalohit(int in_no);
		vector<MiCDCaloHit>* getcalohitv();

		int getcharge();

		MiVertex* getvertex(int in_no);
		vector<MiVertex>* getvertexv();

		int setcalohit(MiCDCaloHit& in_calohit);
		int setcharge(int in_ch);
		int setvertex(MiVertex& in_vertex);

	private:

		int charge;

		vector<MiCDCaloHit> calohit;	// Particle calibrated calo hit(s)
		vector<MiVertex> vertex;	// Particle vertices

	ClassDef(MiCDParticle,1);		
};

#endif // MICDPARTICLE_HH
