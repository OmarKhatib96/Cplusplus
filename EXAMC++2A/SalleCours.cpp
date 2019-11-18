



#include "SalleCours.h"






	SalleCours::SalleCours(float L,float l,int C,string N,bool Amphi):	Salle(L,l,C,N){
	
		EstAmphi=Amphi;
	
	
	}
	
	void SalleCours::AfficherSalle(void)const{
		Salle::AfficherSalle();
		if(EstAmphi)
			cout<<"Cette salle de cours est un amphi"<<endl;
		else
			
			cout<<"Cette salle de cours est une salle de cours classique"<<endl;
			
			
		}
	
	
