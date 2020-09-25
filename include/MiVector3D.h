#ifndef MIVECTOR3D_HH
#define MIVECTOR3D_HH

// ROOT headers
#include "TObject.h"

// Standard headers
#include "iostream"

using namespace std;

class MiVector3D: public TObject
{
	public:
		//! Constructor
		MiVector3D();

		//! Destructor
		~MiVector3D();

		double getModule(); // Returns absolute value (length) of vector

		double getX();	// Returns value of x
		double getY();	// Returns value of y
		double getZ();	// Returns value of z

		int normalize();	// Normalizes the vector

		void print();	// Prints whole vector
		
		int setX(double in_x); // Sets the value of x, returns 0 if successful
		int setY(double in_y); // Sets the value of y, returns 0 if successful
		int setZ(double in_z); // Sets the value of z, returns 0 if successful

	private:

		double x;
		double y;
		double z;

	ClassDef(MiVector3D,1);		
};

#endif // MIVECTOR3D_HH
