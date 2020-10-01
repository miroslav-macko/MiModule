// MiHeaders
#include "MiCDCaloHit.h"

ClassImp(MiCDCaloHit);

MiCDCaloHit::MiCDCaloHit()
{
}

MiCDCaloHit::~MiCDCaloHit()
{
}
	
double MiCDCaloHit::getE()
{
	return E;
}

double MiCDCaloHit::getEs()
{
	return Es;
}

double MiCDCaloHit::gett()
{
	return t;
}

double MiCDCaloHit::getts()
{
	return ts;
}

int MiCDCaloHit::setE(double in_E)
{
	E = in_E;
	return 0;
}

int MiCDCaloHit::setEs(double in_Es)
{
	Es = in_Es;
	return 0;
}

int MiCDCaloHit::sett(double in_t)
{
	t = in_t;
	return 0;
}

int MiCDCaloHit::setts(double in_ts)
{
	ts = in_ts;
	return 0;
}



