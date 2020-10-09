// MiHeaders
#include "MiSDParticle.h"

ClassImp(MiSDParticle);

MiSDParticle::MiSDParticle()
{
}

MiSDParticle::~MiSDParticle()
{
}

string MiSDParticle::getname()
{
	return name;
}

double MiSDParticle::getE()
{
	return E;
}

MiVector3D* MiSDParticle::getp()
{
	return &p;
}
		
double MiSDParticle::gett()
{
	return t;
}
		
MiVector3D* MiSDParticle::getr()
{
	return &r;
}

int MiSDParticle::setname(string in_nm)
{
	name=in_nm;
	return 0;
}

int MiSDParticle::setE(double in_e)
{
	E=in_e;
	return 0;
}

int MiSDParticle::setp(double in_px, double in_py, double in_pz)
{
	p.setX(in_px);
	p.setY(in_py);
	p.setZ(in_pz);
	return 0;
}

int MiSDParticle::sett(double in_t)
{
	t=in_t;
	
	return 0;
}

int MiSDParticle::setr(double in_x, double in_y, double in_z)
{
	r.setX(in_x);
	r.setY(in_y);
	r.setZ(in_z);
	return 0;
}

