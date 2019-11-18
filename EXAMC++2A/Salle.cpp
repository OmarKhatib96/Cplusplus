	
	
	
	#include "Salle.h"
	
	#include "SalleInfo.h"
	#include "SalleCours.h"
	#include "ListeSalle.h"
    #include  <fstream>
		//#include "Batiment.h"

	Salle::Salle(float longue,float large,int cap,string name){
		longueur=longue;
		largeur=large;
		capacite=cap;
		nom=name;
	
	}
	
		void Salle::AfficherSalle(void)const{
		
			cout<<"Les caractéristiques de la salle "<<nom<<" sont : longueur="<<longueur<<", largeur= "<<largeur<<",capacite= "<<capacite<<endl; 
		
		
		
		}
		
		
	float Salle::getLargeur(void)const{
		return largeur;
		}
	
	
	
	float Salle::getLongueur(void)const{
		return longueur;
	
	
	}
	string Salle::getNom(void)const{
		return nom;
	
	}
	int Salle::getCapacite(void)const{
		return capacite;
	
	}
	
	
	 bool  operator==(const Salle &S1,const Salle &S2){
	 
	 
	 		if(S1.capacite==S2.capacite )
	 			return true;
	 		
	 		else
	 			return false;
	 			
	 			
	 			}
	 			
	 			
	 			
	 bool  operator<(const Salle &S1,const Salle &S2){
	 		
	 
	 		if(S1.capacite<S2.capacite )
	 			return true;
	 		
	 		else
	 			return false;
	 			
	 			
	 			}
	 			
	 
	 
	 
	 
	 void lireFicSalle(const string &nomFic,ListeSalles *liste){
	 
	 


 
 ifstream ficin("fichier.txt");


	while(!ficin.eof()){
		string type;
		string nom ;
		float longueur;
		float largeur;
		int capa;
		int nbr;
		
		
		ficin>>type;//lecture des donnée du fichier
		
		
		if(type=="SALLE_COURS" ){
		
		ficin>>nom;
		
		ficin>>longueur;//lecture des donnée du fichier
		ficin>>largeur;
		ficin>>capa;

					Salle *Slle;

					SalleCours *S=new SalleCours(longueur,largeur,capa,nom,false);
					Slle=S;
					liste->ajouter(Slle);
						
}


		if(type=="AMPHI"){
		ficin>>nom;
		
		ficin>>longueur;//lecture des donnée du fichier
		ficin>>largeur;
		ficin>>capa;
					Salle *Slle;

					SalleCours *S=new SalleCours(longueur,largeur,capa,nom,true);
					Slle=S;
					liste->ajouter(Slle);
						
}


		if(type=="SALLE_INFO"){
		ficin>>nom;
		
		ficin>>longueur;//lecture des donnée du fichier
		ficin>>largeur;
		ficin>>capa;
		ficin>>nbr;
					Salle *Slle;

					SalleInfo *S=new SalleInfo(longueur,largeur,capa,nom,nbr);
					Slle=S;
					liste->ajouter(Slle);
						
}

		




	 
	 
	 
	 
	 
	 }//fin while
	 
	 
	 
	 }//fin fonction
	 
	 
	 
	 
	 
int main(void) {
/*
	Salle S(15,14,150,"Guy Verdier");
	Salle S2(15,140,151,"ISMIN");
	S.AfficherSalle();
	if(S<S2)
		cout<<"oui\n";
		
	SalleCours S3(5,14,150,"Guy Verdier",true);
	S3.AfficherSalle();
	SalleInfo S4(5,14,150,"Guy Verdier",0);
	S4.AfficherSalle();
	*/
	
	Salle S(15,14,150,"Guy Verdier");
	Salle S2(15,140,151,"ISMIN");
	Salle S3(15,140,180,"ISMIN2");
	Salle *pS=&S;
	Salle *pS3=&S3;
	Salle *pS2=&S2;
	ListeSalles Liste;
	ListeSalles Liste2;
	Liste2.ajouter(pS);
	Liste.ajouter(pS);
	Liste.ajouter(pS3);
	Liste.ajouter(pS2);
	//Liste.ajouter(pS2);
	Liste.AffichageListe();
	ListeSalles ListeF;
	ListeF=Liste+Liste2;
	cout<<"*****\n";
		ListeF.AffichageListe();
		
		
		 lireFicSalle("fichier.txt",&ListeF);
		 cout<<"********\n";
		 
		 		ListeF.AffichageListe();
		 		
		 	//	Batiment B(Liste);
		 		
	
}

