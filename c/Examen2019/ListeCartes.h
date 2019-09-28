
#ifndef LISTE_H
#define LISTE_H

#include <iostream>
#include "Carte.h"

using namespace std;



class ListeCartes{

protected:
Carte*cartes;
private:

	int taille;
	int nbCartes;

	
public:
	 
	ListeCartes(int T);
	ListeCartes( const ListeCartes  &L);
	virtual ~ListeCartes(void);
	ListeCartes(void);
	ListeCartes  operator=(const ListeCartes &L);
	virtual void ajouter( Carte& ca);
	Carte extraire(void);
	void AffichageListe(void)const;
	int getnbCartes(void)const;
	bool ContientLaCarte(Carte &ca);
	void MelangeListe(void);


};
		
#endif
			


	



//String::String( const String &S):ch(S.ch)//Constructeur par copie
