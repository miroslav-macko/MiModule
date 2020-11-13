// MiHeaders
#include "MiSD.h"
#include "MiSDVisuHit.h"

ClassImp(MiSD);

MiSD::MiSD()
{
}

MiSD::~MiSD()
{
}

int MiSD::addpart(MiSDParticle& in_part)
{
	part.push_back(in_part);
	return 0;
}

int MiSD::addcalohit(MiSDCaloHit& in_calo)
{
	calohit.push_back(in_calo);
	return 0;	
}

int MiSD::addvisuhit(MiSDVisuHit& in_visu)
{	
	visuhit.push_back(in_visu);
	return 0;
}

int MiSD::getnoofcaloh() 
{	
	return part.size();
}

MiSDParticle* MiSD::getpart(int in_no)
{
	return &(part.at(in_no));
}

vector<MiSDParticle>* MiSD::getpartv()
{
	return &part;
}
		
MiSDCaloHit*  MiSD::getcalohit(int in_no)
{
	return &(calohit.at(in_no));
}

vector<MiSDCaloHit>* MiSD::getcalohitv()
{
	return &calohit;
}

vector<MiSDVisuHit>* MiSD::getvisuhitv()
{
	return &visuhit;
}

void MiSD::print()
{
	cout << "********************" << endl;
	cout << "SIMULATED DATA (SD):" << endl;
	cout << "********************" << endl;
	cout << "|--> Primary particles:" << endl;

	for (UInt_t i=0; i < part.size(); i++)
	{
		cout << "|   |--> No " << i << " (" << part.at(i).getname() << "):" << endl;

		if (i == part.size() - 1)
		{
			cout << "|       |--> E = " << part.at(i).getE() << endl;
			cout << "|       |--> t = " << part.at(i).gett() << endl;
			cout << "|       |--> p = ";
			  	part.at(i).getp()->print();
			cout << endl;
			cout << "|       |--> r = ";
			  	part.at(i).getr()->print();
			cout << endl;
		}
		else
		{
			cout << "|   |   |--> E = " << part.at(i).getE() << endl;
			cout << "|   |   |--> t = " << part.at(i).gett() << endl;
			cout << "|   |   |--> p = ";
			 	 part.at(i).getp()->print();
			cout << endl;
			cout << "|   |   |--> r = ";
			  	part.at(i).getr()->print();
			cout << endl;
		}
	}

	cout << "|--> Simulated calorimeter hits:" << endl;

	for (UInt_t i=0; i < calohit.size(); i++)
	{
		cout << "    |--> No " << i << " (" << calohit.at(i).getname() << "):" << endl;

		if (i == calohit.size() - 1)
		{
			cout << "        |--> E = ";
			cout << calohit.at(i).getE() << endl;
			cout << "        |--> GID = "; 
			 	calohit.at(i).getGID()->print();
			cout << endl;
		}
		else
		{
			cout << "    |   |--> E = ";
			cout << calohit.at(i).getE() << endl;
			cout << "    |   |--> GID = "; 
			 	calohit.at(i).getGID()->print();
			cout << endl;
		}
		 
		
	}
}

void MiSD::printVisuHit(int i_hit)
{
	cout << "Hit # " << i_hit << endl; 
	visuhit.at(i_hit).print();
}
