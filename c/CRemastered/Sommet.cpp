
	
#include <iostream>
#include "Sommet.h"
using namespace std;

	Sommet::Sommet(){
		suivant=new Sommet;

}


	Sommet::~Sommet(void){
		delete suivant;

	}


	Sommet::Sommet(int n,int d){
		numero=n;
		distance=d;

	}
	Sommet *  Sommet:: getSuivant(void)const{
		return suivant;}

	int Sommet::getNumero()const{
		return numero;}


	 void Sommet::setSuivant(Sommet*s){
		suivant=s;}

	void Sommet::setNumero(int i){
		numero=i;}
	int Sommet::getDistance(void)const{
		return distance;}


