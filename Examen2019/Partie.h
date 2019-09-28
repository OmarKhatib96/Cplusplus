#ifndef PARTIE_H
#define PARTIE_H
#include <iostream>

#include "Joueur.h"




class Partie{



private:

Joueur joueur1,joueur2;
 bool termine;


public:
static float Ptge1;
static int Ptge2;
static int NbrCoupMoyen;
static bool trace;
static int nbrDeParties;
static void setTrace(bool T);
Partie(void);
int jouer(void);
static void AfficherStats(void);


};
#endif
