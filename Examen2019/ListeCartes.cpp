
#include "ListeCartes.h"

#include <stdlib.h>
#include <time.h>
#include <stdio.h>


#include "Carte.h"
using namespace std;

ListeCartes::ListeCartes(void){
cartes=new Carte[52];
nbCartes=0;

}
ListeCartes::ListeCartes(int T){

	taille=T;
	nbCartes=0;
	cartes=new Carte[T];//Attention !! il faut allouer de la mémoire pour cartes


}

ListeCartes::ListeCartes(const  ListeCartes  &L):taille(L.taille),nbCartes(L.nbCartes){
cartes=new Carte[L.taille];


}




ListeCartes::~ListeCartes(void){
	delete [] cartes;

}



ListeCartes ListeCartes::operator=(const ListeCartes &L){
if(this!=&L){
delete [] cartes;
this->taille=L.taille;
this->nbCartes=L.nbCartes;
this->cartes=new Carte[taille];

for(int i=0;i<L.taille;i++)
	cartes[i]=L.cartes[i];
return *this;}
}


void ListeCartes::ajouter( Carte& ca){

if(nbCartes+1>taille)
	cout<<"Impossible d'ajouter la carte, taille limite atteinte!"<<endl;

else{


	cartes[nbCartes]=ca;
	nbCartes++;//Attention l'ordre est important


}


}


Carte ListeCartes::extraire(void){



if(nbCartes==0)
	cout<<"Erreur:La liste est vide \n";

else{
	
	for (int i=0;i<nbCartes-1;i++)
		cartes[i]=cartes[i+1];
Carte CarteExtraite=cartes[0];
nbCartes--;
return CarteExtraite;
}




}



void ListeCartes::AffichageListe(void)const{


if(nbCartes==0)
	cout<<"Rien à afficher la liste est vide\n";

else{
	for(int i=0;i<nbCartes;i++)

		cout<<"("<<cartes[i].getNumero()<<","<<cartes[i].getCouleur()<<") ";

}


}//fin fonction




bool ListeCartes::ContientLaCarte(Carte &ca){

if(nbCartes==0){

	return false;}
	

else{


	for(int i=0;i<nbCartes;i++){
		if(cartes[i]==ca){
			//cout<<"trouve\n";
			return true;}		
		


	}//fin while

	return false;



}//fin else








}//fin fonction

	int ListeCartes::getnbCartes(void)const{
		return nbCartes;


}


	void ListeCartes::MelangeListe(void){
		Carte temp;

	for(int i=0;i<1000;i++){

		int k=rand()%nbCartes;
		int r=rand()%nbCartes;
		temp=cartes[k];
		cartes[k]=cartes[r];
		cartes[r]=temp;}


}//fin fonction









