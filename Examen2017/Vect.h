


#ifndef VECT_H
#define VECT_H
#include "ArraySec.h"
#include <vector>







class Vect:public vector<int>{


public:

//Vect(void);
Vect(int taille,int *tab);

Vect(int taille);
friend ostream &operator <<(ostream &os, Vect &V);

friend Vect operator*(int coef,Vect  &V);
friend Vect operator*(Vect &V,int coef);
friend int operator*(Vect &V1,Vect &V2);


};

#endif









