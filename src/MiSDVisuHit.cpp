// MiHeaders
#include "MiSDVisuHit.h"

ClassImp(MiSDVisuHit);

MiSDVisuHit::MiSDVisuHit()
{
	is_init_material = false;
	is_init_process   = false;  
}

MiSDVisuHit::~MiSDVisuHit()
{
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
	start.setX(x);
	start.setY(y);
	start.setZ(z);
}

void MiSDVisuHit::setStop(double x, double y, double z)
{
	stop.setX(x);
	stop.setY(y);
	stop.setZ(z);
}

void MiSDVisuHit::setStepNo(int No)
{
	step_no = No;
}

void MiSDVisuHit::setTrackID(int ID)
{
	track_ID = ID;
}

////////////////////////////////////////////////////////////////////////////

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
	
void MiSDVisuHit::print()
{
	cout << "**** STEP NO: " << step_no << endl; 		// Added 28.3.2018 15:25
	cout << "Particle name: " << particle_name << endl;	// Added 27.3.2018 19:14
	cout << "[start]: (" << start.getX() << ", "
			     << start.getY() << ", "
			     << start.getZ() << ")" << endl;
	cout << "[stop] : (" << stop .getX() << ", "
			     << stop .getY() << ", "
			     << stop .getZ() << ")" << endl;
	cout << "Auxiliaries: " << endl;			// Start: Added 28.3.2018 15:25
	cout << "Track ID:        " << track_ID  << endl;
	cout << "Parent track ID: " << parent_ID << endl;
	if (is_init_material)
	{
		cout << "Material:        " << material  << endl;
	}
	else
	{
		cout << "Material: NO DATA" << endl;
	}
	if (is_init_process)	
	{
		cout << "Mother process:  " << process   << endl;
	}
	else
	{
		cout << "Mother process: NO DATA" << endl;	
	}
	cout << endl;						// End: Added 28.3.2018 15:25
}


