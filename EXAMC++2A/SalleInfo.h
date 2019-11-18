

#ifndef SALLEINFO_H
#define SALLEINFO_H

#include "SalleCours.h"







class SalleInfo :public Salle{


private:

		int nbrPostes;
		
public:
	//Salle(void);
	SalleInfo(float L,float l,int C,string N,int NbrP=0);
	
	void AfficherSalle(void)const;
	
	
	};
	
#endif
