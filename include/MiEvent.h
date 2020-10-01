#ifndef MIEVENT_HH
#define MIEVENT_HH

// MiHeaders
#include "MiCD.h"
#include "MiPTD.h"
#include "MiSD.h"

// ROOT headers
#include "TObject.h"

// Standard headers
#include "iostream"

using namespace std;

class MiEvent: public TObject
{
	public:
		//! Constructor
		MiEvent();

		//! Destructor
		~MiEvent();	

		MiCD* getCD();
		MiPTD* getPTD();
		MiSD* getSD();

		void print();
		void printCD();
		void printPTD();
		void printSD();

		int setCD(MiCD& in_CD);
		int setPTD(MiPTD& in_PTD);
		int setSD(MiSD& in_SD);

		int settotE(double in_totE);
/////////////////////////////////////////////////////////////////////////
		double gettotE();

		double getPTDverX(int in_part, int in_vert);
		double getPTDverY(int in_part, int in_vert);
		double getPTDverZ(int in_part, int in_vert);

		int getPTDNoPart();
		int getPTDNoVert(int in_part);
		string getPTDVertpos(int in_part, int in_vert);

	private:

		bool hasCD;
		bool hasPTD;
		bool hasSD;		

		MiCD CD;
		MiPTD PTD;
		MiSD SD;

		double totE;

	ClassDef(MiEvent,1);		
};

#endif // MIEVENT_HH
