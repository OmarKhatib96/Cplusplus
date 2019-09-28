#include <iostream>

const int TAILLE_MAX=100;
using namespace std;

	enum Couleur{red,green,blue};

void AffCouleur(Couleur r){
	switch(r){
		case red:{cout<<"rouge";break;}
		case green:{cout<<"vert";break;}
		case blue:{cout<<"bleu";break;}
		}


}
class Vehicule{
private:
	string nom;
	int PuissanceFiscale;
	int NbrRoues;
	Couleur C;


public:
	 Vehicule(string N,int P,int n,Couleur c){
		nom=N;	
		PuissanceFiscale=P;
		C=c;
		NbrRoues=n;
}
	 void Affichage(void) const{
		cout<<"il  est ";AffCouleur(C);cout<<",s'appelle "<<nom<<",il a une puissance fiscale de "<<PuissanceFiscale<<" et "<<NbrRoues<<" roues\n";


}


 /* virtual  void Affichage(void) const{
		cout<<"il  est ";AffCouleur(C);cout<<",s'appelle "<<nom<<",il a une puissance fiscale de "<<PuissanceFiscale<<" et "<<NbrRoues<<" roues\n";}*/



};



class Moto:public Vehicule{


	private:
		float cylindree;

	public:
		 Moto(string N,int P,Couleur c,float cyl,int n=2):Vehicule(N,P,n,c){
			cylindree=cyl;


}

		void Affichage(void)const{
		cout<<"************Affichage sans virtual*******************\n";
			cout<<"Ce véhicule est une moto, ";
			Vehicule::Affichage();//sans virtual
			cout<<"et une cylindrée de "<<cylindree<<"\n";
	
}
			/*

				void Affichage(void)const{
			cout<<"************Affichage avec virtual*******************\n";
			cout<<"Ce véhicule est une moto, ";
			Vehicule::Affichage();//sans virtual
			cout<<"et une cylindrée de "<<cylindree<<"\n";

}
*/
};



/***********************E7****************************/

class Animal{
private:
	string Caracteristique;
	string Nom;
public:
	
	Animal(string N,string C){
		Caracteristique=C;
		Nom=N;
	}
	virtual void Cri(void)const=0;
	
	 void Affichage(void)const{//il faut la mettre en virtuell
		cout<<Nom;
		cout<<Caracteristique;
		Cri();
	}

};
class Oiseau:public Animal{

	public:
		Oiseau(string N,string C=" vole"):Animal(N, C){
	
	}
		//virtual void Cri(void)const=0;
		
		
};

class Cheval:public Animal{

	public:
		Cheval(string N,string C=" galope"):Animal(N, C){
	
	}
		//virtual void Cri(void)const=0;
		void Cri(void)const{
			cout<<",il hennit!\n";
		}

		
};


class Corbeau:public Oiseau{
	public:

		Corbeau(string N):Oiseau(N){
	
	}
		 void Cri(void)const{
			cout<<",il croasse!\n";
		}

};


class Pigeon:public Oiseau{
	public:

		Pigeon(string N):Oiseau(N){
	
	}
		 void Cri(void)const{
			cout<<",il roucoule!\n";
		}

};



class Rossignol:public Oiseau{
	public:

		Rossignol(string N):Oiseau(N){
	
	}
		 void Cri(void)const{
			cout<<",il chante!\n";
		}

};

class Chien:public Animal{

	public:
		Chien(string N,string C=" est fidèle"):Animal(N, C){
	
	}
		//virtual void Cri(void)const=0;
		void Cri(void)const{
			cout<<",il aboie!\n";
		}

		
};

class ListeAnimaux{
	
private:
	Animal* Liste[TAILLE_MAX];
	int i;

public:
	ListeAnimaux(void){
			i=0;

	}


	void ajouter(Animal *A){
		if(i<=TAILLE_MAX){
			Liste[i]=A;
			i++;}//fin if

		
		else
			cout<<"Espace insuffisant pour ajouter l'animal \n";

		
}//fin ajouter



	void Afficher(void){
	for(int j=0;j<i;j++)
		Liste[j]->Affichage();}
};

	

	
		
		
	


int main(){

	//Vehicule V("BMW",255,4,green);
	//V.Affichage();
	//Moto M("103",20,blue,10.5);
	//Vehicule *V2=&M;

	//cout<<"      Appel depuis un pointeur       \n";
	//V2->Affichage();
	//cout<<"      Appel normal      \n";
	//M.Moto::Affichage();
	//Corbeau C("Omar");
	//C.Affichage();
	//C.Cri();
	//Animal *A=&C;
	//A->Affichage();

	Cheval Ch("Cheval");
	Animal *A=&Ch;
	//A->Affichage();
	Chien Boubi("Boubi");
	Animal *A2=&Boubi;
	//A2->Affichage();

	ListeAnimaux liste;
	liste.ajouter(A2);
	liste.ajouter(A);
	liste.Afficher();
	
		//Ch.Affichage();
	return 1;

}
		
