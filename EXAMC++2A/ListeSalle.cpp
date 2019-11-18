
#include "ListeSalle.h"



	ListeSalles::ListeSalles(const ListeSalles &L2):compteur(L2.compteur){//POUR LA CLASSE BATIMENT
	
	for (int i=0;i<L2.compteur;i++)
		tab[i]=L2.tab[i];
	
	}


	ListeSalles::ListeSalles(void){
	
		compteur=0;	
		
		
	
}

	


	void  ListeSalles::ajouter(Salle *salle){
		bool ExisteDeja=false;
		for(int i=0;i<compteur;i++){
				if(salle->getNom()==tab[i]->getNom())
						ExisteDeja=true;//fin if
						
						
			}//fin for
			
		if(ExisteDeja)
			cout<<"Cette salle existe déjà dans la liste \n";
		else{
			tab[compteur]=salle;
			compteur++;	}	
	
	
	}
	
	int ListeSalles::nbrSalle(void)const{
	
		return compteur;}
		
		
		
		
	
	Salle * ListeSalles::getSalle(int indice)const{
	
			return tab[indice];
			}
	
	void ListeSalles:: AffichageListe(void)const{
		for(int i=0;i<compteur;i++)
			tab[i]->AfficherSalle();
			
			}
	
	Salle*  ListeSalles ::chercherSalle(const string & nom)const{
	
		for(int i=0;i<compteur;i++){
			if(tab[i]->getNom()==nom)
				return tab[i];
				}//fin for;
				
				
		return NULL;
		
	}//FIN FONCTION
	
	
	
	
	
	int ListeSalles:: chercherIndiceSalle (const string & nom)const{
		
		for(int i=0;i<compteur;i++){
				if(tab[i]->getNom()==nom)
					return i;
					}//fin for;
				
				
			return -1;
		
	
	}
	
	 ListeSalles operator+(const ListeSalles &L1,const ListeSalles &L2){//cette fonction peut etre implémentée avec ou sans friend
		
		ListeSalles ListeResultat;
		

			for(int i=0;i<L1.compteur;i++){

			//	if(L2.chercherSalle(L1.tab[i]->getNom())==NULL){
									ListeResultat.ajouter(L1.tab[i]);
				/*

					ListeResultat.tab[ListeResultat.compteur]=L1.tab[i];
					ListeResultat.compteur++;*/
					

					
				}//fin for
				
					
			for(int j=0;j<L2.compteur;j++){
			
							ListeResultat.ajouter(L2.tab[j]);
/*
					ListeResultat.tab[ListeResultat.compteur]=L2.tab[j];//on est sur que les éléments de L2 N'ONT PAS ÉTÉ ajoutés auparavant
					ListeResultat.compteur++;
					
					*/
					
					}//fin for
					
				
				
				
					
					
				return ListeResultat;
						
						}		
						
	/*	
	Salle * getSalle_s(int indice)const{
	
	
	
	}*/
