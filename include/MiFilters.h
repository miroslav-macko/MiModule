#ifndef MIFILTERS_HH
#define MIFILTERS_HH

// Mi headers
#include "MiEvent.h"

// ROOT headers
#include "TObject.h"

// Standard headers
#include "vector"

using namespace std;

class MiFilters: public TObject
{
	public:
		//! Constructor
		MiFilters(MiEvent* in_e, const double in_elow, const double in_ehi);

		//! Destructor
		~MiFilters();

		bool getTotEneMoreThanLim();
		bool getTotEneLessThanLim();
   		bool getTwoAssCaloHits();
		bool getTwoCaloHits();
  		bool getTwoFoilVert();
  		bool getTwoNegCh();
  		bool getTwoPart();

   		bool getAll();

		void print(int in_i);

	private:

   		bool hasTotEneLessThanLim;
   		bool hasTotEneMoreThanLim;
   		bool hasTwoAssCaloHits;
		bool hasTwoCaloHits;
  		bool hasTwoFoilVert;
  		bool hasTwoNegCh;
  		bool hasTwoPart;

   		bool hasAll;

	ClassDef(MiFilters,1);		
};

#endif // MIFILTERS_HH
