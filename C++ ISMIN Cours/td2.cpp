#include <iostream>
using namespace std;
const int TAILLE_FIXE=20;
#include <math.h>
const bool EstPremier(int entier);
class Ensemble{

private:

	int tab[TAILLE_FIXE];
	int taille;

	
public:

	Ensemble(void){
		
	taille=0;
	}


	
	const bool TestAppartenance(int entier){

		for(int i=0;i<taille;i++){
			if(tab[i]==entier){


				return true;}


}

		return false;

}

	int  AjoutEntier(int entier){

			if (TestAppartenance(entier)){
				cout<<entier<<" est déjà présent dans l'ensemble\n";
				return -1;}
	
		
				
		if(taille==TAILLE_FIXE)
			cout<<"Taille maximale atteinte supprimer des éléments!\n";

		else{

			tab[taille]=entier;
			taille++;

			}
		}

	void Suppression(int entier){
		bool trouve=false;
		for(int i=0;i<taille;i++){
			if(tab[i]==entier){
				trouve=true;
				for(int j=i;j<taille;j++)
					tab[j]=tab[j+1];

						



}
				



}
		if(trouve)
				taille--;
		else
			cout<<"l'entier n'a pas été trouvé dans l'ensemble\n";
			
}
	const void Affichage(void){

		for(int i=0;i<taille;i++){

				cout<<tab[i]<<" ";
			}
				cout<<"\n";
		}	


	const bool TestEgalite(Ensemble &E){
		for(int i=0;i<taille;i++){
			if(!E.TestAppartenance(tab[i])){
				cout<<"Non, ils ne sont pas égaux\n";
				return false;}}
		cout<<"Oui,ils sont égaux\n";
		return true;
 }
			

	const void Intersection(Ensemble &E2){
	cout<<"L'intersection des deux ensembles est:\n";
		for(int i=0;i<taille;i++){
			if(E2.TestAppartenance(tab[i]) )
				cout<<tab[i]<<" ";
		}
}



	const Ensemble EnsemblePremier(void){
		Ensemble Premiers;
		for(int i=0;i<taille;i++){
			if(!EstPremier(tab[i]))
				Premiers.AjoutEntier(tab[i]);
			}
	
			return Premiers;
}
};



	const bool EstPremier(int entier){
		bool divisible=false;
		if(entier==1){}
		
		else{
			int max=sqrt(entier);

			for(int i=2;i<max;i++){
				if(entier%i==0 && entier!=i)
					divisible=true;
			}

		}
	
		return divisible;


}

int main(){

Ensemble E;
Ensemble E2;
E.AjoutEntier(32);
E.AjoutEntier(17);
E.AjoutEntier(2);
E.AjoutEntier(19);
E.AjoutEntier(20);
E.AjoutEntier(100);
E.AjoutEntier(1);
E.AjoutEntier(3);
E.AjoutEntier(103);
E.AjoutEntier(71);
E.AjoutEntier(1000);
E.AjoutEntier(1000);
E.AjoutEntier(198);
/*
E.Affichage();
E.Suppression(16);
E.Suppression(32);
E.Suppression(20);

E.Affichage();

E2.AjoutEntier(17);
E2.AjoutEntier(32);
E.AjoutEntier(32);
E2.AjoutEntier(20);
E.AjoutEntier(10);
E2.Suppression(17);
E2.AjoutEntier(10);
E2.AjoutEntier(17);
E.Affichage();
E.TestAppartenance(5);
E.TestEgalite(E2);
E.Intersection(E2);
*/

Ensemble P=E.EnsemblePremier();
P.Affichage();
return 1;

}
		
			
			

		

		
