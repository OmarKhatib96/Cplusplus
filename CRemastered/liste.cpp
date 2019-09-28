
#include <iostream>
using namespace std;
#include "Sommet.h"

#include "liste.h"
#include "Sommet2.h"

	Liste::Liste(void){
		premier=NULL;


		//premier->setSuivant(NULL);

}

	Liste::Liste(Sommet2*P):premier(P){

		premier->setSuivant(NULL);

}


	Sommet2* Liste::getPremier(void)const{
		return premier;}

	
   Sommet2* Liste::ParcoursListe(int i){
		if(!this){
			return NULL;
		}	

		Sommet2*Actuel=premier;

	while(Actuel->getSuivant()!=NULL){
		if(Actuel->getNumero()==i){
			return Actuel;

		}

		else{
			Actuel=(Sommet2*)Actuel->getSuivant();//Actuel->getSuivant() est de type Sommet

							//Actuel est de type Sommet2,et Sommet2 dérive de Sommer
							//j'ai fait un cast dangereux


 }

}


	return NULL;
}
		

Sommet2* Liste::insertion(Sommet2*Nv){


	if(!this){

		cout<<"erreur!\n";
		return NULL; }
	

	else{

		Nv->setSuivant(premier);


		premier=Nv;

}


	return Nv;


	

}

void Liste::AfficherListe(void)const{
	if(!this){
		cout<<"Y a rien à afficher!\n";
	}

	else{

		Sommet2*actuel=premier;

		while(actuel!=NULL){

			//Sommet*actuel2=actuel->getVoisins()->getPremier();


			//cout<<"Le sommet"<<actuel2->getNumero()<<" est distant de"<<actuel->getNumero()<<"de "<<actuel2->getDistance();
			cout<<"Le sommet "<<actuel->getNumero()<<endl;
//			actuel2=actuel2->getSuivant();
			actuel=actuel->getSuivant();
		//actuel=actuel->suivant;

}//fin while



}//fin else

}//fin fonction

	



















		
