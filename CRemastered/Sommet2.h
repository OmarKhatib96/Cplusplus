
#ifndef H_SOMMET2
#define H_SOMMET2

#include <iostream>
using namespace std;
#include "Sommet.h"
#include "liste2.h"
class Sommet2:public Sommet{
	
private:

	Liste2*voisins;//contient des sommets Sommet
	Sommet2 *suivant;

public:
	Sommet2(int numero,int d);
	Sommet2(void);
	Liste2 *getVoisins(void);
	Sommet2* getSuivant(void)const;
	void setSuivant(Sommet2*s);
	int getNumero(void)const;
	~Sommet2(void);

};

#endif
	


