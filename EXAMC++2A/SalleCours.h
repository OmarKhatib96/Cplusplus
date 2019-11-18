



#ifndef SALLECOURS_H
#define SALLECOURS_H
#include "Salle.h"

using namespace std;

class SalleCours :public Salle{


private:

		bool EstAmphi;
		
public:
	//Salle(void);
	SalleCours(float L,float l,int C,string N,bool Amphi);
	
	void AfficherSalle(void)const;
	
	
	};
	
#endif
