// MiHeaders
#include "MiCDParticle.h"

ClassImp(MiCDParticle);

MiCDParticle::MiCDParticle()
{
}

MiCDParticle::~MiCDParticle()
{
}

int MiCDParticle::addcalohit(MiCDCaloHit& in_calohit)
{
	calohit.push_back(in_calohit);
	return 0;
}

int MiCDParticle::addvertex(MiVertex& in_vertex)
{
	vertex.push_back(in_vertex);
	return 0;
}

MiCDCaloHit* MiCDParticle::getcalohit(int in_no)
{
	return &(calohit.at(in_no));
}

vector<MiCDCaloHit>* MiCDParticle::getcalohitv()
{
	return &calohit;
}

int MiCDParticle::getcharge()
{
	return charge;
}


MiVertex* MiCDParticle::getvertex(int in_no)
{
	return &(vertex.at(in_no));
}

vector<MiVertex>* MiCDParticle::getvertexv()
{
	return &vertex;
}
		
int MiCDParticle::setcalohit(MiCDCaloHit& in_calohit)
{
	calohit.push_back(in_calohit);
	return 0;
}

int MiCDParticle::setcharge(int in_ch)
{
	charge = in_ch;
	return 0;
}
		
int MiCDParticle::setvertex(MiVertex& in_vertex)
{
	vertex.push_back(in_vertex);
	return 0;
}


