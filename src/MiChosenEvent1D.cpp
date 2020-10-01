#include "MiChosenEvent1D.h"
#include "MiEvent.h"
#include <iostream>

using namespace std;

MiChosenEvent1D::MiChosenEvent1D()
{
}

MiChosenEvent1D::~MiChosenEvent1D()
{
}

void MiChosenEvent1D::dump()
{
	cout << endl << "Real angle : " << RealAng << endl;
	cout <<         "Bin  angle : " << BinAng  << endl;
	cout <<         "Bin  number: " << BinNo   << endl;
	cout <<         "y1 = " << y1 << "mm, " << "y2 = " << y2 << "mm " << endl;
	cout <<         "z1 = " << z1 << "mm, " << "z2 = " << z2 << "mm " << endl; 
	cout <<         "dY = " << dY << "mm, " << "dZ = " << dZ << "mm " << endl; 
}

double MiChosenEvent1D::getBinAng()
{
	return BinAng;
}

double MiChosenEvent1D::getBinNo() 
{
	return BinNo;
}

double MiChosenEvent1D::getdYdZ(int i)
{
	if (i==1)
	{
		return dY;
	}
	else if (i==2)
	{
		return dZ;
	}
	else
	{
		cout << "MiChosenEvent1D::getdYdZ(int): Wrong input, argument should be only 1 or 2!";
	}
}

double MiChosenEvent1D::getRealAng()
{
	return RealAng;
}

void MiChosenEvent1D::setBinAng(double a)
{
	BinAng = a;
}

void MiChosenEvent1D::setBinNo(int bin)
{
	BinNo = bin;
}

void MiChosenEvent1D::setdYdZ(MiEvent* E)
{
	bool first = true;
		
	for (int j=0; j < 2; j++)
	{
		for (int k=0; k < E->getPTDNoVert(j); k++)	
		// Runs over all vertices belonging to electron No. j
		{
			if (E->getPTDVertpos(j,k) == "source foil") 
			// Get only vertices on source foil
			{	
				if (first)	
				// Saves first foil vertex position for particle
				{
					y1 = E->getPTDverY(j,k);
					z1 = E->getPTDverZ(j,k);
					first = false;
				}
				else 	       
				// Saves second foil vertex position for particle
				{
					y2 = E->getPTDverY(j,k);
					z2 = E->getPTDverZ(j,k);
					first = true;
				}
			}
		}
	}
		
	dY = y1 - y2;
	dZ = z1 - z2;
}

void MiChosenEvent1D::setRealAng(double a)
{
	RealAng = a;
}
