#ifndef PAQUET_H
#define PAQUET_H
#include <iostream>

#include "ListeCartes.h"

using namespace std;



class Paquet: public ListeCartes
{



public:


Paquet(void);
 void ajouter(Carte &ca);
static Paquet creerPaquetComplet(void);
Carte* getCartes(void);

//~Paquet(void);


};

#endif






