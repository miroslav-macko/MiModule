#include "MiBin2D.h"
#include "MiChosenEvent2D.h"
#include <iostream>
#include <sstream>
#include "TF1.h"
#include "TH1F.h"

using namespace std;

MiBin2D::MiBin2D()
{
}

MiBin2D::~MiBin2D()
{
	delete hbinY;
	delete hbinZ;
}

void MiBin2D::addEvent(MiChosenEvent2D Ev)
{
	events.push_back(Ev);
}

void MiBin2D::calculateFWHM()
{
	TF1 *myfit = new TF1("myfit","[0]/(x*x+[1])", -300, 300);

	myfit->SetParName(0,"N");
   	myfit->SetParName(1,"gamma");
   	myfit->SetParameter(0, 50);
   	myfit->SetParameter(1, 1);

	hbinY->Fit("myfit");		// lorentz applied to Y
	fwhmY = 2.0*sqrt(myfit->GetParameter(1));

	hbinZ->Fit("myfit");		// lorentz applied to Z
	fwhmZ = 2.0*sqrt(myfit->GetParameter(1));
			
	/*
	double r2gY, r2gZ, r2myY, r2myZ;

	if (hbinY->GetFunction("myfit"))
	{
		r2myY=getR2(hbinY, hbinY->GetFunction("myfit"));
	}

	hbinY->Write();
						
	hbinY->Fit("gaus");		// gauss applied to Y

	if (hbinY->GetFunction("gaus"))
	{
		r2gY=getR2(hbinY, hbinY->GetFunction("gaus"));
	}

	hbinY->Write();

	if (hbinZ->GetFunction("myfit"))
				{
					r2myZ=getR2(hbinZ, hbinZ->GetFunction("myfit"));
				}

			hbinZ->Write();
			double FWHMZ = 2.0*sqrt(myfit ->GetParameter(1));
			
			hbinZ->Fit("gaus");		// gauss applied to Z

				if (hbinZ->GetFunction("gaus"))
				{
					r2gZ=getR2(hbinZ, hbinZ->GetFunction("gaus"));
				}

			hbinZ->Write();*/


/////////////////////
//EXTRA FUNCTION
/////////////////////
//////////////////////
/*
	double getR2(TH1F* hist, TF1* fit)
	{
		int bins = hist->GetSize() - 2;
		double res  = 0.0;
		double dist = 0.0;
		double mean = 0.0;

		for (int ibin = 1; ibin <= bins; ++ibin) 
		{ 
			double yi = hist->GetBinContent(ibin);
			double fi = fit->Eval(hist->GetBinCenter(ibin));
      			res +=  ((yi- fi)*(yi- fi));

			mean += yi;
   		} 
   
		mean /= bins;

   		for (int ibin = 1; ibin <= bins; ++ibin) 
		{ 
			double yi = hist->GetBinContent(ibin);
			dist += (yi-mean)*(yi-mean);
		}	

		return 1-(res/dist);
	}*/		
}

void MiBin2D::calculateRMS()
{
	rmsY = hbinY->GetRMS();
	rmsZ = hbinZ->GetRMS();
}

void MiBin2D::dump()
{
	cout << endl << "Bin  values (Val1,Val2):   " << binVal1  << ", " << binVal2  << endl;
	cout <<         "Bin  number (Val1,Val2):   " << binNo1   << ", " << binNo2 << endl;
	cout <<         "Number of events in bin: " << events.size() << endl;  
	cout <<         "FWHM (Y / Z):            " << fwhmY << " / " << fwhmZ << endl; 
	cout <<         "RMS  (Y / Z):            " << rmsY  << " / " << rmsZ << endl;   
}

void MiBin2D::fillHistos(double lim)
{
	// Initialize histograms
	stringstream ssY, ssZ;
	ssY << "y: " << binNo1 << ", " << binNo2;
	ssZ << "z: " << binNo1 << ", " << binNo2;
	string strY = ssY.str();
	string strZ = ssZ.str();
	char* labelY = (char*) strY.c_str();
	char* labelZ = (char*) strZ.c_str();

	stringstream ssnY, ssnZ;
	ssnY << "y" << binNo1 << "/" << binNo2;
	ssnZ << "z" << binNo1 << "/" << binNo2;
	string strnY = ssnY.str();
	string strnZ = ssnZ.str();
	char* nameY = (char*) strnY.c_str();
	char* nameZ = (char*) strnZ.c_str();

	hbinY = new TH1F(labelY, nameY, 200, -lim, lim);
	hbinZ = new TH1F(labelZ, nameZ, 200, -lim, lim);

	hbinY->GetXaxis()->SetTitle("#Deltay [mm]");
	hbinZ->GetXaxis()->SetTitle("#Deltaz [mm]");	

	hbinY->SetBuffer(100000);
	hbinZ->SetBuffer(100000);
	limit = lim;	

	for(unsigned int n = 0; n < events.size(); n++)
	{
		if (-lim < events.at(n).getdYdZ(1) && 
			   events.at(n).getdYdZ(1) < lim)
		{
			hbinY->Fill(events.at(n).getdYdZ(1));
		}

		if (-lim < events.at(n).getdYdZ(2) && 
			   events.at(n).getdYdZ(2) < lim)
		{
			hbinZ->Fill(events.at(n).getdYdZ(2));
		} 
	}
} 

double MiBin2D::getBinVal(int i)
{
	if (i==1)
	{
		return binVal1;
	}
	else if (i==2)
	{
		return binVal2;
	}
	else
	{
		cout << "MiBin2D::getBinVal(int): Wrong input, argument should be only 1 or 2!";
	}
}

double MiBin2D::getBinNo(int i) 
{
	if (i==1)
	{
		return binNo1;
	}
	else if (i==2)
	{
		return binNo2;
	}
	else
	{
		cout << "MiBin2D::getBinNo(int): Wrong input, argument should be only 1 or 2!";
	}
}

double MiBin2D::getFWHM(int i) 
{
	if (i==1)
	{
		return fwhmY;
	}
	else if (i==2)
	{
		return fwhmZ;
	}
	else
	{
		cout << "MiBin2D::getFWHM(int): Wrong input, argument should be only 1 or 2!";
	}
}

MiChosenEvent2D* MiBin2D::getEvent(int i)
{
	return &(events.at(i));
}

vector<MiChosenEvent2D>* MiBin2D::getEventV()
{
	return &events;
}

TH1F*  MiBin2D::getHbin(int i)
{
	if (i==1)
	{
		return hbinY;
	}
	else if (i==2)
	{
		return hbinZ;
	}
	else
	{
		cout << "MiBin2D::getHbin(int): Wrong input, argument should be only 1 or 2!";
	}
}

double MiBin2D::getRMS(int i) 
{
	if (i==1)
	{
		return rmsY;
	}
	else if (i==2)
	{
		return rmsZ;
	}
	else
	{
		cout << "MiBin2D::getRMS(int): Wrong input, argument should be only 1 or 2!";
	}
}

void MiBin2D::setBinVal(int i, double Val)
{
	if (i==1)
	{
		binVal1 = Val;
	}
	else if (i==2)
	{
		binVal2 = Val;
	}
	else
	{
		cout << "MiBin2D::setBinVal(int, double): Wrong input, argument int should be only 1 or 2!";
	}
}

void MiBin2D::setBinNo(int i, int bin)
{
	if (i==1)
	{
		binNo1 = bin;
	}
	else if (i==2)
	{
		binNo2 = bin;
	}
	else
	{
		cout << "MiBin2D::setBinNo(int, int): Wrong input, argument int should be only 1 or 2!";
	}
}
