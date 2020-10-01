#include "MiChosenEvent2D.h"
#include "MiEvent.h"
#include <iostream>

using namespace std;

MiChosenEvent2D::MiChosenEvent2D()
{
	coordinates_set = false;	// Calling empty constructor - coordinates' value are left blank
}

MiChosenEvent2D::MiChosenEvent2D(MiEvent* E)
{
	this->setdYdZ(E);
}

MiChosenEvent2D::~MiChosenEvent2D()
{
}

void MiChosenEvent2D::dump()
{
	cout << endl << "Real values (Val1,Val2): " << RealVal1 << ", " << RealVal2 << endl;
	cout <<         "Bin  values (Val1,Val2): " << BinVal1  << ", " << BinVal2  << endl;
	cout <<         "Bin  number (Val1,Val2): " << BinNo1 << ", " << BinNo2 << endl;
	cout <<         "y1 = " << y1 << "mm, " << "y2 = " << y2 << "mm " << endl;
	cout <<         "z1 = " << z1 << "mm, " << "z2 = " << z2 << "mm " << endl; 
	cout <<         "dY = " << dY << "mm, " << "dZ = " << dZ << "mm " << endl; 
}

double MiChosenEvent2D::getBinVal(int i)
{
	if (i==1)
	{
		return BinVal1;
	}
	else if (i==2)
	{
		return BinVal2;
	}
	else
	{
		cout << "MiChosenEvent2D::getBinVal(int): Wrong input, argument should be only 1 or 2!";
	}
}

double MiChosenEvent2D::getBinNo(int i) 
{
	if (i==1)
	{
		return BinNo1;
	}
	else if (i==2)
	{
		return BinNo2;
	}
	else
	{
		cout << "MiChosenEvent2D::getBinNo(int): Wrong input, argument should be only 1 or 2!";
	}
}

double MiChosenEvent2D::getdYdZ(int i)
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
		cout << "MiChosenEvent2D::getdYdZ(int): Wrong input, argument should be only 1 or 2!";
	}
}

double MiChosenEvent2D::getRealVal(int i)
{
	if (i==1)
	{
		return RealVal1;
	}
	else if (i==2)
	{
		return RealVal2;
	}
	else
	{
		cout << "MiChosenEvent2D::getRealVal(int): Wrong input, argument should be only 1 or 2!";
	}
}

double MiChosenEvent2D::getY(int i)
{
	if (!coordinates_set)
	{
		cout << "MiChosenEvent2D::getY(int): Coordinates are not set yet! Call MiChosenEvent2D::setdYdZ(MiEvent* E) first! " << endl;
	}
	else
	{ 
		if (i==1)
		{
			return y1;
		}
		else if (i==2)
		{
			return y2;
		}
		else
		{
			cout << "MiChosenEvent2D::getY(int): Wrong input, argument should be only 1 or 2!";
		}
	}
}

double MiChosenEvent2D::getZ(int i)
{
	if (!coordinates_set)
	{
		cout << "MiChosenEvent2D::getY(int): Coordinates are not set yet! Call MiChosenEvent2D::setdYdZ(MiEvent* E) first! " << endl;
	}
	else 
	{
		if (i==1)
		{
			return z1;
		}
		else if (i==2)
		{
			return z2;
		}
		else
		{
			cout << "MiChosenEvent2D::getZ(int): Wrong input, argument should be only 1 or 2!";
		}
	}
}

void MiChosenEvent2D::setBinVal(int i, double Val)
{
	if (i==1)
	{
		BinVal1 = Val;
	}
	else if (i==2)
	{
		BinVal2 = Val;
	}
	else
	{
		cout << "MiChosenEvent2D::setBinVal(int, double): Wrong input, argument int should be only 1 or 2!";
	}
}

void MiChosenEvent2D::setBinNo(int i, int bin)
{
	if (i==1)
	{
		BinNo1 = bin;
	}
	else if (i==2)
	{
		BinNo2 = bin;
	}
	else
	{
		cout << "MiChosenEvent2D::setBinNo(int, int): Wrong input, argument int should be only 1 or 2!";
	}
}

void MiChosenEvent2D::setdYdZ(MiEvent* E)
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

	coordinates_set = true;
}

void MiChosenEvent2D::setRealVal(int i, double Val)
{
	if (i==1)
	{
		RealVal1 = Val;
	}
	else if (i==2)
	{
		RealVal2 = Val;
	}
	else
	{
		cout << "MiChosenEvent2D::setRealVal(int, double): Wrong input, argument int should be only 1 or 2!";
	}
}
