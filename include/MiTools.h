#ifndef MITOOLS_HH
#define MITOOLS_HH

// ROOT headers
#include "TObject.h"

// Standard headers
#include "iostream"
#include "cmath"
#include "vector"

using namespace std;

class MiTools: public TObject
{
	public:
		//! Constructor
		MiTools();

		//! Destructor
		~MiTools();

		double mean(vector<double>* in_sample);
		double mean(vector<bool>* in_inc, vector<double>* in_sample);

		double stdev(vector<double>* in_sample);
		double stdev(vector<bool>* in_inc, vector<double>* in_sample);

		// Doplnit print, tak aby ukladal sample a refreshoval ked sa meni, aby sa dal
		// vypytat iba ziadany rozsah a takisto funkcia enter - zobrazit dalsich 20 (50)
		// alebo ukoncit vypis. ak neposle sa ziadny argument tak vypise setko prihliadnuc na predosly potvrdzovaci system

	private:

	ClassDef(MiTools,1);		
};

#endif // MITOOLS_HH
