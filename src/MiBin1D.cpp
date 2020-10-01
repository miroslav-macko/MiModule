#include "MiBin1D.h"
#include "MiChosenEvent1D.h"
#include <iostream>
#include <sstream>
#include "TF1.h"
#include "TH1F.h"

using namespace std;

MiBin1D::MiBin1D()
{
	fitR2Y = 2;
	fitR2Z = 2;
}

MiBin1D::~MiBin1D()
{
	delete hbinY;
	delete hbinZ;
	delete hbingaussY;
	delete hbingaussZ;
}

void MiBin1D::addEvent(MiChosenEvent1D Ev)
{
	events.push_back(Ev);
}

void MiBin1D::dump()
{
	cout << endl << "Bin  angle:              " << binAng  << endl;
	cout <<         "Bin  number              " << binNo   << endl;
	cout <<         "Number of events in bin: " << events.size() << endl;  
	cout <<         "FWHM      (Y / Z):       " << fwhmY  << " / " << fwhmZ  << endl;
	cout <<         "RMS       (Y / Z):       " << rmsY   << " / " << rmsZ   << endl; 
	cout << 	"R2 of fit (Y / Z):       " << fitR2Y << " / " << fitR2Z << endl;  
}

void MiBin1D::fillHistos(double lim)	// lim is cutoff value in histogram
{
	// Initialize histogram names and labels
	stringstream ssY  , ssZ;
	stringstream ssnY , ssnZ;
	stringstream ssgY , ssgZ;
	stringstream ssgnY, ssgnZ;

	// Labels
	ssY   << "y: bin " << binNo << ", lor";
	ssZ   << "z: bin " << binNo << ", lor";
	ssgY  << "y: bin " << binNo << ", gau";
	ssgZ  << "z: bin " << binNo << ", gau";
	string strY   = ssY.str();
	string strZ   = ssZ.str();
	string strgY  = ssgY.str();
	string strgZ  = ssgZ.str();
	char* labelY  = (char*) strY.c_str();
	char* labelZ  = (char*) strZ.c_str();
	char* labelgY = (char*) strgY.c_str();
	char* labelgZ = (char*) strgZ.c_str();

	// Names
	ssnY  << "y, bin"  << binNo << ", fit: Lorentz";
	ssnZ  << "z, bin"  << binNo << ", fit: Lorentz";
	ssgnY << "y, bin"  << binNo << ", fit: Gauss";
	ssgnZ << "z, bin"  << binNo << ", fit: Gauss";
	string strnY  = ssnY.str();
	string strnZ  = ssnZ.str();
	string strgnY = ssgnY.str();
	string strgnZ = ssgnZ.str();
	char* nameY   = (char*) strnY.c_str();
	char* nameZ   = (char*) strnZ.c_str();
	char* namegY  = (char*) strgnY.c_str();
	char* namegZ  = (char*) strgnZ.c_str();

	// Alocate memory for histograms
	hbinY =      new TH1F(labelY,  nameY,  50, -lim, lim);
	hbinZ =      new TH1F(labelZ,  nameZ,  50, -lim, lim);
	hbingaussY = new TH1F(labelgY, namegY, 50, -lim, lim);
	hbingaussZ = new TH1F(labelgZ, namegZ, 50, -lim, lim);

	hbinY     ->GetXaxis()->SetTitle("#Deltay [mm]");
	hbinZ     ->GetXaxis()->SetTitle("#Deltaz [mm]");	
	hbingaussY->GetXaxis()->SetTitle("#Deltay [mm]");
	hbingaussZ->GetXaxis()->SetTitle("#Deltaz [mm]");	

	hbinY     ->SetBuffer(100000);
	hbinZ     ->SetBuffer(100000);
	hbingaussY->SetBuffer(100000);
	hbingaussZ->SetBuffer(100000);

	limit = lim;	// Saves limit for the statistics
	
	// Fill both histograms with same values
	for(unsigned int n = 0; n < events.size(); n++)
	{
		if (-lim < events.at(n).getdYdZ(1) && 
			   events.at(n).getdYdZ(1) < lim)
		{
			hbinY     ->Fill(events.at(n).getdYdZ(1));
			hbingaussY->Fill(events.at(n).getdYdZ(1));
		}

		if (-lim < events.at(n).getdYdZ(2) && 
			   events.at(n).getdYdZ(2) < lim)
		{
			hbinZ     ->Fill(events.at(n).getdYdZ(2));
			hbingaussZ->Fill(events.at(n).getdYdZ(2));
		} 
	}

	this->calculateFWHM();
	this->calculateRMS();
} 

double MiBin1D::getBinAng()
{
	return binAng;
}

double MiBin1D::getBinNo() 
{
	return binNo;
}

MiChosenEvent1D* MiBin1D::getEvent(int i)
{
	return &(events.at(i));
}

vector<MiChosenEvent1D>* MiBin1D::getEventV()
{
	return &events;
}

