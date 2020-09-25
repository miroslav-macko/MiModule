// MiHeaders
#include "MiEvent.h"

ClassImp(MiEvent);

MiEvent::MiEvent()
{
	hasCD = false;
	hasPTD = false;
	hasSD = false;

	totE = 0.0;
}

MiEvent::~MiEvent()
{
}

MiCD* MiEvent::getCD()
{
	if(hasCD)
	{	
		return &CD;
	}
	else
	{
		cout << "Warning: CD was not set!" << endl;
		return &CD;
	}
}

MiPTD* MiEvent::getPTD()
{
	if(hasPTD)
	{	
		return &PTD;
	}
	else
	{
		cout << "Warning: PTD was not set!" << endl;
		return &PTD;
	}
}

MiSD* MiEvent::getSD()
{
	if(hasSD)
	{	
		return &SD;
	}
	else
	{
		cout << "Warning: SD was not set!" << endl;
		return &SD;
	}
}

double MiEvent::gettotE()
{
	if(hasCD)
	{	
		return totE;
	}
	else
	{
		return -1.0;
	}
}

void MiEvent::print()
{
	cout << "Total energy: " << totE << endl;
	printSD();
	cout << endl;
	printCD();
	cout << endl;
	printPTD();
}

void MiEvent::printCD()
{
	if(hasCD)
	{
		CD.print();
	}
	else
	{
		cout << endl << "CD not set!" << endl;
	}
}

void MiEvent::printPTD()
{
	if(hasPTD)
	{
		PTD.print();
	}
	else
	{
		cout << endl << "PTD not set!" << endl;
	}
}

void MiEvent::printSD()
{
	if(hasSD)
	{
		SD.print();
	}
	else
	{
		cout << endl << "SD not set!" << endl;
	}
}

int MiEvent::setCD(MiCD& in_CD)
{
	CD = in_CD;
	hasCD = true;
	return 0;
}

int MiEvent::setPTD(MiPTD& in_PTD)
{
	PTD = in_PTD;
	hasPTD = true;
	return 0;
}

int MiEvent::setSD(MiSD& in_SD)
{
	SD = in_SD;
	hasSD = true;
	return 0;
}

int MiEvent::settotE(double in_totE)
{
	totE = in_totE;
	return 0;
}
/////////////////////////////////////////////////////////////////////////////////////////////
double MiEvent::getPTDverX(int in_part, int in_vert)
{
	return PTD.getpart(in_part)->getvertex(in_vert)->getr()->getX();
}

double MiEvent::getPTDverY(int in_part, int in_vert)
{
	return PTD.getpart(in_part)->getvertex(in_vert)->getr()->getY();
}

double MiEvent::getPTDverZ(int in_part, int in_vert)
{
	return PTD.getpart(in_part)->getvertex(in_vert)->getr()->getZ();
}

int MiEvent::getPTDNoPart()
{
	return PTD.getpartv()->size();
}

int MiEvent::getPTDNoVert(int in_part)
{
	return PTD.getpart(in_part)->getvertexv()->size();
}

string MiEvent::getPTDVertpos(int in_part, int in_vert)
{
	return PTD.getpart(in_part)->getvertex(in_vert)->getpos();
}
