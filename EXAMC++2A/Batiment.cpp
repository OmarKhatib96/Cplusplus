#include "Batiment.h"







Batiment::Batiment(ListeSalles & L):Liste(L){

for(int i=0;i<L.nbrSalle();i++)
	
	tab[i].pos=false;

}
	void Batiment::positionner(int indiceSalle,int X,int Y){
	
		tab[indiceSalle].x=X;
		tab[indiceSalle].y=Y;
		tab[indiceSalle].pos=true;
	
	}
	void Batiment::Affichage(void)const{
	
		 for(int i=0;i<Liste.nbrSalle();i++){
		 		Liste.getSalle(i)->AfficherSalle();
		 		cout<<"Cette salle est située aux coordonnées:"<<"("<<tab[i].x<<","<<tab[i].y<<")\n";}
	
	
	
	}
	
