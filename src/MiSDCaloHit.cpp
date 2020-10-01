// MiHeaders
#include "MiSDCaloHit.h"

ClassImp(MiSDCaloHit);

MiSDCaloHit::MiSDCaloHit()
{
}

MiSDCaloHit::~MiSDCaloHit()
{
}
	
double MiSDCaloHit::getE()
{
	return E;
}

MiGID* MiSDCaloHit::getGID()
{
	return &GID;
}

int MiSDCaloHit::setE(double in_e)
{
	E = in_e;
	return 0;
}

int MiSDCaloHit::setGID(MiGID& in_GID)
{
	GID = in_GID;
	return 0;
}



