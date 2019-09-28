
#include "Paquet.h"




Paquet::Paquet(void):ListeCartes(52){
//this->cartes=new Carte[50];



}
 void Paquet::ajouter( Carte &ca){

if(this->ContientLaCarte(ca)==false){

	ListeCartes::ajouter(ca);}

else
	cout<<"Cette carte figure déjà dans le paquet\n";




}




Paquet Paquet:: creerPaquetComplet(void){

Paquet P;
ListeCartes *L=&P;


for(int numero=2;numero<=14;numero++){
	for(int couleur=1;couleur<=4;couleur++){
		Carte C(numero,couleur);
	L->ajouter(C);//ne marche pas sans late-binding
		}//end premier for



	}//end deuxieme for

return P;

}//fin fonction


Carte*Paquet::getCartes(void){

return this->cartes;

}


/*
Paquet::~Paquet(void){
	delete [] cartes;



}

*/
