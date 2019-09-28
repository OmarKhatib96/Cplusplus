#include "Joueur.h"
#include "Carte.h"


	Joueur::Joueur(void){


	 Paquet   Pvide;//quand on crée Pvide on a fait appel au constructeur par défault de Paquet et à celui de 
	P= Pvide;

	



	
	//*L2=*L;(
	
//ListeCartes 
		//P(Pvide);//Quand on fait cette affectation,on libére l'espace alloué pour cartes dans l'opérateyr =7



}

	void Joueur:: prendreCarte( Carte& ca){
		/*ListeCartes *L=&P;//Au début y avait pas ça
		L->ajouter(ca);*/
		P.ajouter(ca);

}


	

	
	Carte Joueur::JouerCarte(void){
		/*ListeCartes *L=&P;//Au début y avait pas ça
		L->extraire();*/
		P.extraire();

}

	void Joueur::AfficherCartesJoueur(void){
	P.AffichageListe();
}
	int Joueur::NbrCartesJoueurs(void){
		P.getnbCartes();
}


