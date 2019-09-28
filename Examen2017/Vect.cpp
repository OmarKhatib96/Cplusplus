

#include "Vect.h"





/*
Vect::Vect(void):vector<int>(){



}
*/
Vect::Vect(int taille):vector<int>(taille){



}


Vect::Vect(int taille,int *tab):vector<int>(taille){


//iterator looks like an upgraded version of pointers
//on commence a it=vec.begin();
for(int i=0;i<taille;i++)
	this->at(i)=tab[i];//Attention fair (*it) pas *.it.
//si j'écrit it++ , il va pointer à l'élement suivant 60,On peut pas faire ça avec les pointeurs




}

 ostream &operator <<(ostream &os, Vect &V){

vector<int>::iterator it=V.begin();
//iterator looks like an upgraded version of pointers
//on commence a it=vec.begin();
while(it!=V.end()){
	cout<<*it<<" ";//Attention fair (*it) pas *.it.
//si j'écrit it++ , il va pointer à l'élement suivant 60,On peut pas faire ça avec les pointeurs
it++;
}
return os;

}



 Vect operator*(int coef,Vect  &V){


vector<int>::iterator it=V.begin();
//iterator looks like an upgraded version of pointers
//on commence a it=vec.begin();
while(it!=V.end()){
	*it=*it*coef;//Attention fair (*it) pas *.it.
//si j'écrit it++ , il va pointer à l'élement suivant 60,On peut pas faire ça avec les pointeurs
it++;

}

return V;

}




 Vect operator*(Vect &V,int coef){
	operator*(coef,V);//appel de la premirère surcharge qu'on a précédemment implémentée

return V;


}



 int operator*(Vect &V1,Vect &V2){
int resultat=0;

for (int i=0;i<V1.size();i++)
		resultat=resultat+V1.at(i)*V2.at(i);
	
	


return resultat;


}



