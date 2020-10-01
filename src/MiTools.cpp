// MiHeaders
#include "MiTools.h"

ClassImp(MiTools);

MiTools::MiTools()
{
}

MiTools::~MiTools()
{
}

double MiTools::mean(vector<double>* in_sample)
{
	double mean = 0.0;
	int count = 0;

	for (UInt_t i=0; i < in_sample->size(); i++)
	{
		count++;
		mean += in_sample->at(i);
	}

	mean   /= count;

	return mean;
}

double MiTools::mean(vector<bool>* in_inc, vector<double>* in_sample)
{
	if (in_inc->size() != in_sample->size())
	{
		cout << "MiTools::mean(): Nonequal sized arguments!" << endl;
		return -1.0;
	}
	else
	{
		double mean = 0.0;
		int count = 0;

		for (UInt_t i=0; i < in_inc->size(); i++)
		{
			if (in_inc->at(i))
			{
				count++;
				mean += in_sample->at(i);
			}
		}

		mean   /= count;

		return mean;
	}
}

double MiTools::stdev(vector<double>* in_sample)
{
	double mean = 0.0;
	double meansq = 0.0;
	int count = 0;

	for (UInt_t i=0; i < in_sample->size(); i++)
	{
		count++;
		meansq += in_sample->at(i)*in_sample->at(i); 
		mean += in_sample->at(i);
	}

	mean   /= count;
	meansq /= count;

	double sdev = sqrt(meansq-mean*mean);

	return sdev;
}

double MiTools::stdev(vector<bool>* in_inc, vector<double>* in_sample)
{

	if (in_inc->size() != in_sample->size())
	{
		cout << "MiTools::stdev(): Nonequal sized arguments!" << endl;
		return -1.0;
	}
	else
	{
		
		double mean = 0.0;
		double meansq = 0.0;
		int count = 0;

		for (UInt_t i=0; i < in_inc->size(); i++)
		{
			if (in_inc->at(i))
			{
				count++;
				meansq += in_sample->at(i)*in_sample->at(i); 
				mean += in_sample->at(i);
			}
		}

		mean   /= count;
		meansq /= count;

		double sdev = sqrt(meansq-mean*mean);

		return sdev;
	}
}
