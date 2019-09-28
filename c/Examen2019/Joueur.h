

#ifndef JOUEUR_H
#define JOUEUR_H
#include <iostream>

#include "Paquet.h"


class Joueur{



private:
	Paquet P;



public:

	Joueur(void);

	void prendreCarte( Carte &ca);
	
	Carte JouerCarte(void);

	void AfficherCartesJoueur(void);
	int NbrCartesJoueurs(void);
	




};

#endif












