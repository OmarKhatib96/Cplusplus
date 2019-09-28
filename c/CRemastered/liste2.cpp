




#include <iostream>
using namespace std;
#include "liste2.h"
#include "Sommet.h"


	Liste2::Liste2(Sommet*P):premier(P){

		premier->setSuivant(NULL);

}

Liste2::Liste2(void){
		premier=NULL;


		//premier->setSuivant(NULL)
}
	Liste2::~Liste2(void){
		delete premier;

}

	
	
	void Liste2::AfficherListe2(void)const{



}

	Sommet* Liste2::getPremier(void){
		return premier;}





