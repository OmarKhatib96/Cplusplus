




#include <iostream>
using namespace std;
#include "Sommet2.h"
#include "Sommet.h"


	Sommet2::Sommet2(int numero,int d):Sommet(numero,d){
	//voisins=new Liste2;
}
	Sommet2::Sommet2(){

		voisins=new Liste2;

}
	Sommet2::~Sommet2(void){
		delete voisins;
}


	Liste2 * Sommet2::getVoisins(void){
		return voisins;

		}

	Sommet2* Sommet2::getSuivant(void)const{
		return suivant;}


	void Sommet2::setSuivant(Sommet2*s){
		suivant=s;}


	int Sommet2::getNumero()const{
		return numero;}


