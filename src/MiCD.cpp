// MiHeaders
#include "MiCD.h"

ClassImp(MiCD);

MiCD::MiCD()
{
}

MiCD::~MiCD()
{
}

int MiCD::addcalohit(MiCDCaloHit& in_calo)
{
	calohit.push_back(in_calo);
	return 0;	
}

int MiCD::getnoofcaloh() 
{	
	return calohit.size();
}
		
MiCDCaloHit*  MiCD::getcalohit(int in_no)
{
	return &(calohit.at(in_no));
}

void MiCD::print()
{
	cout << "*********************" << endl;
	cout << "CALIBRATED DATA (CD):" << endl;
	cout << "*********************" << endl;
	cout << "|--> Calorimeter hits:" << endl;

	for (unsigned int i=0; i < calohit.size(); i++)
	{
		cout << "    |--> No " << i << ": " << endl;

		if (i == calohit.size() - 1)
		{
			cout << "        |--> E = "
		             << calohit.at(i).getE() << " ± " 
			     << calohit.at(i).getEs()
			     << endl;
			cout << "        |--> t = "
		             << calohit.at(i).gett() << " ± " 
			     << calohit.at(i).getts()
			     << endl;
		}
		else
		{
			cout << "    |   |--> E = "
		             << calohit.at(i).getE() << " ± " 
			     << calohit.at(i).getEs()
			     << endl;
			cout << "    |   |--> t = "
		             << calohit.at(i).gett() << " ± " 
			     << calohit.at(i).getts()
			     << endl;
		}
	}
}