double MiBin1D::getFitR2(int i) 
{
	if (i==1)
	{
		return fitR2Y;
	}
	else if (i==2)
	{
		return fitR2Z;
	}
	else
	{
		cout << "MiBin1D::getFitR2(int): Wrong input, argument should be only 1 or 2!";
	}
}

double MiBin1D::getFWHM(int i) 
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
		cout << "MiBin1D::getFWHM(int): Wrong input, argument should be only 1 or 2!";
	}
}

TH1F*  MiBin1D::getHbin(int i)
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
		cout << "MiBin1D::getHbin(int): Wrong input, argument should be only 1 or 2!";
	}
}

TH1F*  MiBin1D::getHbingauss(int i)
{
	if (i==1)
	{
		return hbingaussY;
	}
	else if (i==2)
	{
		return hbingaussZ;
	}
	else
	{
		cout << "MiBin1D::getHbingauss(int): Wrong input, argument should be only 1 or 2!";
	}
}

double MiBin1D::getRMS(int i) 
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
		cout << "MiBin1D::getRMS(int): Wrong input, argument should be only 1 or 2!";
	}
}

void MiBin1D::setBinAng(double a)
{
	binAng = a;
}

void MiBin1D::setBinNo(int bin)
{
	binNo = bin;
}

// PRIVATE FUNCTIONS

double MiBin1D::calculateFitR2(TH1F* hist, TF1* fit)
{
	int bins = hist->GetSize() - 2; // GetSize() returns higher by 2 than the real number of bins because of underflow and overflow bin 
	double mean = 0.0;
	double totvar = 0.0;	// Total variance (without averaging) of datapoints in bins
	double varfit = 0.0;    // Total variance (without averaging) of datapoints with respect to fitted line (residuals)
	double fi, yi;		// fi - fit value in each bin, yi - measured value in each bin

	for (int i = 1; i <= bins; i++) 
	{
		mean += hist->GetBinContent(i);
	}

	mean /= bins;

	for (int i = 1; i <= bins; i++) 
	{
		yi = hist->GetBinContent(i);
		totvar += (yi - mean) * (yi - mean);
	}	
	
	for (int i = 1; i <= bins; i++) 
	{
		fi = fit->Eval(hist->GetBinCenter(i));
		yi = hist->GetBinContent(i);

      		varfit += ((yi - fi)*(yi - fi));
	}
		
	return 1 - (varfit / totvar);
}

void MiBin1D::calculateFWHM()
{
	TF1 *myfitY = new TF1("myfitY","[0]/(x*x+[1])", -limit, limit);	// Same region is applied as the cutoff value in value filter when filling histograms
	TF1 *myfitZ = new TF1("myfitZ","[0]/(x*x+[1])", -limit, limit);

		myfitY->SetParName(0,"N");
	   	myfitY->SetParName(1,"gamma");
	   	myfitY->SetParameter(0, 50);
   		myfitY->SetParameter(1, 1);

		myfitZ->SetParName(0,"N");
   		myfitZ->SetParName(1,"gamma");
   		myfitZ->SetParameter(0, 50);
   		myfitZ->SetParameter(1, 1);

	hbinY->Fit("myfitY");		// lorentz applied to Y	
	hbinZ->Fit("myfitZ");		// lorentz applied to Z	

		fwhmY = 2.0*sqrt(myfitY->GetParameter(1));
		fwhmZ = 2.0*sqrt(myfitZ->GetParameter(1));	
		fitR2Y = calculateFitR2(hbinY, myfitY);
		fitR2Z = calculateFitR2(hbinZ, myfitZ);
				
	hbingaussY->Fit("gaus");		// gauss applied to Y		
	hbingaussZ->Fit("gaus");		// gauss applied to Z

		double r2gY = calculateFitR2(hbingaussY, hbingaussY->GetFunction("gaus"));
		double r2gZ = calculateFitR2(hbingaussZ, hbingaussZ->GetFunction("gaus"));

	cout << endl;
	cout << "R2 comparison:" << endl;
	cout << "Lorentz R2Y: "  << fitR2Y << endl;
	cout << "Gauss   R2Y: "  << r2gY   << endl;
	cout << "Lorentz R2Z: "  << fitR2Z << endl;
	cout << "Gauss   R2Z: "  << r2gZ   << endl;

	if (r2gY > fitR2Y)	// Uses Gauss fit if it is better
	{
		fitR2Y = r2gY;
		fwhmY = 2*hbingaussY->GetFunction("gaus")->GetParameter(2);
	}

	if (r2gZ > fitR2Z)	// Uses Gauss fit if it is better
	{
		fitR2Z = r2gZ;
		fwhmZ = 2*hbingaussZ->GetFunction("gaus")->GetParameter(2);
	}
}

void MiBin1D::calculateRMS()
{
	rmsY = hbinY->GetRMS();
	rmsZ = hbinZ->GetRMS();
}
