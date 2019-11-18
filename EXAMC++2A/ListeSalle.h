

#ifndef LISTESALLE_H
#define LISTESALLE_H

#include "SalleInfo.h"


const int NB_MAX_SALLE= 100;



class ListeSalles {


private: 
	Salle *tab[NB_MAX_SALLE] ;
	
	int compteur;
	

	

	
	
	
public:

	ListeSalles(void);
		ListeSalles(const ListeSalles &L2);//POUR LA CLASSE BATIMENT
	void ajouter(Salle *salle);
	
	int nbrSalle(void)const;
	
	Salle * getSalle(int indice)const;
	
	void AffichageListe(void)const;
	
	Salle* chercherSalle(const string & nom)const;
	
	int chercherIndiceSalle (const string & nom)const;
	
	friend ListeSalles operator+(const ListeSalles &L1,const ListeSalles &L2);

	Salle * getSalle_s(int indice)const;
	
	
	
	};
	
	
#endif
	



