#ifndef MIVERTEX_HH
#define MIVERTEX_HH

// MiHeaders
#include "MiVector3D.h"

// ROOT headers
#include "TObject.h"

using namespace std;

class MiVertex: public TObject
{
	public:
		//! Constructor
		MiVertex();

		//! Destructor
		~MiVertex();
		
		string getpos();
		MiVector3D* getr();

		int setpos(string in_pos);
		int setr(double in_x, double in_y, double in_z);

	private:

		string pos;	// Which part of detector vertex is in
		MiVector3D r;	// Coordinates of vertex

	ClassDef(MiVertex,1);		
};

#endif // MIVERTEX_HH
