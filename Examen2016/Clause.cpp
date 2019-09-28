
#include "Clause.h"

#include <cstdlib>






Clause::Clause(void){
	taille=0;


}

Clause::~Clause(void){
	delete [] tab;

}
Clause::Clause(int *t,int T){
	tab=new int[T];
	taille=T;
	for(int i=0;i<T;i++)
		tab[i]=t[i];

}

bool Clause::estVide(void){

	if(taille<=0)
		return true;

	else
		return false;

}


ostream   &operator <<(ostream &os,const Clause &C){


	for(int i=0;i<C.taille;i++){

		if(C.tab[i]>0)
			cout<<"x"<<C.tab[i];

		else
		
			cout<<"!x"<<-C.tab[i]; 
		if(i<C.taille-1)
			cout<<"\\/";

		}

		


return os;



}

Clause::Clause(const Clause &C2):taille(C2.taille),tab(C2.tab){//Constructeur âr défaut

	tab=new int[taille];
	for(int i=0;i<taille;i++)
		tab[i]=C2.tab[i];


}

Clause  Clause::operator=( const Clause &C2){
	this->taille=C2.taille;
	delete [] this->tab;
	this->tab=new int[taille];
	for(int i=0;i<taille;i++)
		tab[i]=C2.tab[i];
	return *this;


}

//surcharge de l'opérateur = d'affectation
			/*this->len=S2.len;
			delete [] this->ch;
			this->ch=new char[len];
			
			strcpy(this->ch,S2.ch);
			
			return *this;*/



void Clause::SansDoublons(void){
for(int i=0;i<taille;i++){//on refait l'opération deux fois comme ça on est tranquille....
	for(int i=0;i<taille;i++){
		int element=tab[i];
		for(int j=i+1;j<taille;j++){	
			if(element==tab[j])
				 Suppression(*this,j,element);}//pour ne pas supprimer le premier élement trouvé

				}//fin premier for


}
	

}//fin fonction
void Clause::sansEtv(void){

	for(int i=0;i<taille;i++){
		for(int j=i+1;j<taille;j++){
			if(abs(tab[j])==abs(tab[i])){
				Suppression(*this,0,tab[j]);
				Suppression(*this,0,tab[i]);}//fin for

			}//fin if


			}//fin for


}//fin fonction


int Clause::vMin(void){

	if(taille>0){
		int min=abs(tab[0]);
		for(int i=0;i<taille;i++){
			if(abs(tab[i])<=min)
				min=abs(tab[i]);
	
			}//fin for

		return min;

		}//fin if

	else

		return -1;
	

}




void Suppression(Clause &C,int indiceDebut,int entier){

		for(int i=indiceDebut;i<C.taille;i++){
			if(C.tab[i]==entier){
				C.taille--;
				for(int j=i;j<C.taille;j++)
					C.tab[j]=C.tab[j+1];

						



}
				



}
		
			
}


