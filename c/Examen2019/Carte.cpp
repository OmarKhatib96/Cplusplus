#include "Carte.h"
#include "ListeCartes.h"
#include "Joueur.h"
#include "Paquet.h"
#include "Partie.h"

#include <time.h>
#include <stdlib.h>
void AffCouleur(int r){
	switch(r){
		case 1:{cout<<" de trèfle\n";break;}
		case 2:{cout<<" de carreau\n";break;}
		case 3:{cout<<" de coeur\n";break;}
		case 4:{cout<<" de pique\n";break;}
		}

}


void AffNum(int n){
	switch(n){
		case 11:{cout<<"Valet";break;}
		case 12:{cout<<"Dame";break;}
		case 13:{cout<<"Roi";break;}
		case 14:{cout<<"As";break;}
		default:{cout<<n;break;}
		}




}

Carte::Carte(int n,int C){
	Numero=n;
	Couleur=C;

}


Carte::Carte(void){
	Numero=0;
	Couleur=0;

}

int Carte::getNumero(void)const{
	return Numero;


};

int Carte::getCouleur(void)const{

	return Couleur;
}

void Carte::setCouleur(int C){
	Couleur=C;

}
	
void Carte::setNumero(int N){
	Numero=N;




}


  ostream &operator <<(ostream &os,const Carte &C){

	

cout<<"("<<C.getNumero()<<","<<C.getCouleur()<<") ";
//AffNum(C.getNumero());
//AffCouleur(C.getCouleur());
return os;
}


 bool operator!=(const Carte &C1,const Carte &C2){

if(C1==C2)
	return false;
else
	return true;

}


bool operator==(const Carte &C1,const Carte &C2){

if(C1.getNumero()==C2.getNumero() &&  C1.getCouleur()==C2.getCouleur())
	return true;
else
	return false;

}


 bool operator<(const Carte &C1,const Carte &C2){
	if(C1==C2)
		return false;
	else{

		if(C1.getNumero()<C2.getNumero())
			return true;
		else{
			if(C1.getNumero()==C2.getNumero()){
				if(C1.getCouleur()<C2.getCouleur())
					return true;

				else
					return false;}//C1 ne peut pas etre égal a C2 ,inutile de teste s'ils ont la meme couleur					fin if
				}//fin else
		
}//fin else


}//fin fonction


 bool operator>(const Carte &C1,const Carte &C2){

	if(C1==C2)
		return false;
	
	else{

		if(C1<C2)
			return false;
		else
			return true;}//fin else

}


int main(void){
srand(time(NULL));
/*
Carte C;
Carte C2(13,20);
Carte C3(11,14);
Carte C4(15,5);


//ListeCartes *L= new ListeCartes(10);marche aussi
ListeCartes  L= ListeCartes(10);
L.ajouter(C2);
L.ajouter(C3);
//cout<<L.getnbCartes();
//L.AffichageListe();
bool t=L.ContientLaCarte(C3);
if(t==true)
	cout<"ofdf";

L.MelangeListe();



ListeCartes L2=ListeCartes(10);
Joueur J1;
//cout<<J.NbrCartesJoueurs();


//P.AffichageListe();
//cout<<P.getnbCartes();
*/
Partie P;
P.setTrace(false);

	int Resultat=P.jouer();
//cout<<"C'est le joueur "<<Resultat<<" qui a gagné\n";
	//P.AfficherStats();

ListeCartes L(5);
Carte C(10,2);
Carte C2(15,3);
L.ajouter(C);
//L.ajouter(C2);
L.extraire();
Carte C3(10,5);
//Paquet P2;
L.ajouter(C2);
L.ajouter(C3);
/*
Joueur j1;
Joueur j2;
j2.prendreCarte(C2);
j1.prendreCarte(C2);
j1.AfficherCartesJoueur();
Carte C8=j1.JouerCarte();
Carte C9=j2.JouerCarte();
j1.AfficherCartesJoueur();
j2.AfficherCartesJoueur();
j2.prendreCarte(C8);
j1.prendreCarte(C8);
j1.AfficherCartesJoueur();
//cout<<L.getnbCartes();
*/
//L.AffichageListe();
return 0;
}

