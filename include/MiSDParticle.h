#ifndef MISDPARTICLE_HH
#define MISDPARTICLE_HH

// ROOT headers
#include "TObject.h"

// MiHeaders
#include "MiVector3D.h"

using namespace std;

class MiSDParticle: public TObject
{
	public:
		//! Constructor
		MiSDParticle();

		//! Destructor
		~MiSDParticle();

		double      getE();
		MiVector3D* getp();
		double      gett();
		MiVector3D* getr();

		int setE(double in_e);
		int setp(double in_px, double in_py, double in_pz);
		int sett(double in_t);
		int setr(double in_x, double in_y, double in_z);

	private:

		double E;	// Particle energy
		MiVector3D p;	// Particle momentum
		double t;	// Particle emission time
		MiVector3D r;	// Particle original position

	ClassDef(MiSDParticle,1);		
};

#endif // MISDPARTICLE_HH
