// MiHeaders
#include "MiGID.h"

ClassImp(MiGID);

MiGID::MiGID()
{
	type	= "*";
	module 	= "*";
	side	= "*";
	wall	= "*";
	column	= "*";
	row     = "*";
}

MiGID::~MiGID()
{
}

string MiGID::gettype()
{
	return type;
}

string MiGID::getmodule()
{
	return module;
}

string MiGID::getside()
{
	return side;
}

string MiGID::getwall()
{
	return wall;
}

string MiGID::getcolumn()
{
	return column;
}

string MiGID::getrow()
{
	return row;
}

void MiGID::print()
{
	cout << "[" << type << ":" << module << "." << side << "." << wall << "." << column << "." << row << "]";
}

int MiGID::setGID(string in_t, string in_m, string in_s, string in_w, string in_c, string in_r)
{
	type   	= in_t;
	module 	= in_m;
	side	= in_s;
	wall	= in_w;
	column	= in_c;
	row	= in_r;

	return 0;
}

int MiGID::settype(string in_t)
{
	type = in_t;
	return 0;	
}

int MiGID::setmodule(string in_m)
{
	module = in_m;
	return 0;	
}

int MiGID::setside(string in_s)
{
	side = in_s;
	return 0;	
}

int MiGID::setwall(string in_w)
{
	wall = in_w;
	return 0;	
}

int MiGID::setcolumn(string in_c)
{
	column = in_c;
	return 0;	
}

int MiGID::setrow(string in_r)
{
	row = in_r;
	return 0;	
}


