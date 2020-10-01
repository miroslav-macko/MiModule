#ifndef _MIBIN2D_H_
#define _MIBIN2D_H_

#include "TH1F.h"
#include<vector>
#include "MiChosenEvent2D.h"

class MiBin2D 
{
	public:
		MiBin2D();
		~MiBin2D();

		void   addEvent(MiChosenEvent2D Ev);
		void   calculateFWHM();	// Calculates FWHM by fitting 
		void   calculateRMS (); 
		void   dump(); // Dump information
		void   fillHistos(double lim); // Fills histograms, limit is the upper and lower boundary of deltas taken into account in the bin (-limit, limit)

		double                   getBinVal(int i);   // Argument is 1 or 2 - decides between BinVal1 and BinVal2
		double                   getBinNo(int i);  // Argument is 1 or 2 - decides between BinNo1 and BinNo2
		MiChosenEvent2D*         getEvent (int i); // Get event number no i 
		vector<MiChosenEvent2D>* getEventV();      // Get vector of events in bin 
		double                   getFWHM(int i);   //  Argument is 1 or 2 - decides between direction y(1) or z(2) 
		TH1F*                    getHbin(int i);   //  Argument is 1 or 2 - decides between direction y(1) or z(2)
		double                   getRMS(int i);    //  Argument is 1 or 2 - decides between direction y(1) or z(2)

		void   setBinVal(int i, double Val); // Argument is 1 or 2 - decides between BinVal1 and BinVal2
		void   setBinNo(int i, int bin); // Argument is 1 or 2 - decides between BinNo1 and BinNo2

	private:
		double                   binVal1;
		double                   binVal2;
		int                      binNo1;
		int                      binNo2;
    		vector<MiChosenEvent2D>  events;
		double                   fwhmY;
		double                   fwhmZ;
		TH1F*                    hbinY;
		TH1F*                    hbinZ;
		double                   limit;
		double                   rmsY;
		double                   rmsZ;

};
#endif
