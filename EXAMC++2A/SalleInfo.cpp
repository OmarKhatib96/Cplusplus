



#include "SalleInfo.h"


	//Salle(void);
	SalleInfo::SalleInfo(float L,float l,int C,string N,int NbrP):Salle(L,l,C,N){
	
	nbrPostes=NbrP;
	
	}
	
	void SalleInfo:: AfficherSalle(void)const{
	
	
		Salle::AfficherSalle();
		
		if(nbrPostes!=0)
			cout<<"Le nombre de postes fixes dans cette salle d'info est "<<nbrPostes<<endl;
		else
			cout<<"Cette salle d'info est composée uniquement de PC portables"<<endl;
	
	
	
	
	}
	

