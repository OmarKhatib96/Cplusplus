



#ifndef BATIMENT_H
#define BATIMENT_H

#include "ListeSalle.h"
#include <stdio.h>
#include <stdlib.h>

const int NB_MAX_SALLES =100;

typedef struct PosSalle
{
	bool pos;
	double x;
	double y;
};




class Batiment {


private: 
	
	ListeSalles Liste;
	
	PosSalle tab[NB_MAX_SALLES];


	

	
	
	
public:
	Batiment(ListeSalles & L);
	void positionner(int indiceSalle,int x,int y);
	void Affichage(void)const;
	
	
	
	
	
	};
	
	
#endif
	



