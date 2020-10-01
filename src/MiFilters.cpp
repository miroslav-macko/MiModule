// MiHeaders
#include "MiFilters.h"

ClassImp(MiFilters);

MiFilters::MiFilters(MiEvent* in_e, const double in_elow, const double in_ehi)
{
/////////	
	if (in_e->gettotE() > in_elow)
	{
		hasTotEneMoreThanLim = true;
	}
	else
	{
		hasTotEneMoreThanLim = false;
	}

/////////
	if (in_e->gettotE() < in_ehi)
	{
		hasTotEneLessThanLim = true;
	}
	else
	{
		hasTotEneLessThanLim = false;
	}

/////////
	int noAssCalo = 0;	

	for(UInt_t i=0; i < in_e->getPTD()->getpartv()->size(); i++)
	{
		noAssCalo += in_e->getPTD()->getpart(i)->getcalohitv()->size();
	}

	if (noAssCalo == 2)
	{
		hasTwoAssCaloHits = true;
	}
	else
	{
		hasTwoAssCaloHits = false;
	}

/////////
	if (in_e->getCD()->getnoofcaloh() == 2)
	{
		hasTwoCaloHits = true;
	}
	else
	{
		hasTwoCaloHits = false;
	}

/////////
	int noTwoVer = 0;	

	for(UInt_t i=0; i < in_e->getPTD()->getpartv()->size(); i++)
	{
		for (UInt_t j=0; j < in_e->getPTD()->getpart(i)->getvertexv()->size(); j++)
		{
			if (in_e->getPTD()->getpart(i)->getvertex(j)->getpos() == "source foil")
			{
				noTwoVer++;
			}
		}
	}
		
	if (noTwoVer == 2)
	{
		hasTwoFoilVert = true;
	}
	else
	{
		hasTwoFoilVert = false;
	}

/////////
	int noTwoNeg = 0;	

	for(UInt_t i=0; i < in_e->getPTD()->getpartv()->size(); i++)
	{
		if (in_e->getPTD()->getpart(i)->getcharge() == -1)
		{
			noTwoNeg++;
		}
	}
		
	if (noTwoNeg == 2)
	{
		hasTwoNegCh = true;
	}
	else
	{
		hasTwoNegCh = false;
	}

/////////
	if (in_e->getPTD()->getpartv()->size() == 2)
	{
		hasTwoPart = true;
	}
	else
	{
		hasTwoPart = false;
	}

/////////
/////////
	if (hasTotEneMoreThanLim &&
	    hasTotEneLessThanLim &&
	    hasTwoAssCaloHits &&
	    hasTwoCaloHits &&
	    hasTwoFoilVert &&
	    hasTwoNegCh &&
	    hasTwoPart)
	{
		hasAll = true;
	}
	else
	{
		hasAll = false;
	}
}

MiFilters::~MiFilters()
{
}

bool MiFilters::getTotEneMoreThanLim()
{
	return hasTotEneMoreThanLim;
}

bool MiFilters::getTotEneLessThanLim()
{
	return hasTotEneLessThanLim;
}

bool MiFilters::getTwoAssCaloHits()
{
	return hasTwoAssCaloHits;
}

bool MiFilters::getTwoCaloHits()
{
	return hasTwoCaloHits;
}

bool MiFilters::getTwoFoilVert()
{
	return hasTwoFoilVert;
}

bool MiFilters::getTwoNegCh()
{
	return hasTwoNegCh;
}

bool MiFilters::getTwoPart()
{
	return hasTwoPart;
}

bool MiFilters::getAll()
{
	return hasAll;
}

void MiFilters::print(int in_i)
{
	cout << "*** Event " << in_i << " ***" << endl;
	cout << "TWO CALO HITS        : " << hasTwoCaloHits       << endl;
	cout << "TWO CALO ASSOC. HITS : " << hasTwoAssCaloHits    << endl;
	cout << "TWO NEGATIVE CHARGES : " << hasTwoNegCh	  << endl;
	cout << "TWO FOIL VERTICES    : " << hasTwoFoilVert       << endl;
	cout << "TWO PART             : " << hasTwoPart           << endl;
	cout << "ENERGY MORE THAN MIN : " << hasTotEneMoreThanLim << endl;
	cout << "ENERGY LESS THAN MAX : " << hasTotEneLessThanLim << endl;
	cout << "ALL                  : " << hasAll	          << endl << endl;
} 
