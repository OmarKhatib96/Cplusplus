
#ifndef CARTE_H
#define CARTE_H
#include <iostream>


using namespace std;


	enum Coul{trefle=1,carreau=2,coeur=3,pique=4};
	enum Num{Valet=11,Dame=12,Roi=13,As=14};





class Carte{


	
private:
	int Numero;
	int Couleur;
public:
	 Carte(int n,int c);
	 Carte(void);
	int getNumero(void)const;
	int getCouleur(void)const;
	void setCouleur(int C);
	void setNumero(int N);
	
    friend ostream &operator <<(ostream &os,const Carte &C);
	friend bool operator!=(const Carte &C1,const Carte &C2);
	friend bool operator==(const Carte &C1,const Carte &C2);

	
	friend bool operator<(const Carte &C1,const Carte &C2);

	friend bool operator>(const Carte &C1,const Carte &C2);


};

#endif
