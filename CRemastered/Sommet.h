
#ifndef H_SOMMET
#define H_SOMMET


#include <iostream>
using namespace std;

class Sommet{
private:
	Sommet *suivant;
protected:
	int numero;


	int distance;


public:
	Sommet(int n,int d);
	Sommet(void);
	Sommet*getSuivant(void)const;
	int getNumero()const;
	virtual void setSuivant(Sommet*s);
	void setNumero(int i);
	int getDistance(void)const;
        ~Sommet(void);


	
};

#endif


