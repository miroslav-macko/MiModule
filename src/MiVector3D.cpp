// MiHeaders
#include "MiVector3D.h"

// Standard headers
#include "math.h"

ClassImp(MiVector3D);

MiVector3D::MiVector3D()
{
}

MiVector3D::~MiVector3D()
{
}

double MiVector3D::getModule()
{
	return sqrt(x*x+y*y+z*z);
}

double MiVector3D::getX()
{
	return x;
}

double MiVector3D::getY()
{
	return y;
}

double MiVector3D::getZ()
{
	return z;
}

int MiVector3D::normalize()
{
	double norm=this->getModule();
	
	if (norm==0.0)
	{
		cout << "Impossible to normalize, norm=0! Vector unchanged!" << endl;
	}
	else
	{
		x/=norm;
		y/=norm;
		z/=norm;
	}
	return 0;
}

void MiVector3D::print()
{
	cout << "(" << x << ", " << y << ", " << z << ")";
}

int MiVector3D::setX(double in_x)
{
	x=in_x;
	return 0;
}

int MiVector3D::setY(double in_y)
{
	y=in_y;
	return 0;
}

int MiVector3D::setZ(double in_z)
{
	z=in_z;
	return 0;
}
