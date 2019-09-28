

#ifndef H_LISTE
#define H_LISTE
#include "Sommet2.h"
#include "liste.h"
#include "Sommet.h"
#include <iostream>
#include "liste2.h"
using namespace std;





class Liste{

private:
	Sommet2*premier;

public:

Liste(void);
Liste(Sommet2*P);
Sommet2* getPremier(void)const;
Sommet2* ParcoursListe(int i);
Sommet2* insertion(Sommet2*Nv);
void AfficherListe(void)const;

};

#endif
