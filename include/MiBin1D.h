#ifndef _MIBIN1D_H_
#define _MIBIN1D_H_

#include "TH1F.h"
#include<vector>
#include "MiChosenEvent1D.h"

class MiBin1D 
{
	public:
		MiBin1D();
		~MiBin1D();

		void   addEvent(MiChosenEvent1D Ev);
		void   dump(); // Dump information
		void   fillHistos(double lim); // Fills histograms, limit is the upper and lower boundary of deltas taken into account in the bin (-limit, limit)
		double                   getBinAng();   // Returns Bin Angle
		double                   getBinNo();  
		MiChosenEvent1D*         getEvent (int i); 	 // Get event number no i 
		vector<MiChosenEvent1D>* getEventV();      	 // Get vector of events in bin 
		double                   getFitR2(int i);  	 //  Argument is 1 or 2 - decides between direction y(1) or z(2) 
		double                   getFWHM(int i);   	 //  Argument is 1 or 2 - decides between direction y(1) or z(2) 
		TH1F*                    getHbin(int i);   	 //  Argument is 1 or 2 - decides between direction y(1) or z(2) 
		TH1F*                    getHbingauss(int i);  	 //  Argument is 1 or 2 - decides between direction y(1) or z(2)
		double                   getRMS(int i);       	 // Argument is 1 or 2 - decides between direction y(1) or z(2)

		void   setBinAng(double a);
		void   setBinNo(int bin); 

	private:
		// Private variables
		double                   binAng;
		int                      binNo;
    		vector<MiChosenEvent1D>  events;
		double			 fitR2Y;
		double			 fitR2Z;
		double                   fwhmY;
		double                   fwhmZ;
		TH1F*                    hbinY;
		TH1F*                    hbinZ;
		TH1F*                    hbingaussY;
		TH1F*                    hbingaussZ;
		double                   limit;
		double                   rmsY;
		double                   rmsZ;

		// Private functions
		double calculateFitR2(TH1F* hist, TF1* fit);
		void   calculateFWHM();	// Calculates FWHM by fitting 
		void   calculateRMS (); 

};
#endif
