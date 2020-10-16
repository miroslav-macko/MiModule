#ifndef MIGID_HH
#define MIGID_HH

// ROOT headers
#include "TObject.h"

// Standard headers
#include "iostream"
#include "string.h"

using namespace std;

class MiGID: public TObject
{
	public:
		//! Constructor
		MiGID();

		//! Destructor
		~MiGID();

		string gettype();
		string getmodule();
		string getside();
		string getwall();
		string getcolumn();
		string getrow();

		void print();

		int setGID(string in_t, string in_m, string in_s, string in_w, string in_c, string in_r);

		int settype  (string in_t);
		int setmodule(string in_m);
		int setside  (string in_s);
		int setwall  (string in_w);
		int setcolumn(string in_c);
		int setrow   (string in_r);

	private:

		string type;
		string module;
		string side;
		string wall;
		string column;
		string row;

	ClassDef(MiGID,1);		
};

#endif // MIGID_HH
