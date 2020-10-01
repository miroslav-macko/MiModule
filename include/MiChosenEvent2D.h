#ifndef _MICHOSENEVENT2D_H_
#define _MICHOSENEVENT2D_H_

#include "MiEvent.h"

class MiChosenEvent2D 
{
	public:
		MiChosenEvent2D();
		MiChosenEvent2D(MiEvent* E);
		~MiChosenEvent2D(); 		

		void   dump(); // Dump all variables
		double getBinVal(int i); // Argument is 1 or 2 - decides between BinVal1 and BinVal2
		double getBinNo(int i); // Argument is 1 or 2 - decides between BinNo1 and BinNo2
		double getdYdZ(int i); // Argument is 1 or 2 - decides between y(1) or z(2)
		double getRealVal(int i); // Argument is 1 or 2 - decides between RealVal1 and RealVal2
		double getY(int i); // Argument is 1 or 2 - decides between y1 and y2
		double getZ(int i); // Argument is 1 or 2 - decides between z1 and z2
		void   setBinVal(int i, double Val); // Argument is 1 or 2 - decides between BinVal1 and BinVal2
		void   setBinNo(int i, int bin); // Argument is 1 or 2 - decides between BinNo1 and BinNo2
		void   setdYdZ(MiEvent* E);
		void   setRealVal(int i, double Val); // Argument is 1 or 2 - decides between RealVal1 and RealVal2
	private:
		bool   coordinates_set;
    		int    BinNo1;
    		int    BinNo2;
    		double BinVal1;
    		double BinVal2;
    		double RealVal1;
    		double RealVal2;

		double y1, y2;
		double z1, z2;
		double dY, dZ; // dY = y1 - y2, dZ = z1 - z2
};
#endif
