// Standard Headers
#include <cmath>

// MiHeaders
#include "MiSDVisuHit.h"

ClassImp(MiSDVisuHit);

MiSDVisuHit::MiSDVisuHit()
{
	is_init_material = false;
	is_init_process  = false;  
	
	is_init_start	 = false;
	is_init_stop     = false;
}

MiSDVisuHit::~MiSDVisuHit()
{
}

void MiSDVisuHit::setEdep(double _Ed)
{
	Edep = _Ed;			
}

void MiSDVisuHit::setMaterial(string mat)
{
	material = mat;
	is_init_material = true;
}

void MiSDVisuHit::setParentID(int ID)
{
	parent_ID = ID;
}

void MiSDVisuHit::setParticleName(string name)
{
	particle_name = name;
}

void MiSDVisuHit::setProcess(string proc)
{
	process = proc;
	is_init_process = true;
}

void MiSDVisuHit::setStart(double x, double y, double z)
{
	is_init_start = true;

	start.setX(x);
	start.setY(y);
	start.setZ(z);

	if (is_init_start && is_init_stop)
	{
		length = sqrt( pow(stop.getX() - start.getX(), 2.0) +
			       pow(stop.getY() - start.getY(), 2.0) +
			       pow(stop.getZ() - start.getZ(), 2.0));
	}
	else
	{
		length = -1.0;
	}
}

void MiSDVisuHit::setStop(double x, double y, double z)
{
	is_init_stop = true;

	stop.setX(x);
	stop.setY(y);
	stop.setZ(z);

	if (is_init_start && is_init_stop)
	{
		length = sqrt( pow(stop.getX() - start.getX(), 2.0) +
			       pow(stop.getY() - start.getY(), 2.0) +
			       pow(stop.getZ() - start.getZ(), 2.0));
	}
	else
	{
		length = -1.0;
	}
}

void MiSDVisuHit::setStepNo(int No)
{
	step_no = No;
}

void MiSDVisuHit::setTrackID(int ID)
{
	track_ID = ID;
}

void MiSDVisuHit::setTStart(double _ti)
{
	t_start = _ti;
}

void MiSDVisuHit::setTStop(double _tf)
{
	t_stop  = _tf;
}

////////////////////////////////////////////////////////////////////////////

double MiSDVisuHit::getEdep()
{
	return Edep;
}
		
double MiSDVisuHit::getLength()
{
	return length;
}

string MiSDVisuHit::getMaterial()
{
	return material;
}

int MiSDVisuHit::getParentID()
{
	return parent_ID;
}

string MiSDVisuHit::getParticleName()
{
	return particle_name;
}

string MiSDVisuHit::getProcess()
{
	return process;
}

MiVector3D* MiSDVisuHit::getStart()
{
	return &start;
}

MiVector3D* MiSDVisuHit::getStop()
{
	return &stop;
}

int MiSDVisuHit::getStepNo()
{
	return step_no;
}

int MiSDVisuHit::getTrackID()
{
	return track_ID;
}

double MiSDVisuHit::getTStart()
{
	return t_start;
}

double MiSDVisuHit::getTStop()
{
	return t_stop;
}

void MiSDVisuHit::print()
{
	cout << "**** STEP NO: " << step_no << endl; 		// Added 28.3.2018 15:25
	cout << "Particle name: " << particle_name << endl;	// Added 27.3.2018 19:14
	cout << "[start]:         (" << start.getX() << ", "
			             << start.getY() << ", "
			             << start.getZ() << "); "
	     << "[t_start] : "       << t_start      << endl;
	cout << "[stop] :         (" << stop .getX() << ", "
			             << stop .getY() << ", "
			             << stop .getZ() << "); "
	     << "[t_stop]  : "       << t_stop       << endl;
	cout << "length:          " << length << endl;		// Added 13.10.2020
	cout << "Edep:            " << Edep << endl;		// Added 16.10.2020
	cout << "### Auxiliaries: ###" << endl;			// Start: Added 28.3.2018 15:25
	cout << "Track ID:        " << track_ID  << endl;
	cout << "Parent track ID: " << parent_ID << endl;
	if (is_init_material)
	{
		cout << "Material:        " << material  << endl;
	}
	else
	{
		cout << "Material:       NO DATA" << endl;
	}
	if (is_init_process)	
	{
		cout << "Mother process:  " << process   << endl;
	}
	else
	{
		cout << "Mother process:  NO DATA" << endl;	
	}
	cout << endl;						// End: Added 28.3.2018 15:25
}


