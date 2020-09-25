// MiHeaders
#include "MiVertex.h"

ClassImp(MiVertex);

MiVertex::MiVertex()
{
}

MiVertex::~MiVertex()
{
}

string MiVertex::getpos()
{
	return pos;
}
		
MiVector3D* MiVertex::getr()
{
	return &r;
}

int MiVertex::setpos(string in_pos)
{
	pos = in_pos;
	return 0;
}

int MiVertex::setr(double in_x, double in_y, double in_z)
{
	r.setX(in_x);
	r.setY(in_y);
	r.setZ(in_z);

	return 0;
}
