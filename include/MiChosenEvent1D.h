#ifndef _MICHOSENEVENT1D_H_
#define _MICHOSENEVENT1D_H_

#include "MiEvent.h"

class MiChosenEvent1D
{
	public:
		MiChosenEvent1D();
		~MiChosenEvent1D(); 		

		void   dump(); // Dump all variables
		double getBinAng(); 
		double getBinNo(); 
		double getdYdZ(int i); // Argument is 1 or 2 - decides between y(1) or z(2)
		double getRealAng(); // Argument is 1 or 2 - decides between RealE1 and RealE2
		void   setBinAng(double a); 
		void   setBinNo(int bin); 
		void   setdYdZ(MiEvent* E);
		void   setRealAng(double a); // Argument is 1 or 2 - decides between RealE1 and RealE2
	private:
    		double RealAng;
    		double BinAng;
    		int    BinNo;

		double y1, y2;
		double z1, z2;
		double dY, dZ; // dY = y1 - y2, dZ = z1 - z2
};
#endif
