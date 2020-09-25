// Mi headers
#include "./include/MiEvent.h" 

R__LOAD_LIBRARY(./lib/libMiModule.so);

void Example_ROOT()
{
	TFile* f = new TFile("./testing_products/Default.root");
	TTree* s = (TTree*) f->Get("Event");

	MiEvent* Eve = new MiEvent();
	s->SetBranchAddress("Eventdata", &Eve);

	for(UInt_t i=0; i < s->GetEntries(); i++)	// Loop over events
	{
		s->GetEntry(i);
		Eve->print();
	}	
}






