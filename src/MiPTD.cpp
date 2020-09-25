// MiHeaders
#include "MiPTD.h"

ClassImp(MiPTD);

MiPTD::MiPTD()
{
}

MiPTD::~MiPTD()
{
}

int MiPTD::addpart(MiCDParticle& in_part)
{
	part.push_back(in_part);
	return 0;
}

MiCDParticle* MiPTD::getpart(int in_i)
{
	return &(part.at(in_i));
}

vector<MiCDParticle>* MiPTD::getpartv()
{
	return &part;
}
void MiPTD::print()
{
	cout << "**************************" << endl;
	cout << "PARTICLE TRACK DATA (PTD):" << endl;
	cout << "**************************" << endl;

	for (UInt_t i=0; i < part.size(); i++)
	{
		cout << "|--> Particle No " << i << ", with charge " << part.at(i).getcharge() << endl;
		
		if (i == part.size() - 1)
		{
			for (UInt_t j=0; j < part.at(i).getvertexv()->size(); j++)
			{
				cout <<  "    |--> Vertex on " << part.at(i).getvertex(j)->getpos() << ", r = ";			
					part.at(i).getvertex(j)->getr()->print();
				cout << endl;
			}

			for (UInt_t j=0; j < part.at(i).getcalohitv()->size(); j++)
			{
				cout <<  "    |--> Calo hit No " << j << ": " << endl;

				if (j == part.at(i).getcalohitv()->size() - 1)
				{
					cout << "        |--> E = "
		             	             << part.at(i).getcalohit(j)->getE() << " ± " 
			             	     << part.at(i).getcalohit(j)->getEs()
			             	     << endl;
					cout << "        |--> t = "
		                     	     << part.at(i).getcalohit(j)->gett() << " ± " 
			            	     << part.at(i).getcalohit(j)->getts()
			             	     << endl;
				}
				else
				{
			 		cout << "    |   |--> E = "
		                             << part.at(i).getcalohit(j)->getE() << " ± " 
			                     << part.at(i).getcalohit(j)->getEs()
			             	     << endl;
					cout << "    |   |--> t = "
		                     	     << part.at(i).getcalohit(j)->gett() << " ± " 
			             	     << part.at(i).getcalohit(j)->getts()
			             	     << endl;
				}
			}
		}
		else 
		{
			for (UInt_t j=0; j < part.at(i).getvertexv()->size(); j++)
			{
				cout <<  "|   |--> Vertex on " << part.at(i).getvertex(j)->getpos() << ", r = ";			
					part.at(i).getvertex(j)->getr()->print();
				cout << endl;
			}

			for (UInt_t j=0; j < part.at(i).getcalohitv()->size(); j++)
			{
				cout <<  "|   |--> Calo hit No " << j << ": " << endl;

				if (j == part.at(i).getcalohitv()->size() - 1)
				{
					cout << "|       |--> E = "
		             	             << part.at(i).getcalohit(j)->getE() << " ± " 
			             	     << part.at(i).getcalohit(j)->getEs()
			             	     << endl;
					cout << "|       |--> t = "
		                     	     << part.at(i).getcalohit(j)->gett() << " ± " 
			            	     << part.at(i).getcalohit(j)->getts()
			             	     << endl;
				}
				else
				{
			 		cout << "|   |   |--> E = "
		                             << part.at(i).getcalohit(j)->getE() << " ± " 
			                     << part.at(i).getcalohit(j)->getEs()
			             	     << endl;
					cout << "|   |   |--> t = "
		                     	     << part.at(i).getcalohit(j)->gett() << " ± " 
			             	     << part.at(i).getcalohit(j)->getts()
			             	     << endl;
				}
			}
		}
	}
}
