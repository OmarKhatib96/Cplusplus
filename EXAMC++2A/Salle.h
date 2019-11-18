



#ifndef SALLE_H
#define SALLE_H
#include <iostream>
#include <iostream>
#include <string>

using namespace std;

class Salle {


private:

		float longueur;
		float largeur;
		int capacite;	
		string nom;

public:
	//Salle(void);
	Salle(float longue,float large,int cap,string name);
	virtual void AfficherSalle(void)const;
	float getLargeur(void)const;
	float getLongueur(void)const;
	string getNom(void)const;
	int getCapacite(void)const;
	friend bool operator<(const Salle &S1,const Salle &S2);
	friend bool operator==(const Salle &S1,const Salle &S2);
	};
	
#endif
