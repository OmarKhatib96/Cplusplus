#include <iostream>
#include <fstream>
#include <iomanip>
#include <math.h>
using namespace std;






class Vehicule{

protected:
	int VitesseMax;


public: 
	Vehicule(int Vmax){
		VitesseMax=Vmax;
		}


	Vehicule(){//Il faut implémenter un constructeur par défaut car pour construire un objet amphibe 

	}
	virtual void Afficher(void)const {
		cout<<"La vitesse maximale de ce véhicule est"<<VitesseMax<<"\n" ;
	

		
	}


};


class Terrestre:  public  virtual Vehicule{
	protected:
		int NbrRoues;//Caractéristique commune dans amphib

	public:

		Terrestre(int Vmax,int NbrR):Vehicule(Vmax)
	{
			NbrRoues=NbrR;

}

		void Afficher(void)const {
			Vehicule::Afficher();
			cout<<"Ce véhicule a "<<NbrRoues<<" roues\n";}
	
};






class Marin: public virtual   Vehicule{

	protected:
		float TirantEau;

	public:
				
			
		Marin(int Vmax,float TE):Vehicule(Vmax),TirantEau(TE){



			}


		void Afficher(void)const{//quand j'ai pas mis const ici , le m'affiche pas le "ce véhicule possède aussi un tirant d'eau
			Vehicule::Afficher();
			cout<<"Ce véhicule  possède aussi un tirant d'eau de : "<<TirantEau;


		}



};





class Amphibe:public Marin,public Terrestre
{
	public:
		Amphibe(int Vmax,int NbrR,float TE):Marin(Vmax,NbrR),Terrestre(Vmax,TE),Vehicule(Vmax)
		{}//Quand j'ai pas mis Vehicule(Vmax) il m'afficche 541212(n'importe quoi pour la vitesse)


	void Afficher(void)const{
		cout<<"La vitesse maximale de ce véhicule est "<<VitesseMax<<"\n" ;
		cout<<"Ce véhicule est amphibe\n";
		cout<<"Ce véhicule  possède aussi un tirant d'eau de :"<<TirantEau;
}


};


/******************************/



void FiltrerFicPoints(const char* IN,const char *OUT,float distance)
{
ifstream ficin(IN);
ofstream ficout(OUT);
int Pos=0;
	while(!ficin.eof()){
		float x;
		float y;
		ficin>>x;//lecture des donnée du fichier
		ficin>>y;

		float DistanceObtenue=sqrt(x*x+y*y);
		if(DistanceObtenue<distance){

			Pos++;

			ficout<<setw(3)<<setfill('0')<<Pos;

			ficout<<":  ("<<setprecision(4)<<x<<","<<y<<")"<<" d="<<DistanceObtenue<<"\n";//setw et setfill marchent pour toute le cout
	
			

}//fin 2 emeif 


}//fin 1 if




/*
int X;
ficin>>X;
ficout<<X;
*/
}


/****************Classes de formes géométriques**********************************/





class Point
{

private:
	float X;
	float Y;
public:

	Point(){
		}
	Point(float x,float y){
		X=x;
		Y=y;

		}

	float getX(void)const{
		return X;

	}
	
	float getY(void)const{
		return Y;

	}



	void setX(float nouveauX){
		X=nouveauX;
		}


	void setY(float nouveauY){

		Y=nouveauY;

	}



	void Affichage(void)const{

		cout<<"("<<X<<","<<Y<<")\n";
	}




	bool TestEgalite(Point &P){

		if(X==P.getX() && Y==P.getY())
			return true;

		else
			return false;

	}



	float Distance(Point &P){


		float Carre=(X-P.getX())*(X-P.getX())+(Y-P.getY())*(Y-P.getY());
		
		return sqrt(Carre);

	}





};



class Segment{

	private:
		Point O;
		Point E;


	public:

		Segment(Point &o,Point &e):O(o),E(e){



			}

		void AffichageS(void)const {
			cout<<"Les coordonnées du point d'origine sont: ";
			O.Affichage();
			cout<<"Les coordonnées du point d'extrémité sont: ";
			E.Affichage();
		
			
			
		}

	void Translation(Point &NvO){
		O=NvO;

	}
	
	float Distance(void)const{
		

		float Carre=(O.getX()-E.getX())*(O.getX()-E.getX())+(O.getY()-E.getY())*(O.getY()-E.getY());
		
		return sqrt(Carre);

	}

				
};

class Polygone{

	private:

		int nbrPoints;
		Point * tab;
		
	public:
		Polygone(){
		

		}
		Polygone(Point *T,int taille){
			nbrPoints=taille;
			tab=new Point[taille];
			for(int indice=0;indice<taille;indice++)
				
				tab[indice]=T[indice];
	
			}


		~Polygone(){
		delete [] tab;

			}

		void AffichageP(void)const{
			cout<<"Les points de ce polygones sont:\n";
			for(int i=0;i<nbrPoints;i++)
				tab[i].Affichage();

			}

	

};



class Forme{
private:

Forme* suiv;



public:
void setSuiv(Forme* F){

this->suiv=F;
}




Forme* getSuiv()const{
return this->suiv;

}


Forme(void){


}

virtual double perimetre(void)const=0;

virtual double surface(void)const=0;
virtual void afficher(void)const=0;





};


class Cercle:public Forme{
private:
Point Centre;
float Rayon;
Forme *suiv;
public:
	Cercle(const Point& P,double R):Centre(P),Rayon(R){


	}

double perimetre(void)const{
	return 2*3.14*Rayon;

}

 double surface(void)const{
	return 2*3.14*Rayon*Rayon;


}

void afficher(void)const{

	cout<<"C'est un cercle de centre";
	Centre.Affichage();
	cout<<"et de rayon: ";
	cout<<Rayon;
	cout<<"\n";


}


};



class Rectangle:public Forme{

private:
	Segment  S0;
	double H0;//pour mémoriser les données du constructeur
//Quand on délare des trucs private, on ne peut pas ne pas les initialiser sinon ça va renvoyer une erreur, par contre je n'ai pas compris pouruoi j'ai déclaré suiv sans l'initialiser mais ça n'as pas renvoyé d'erreur
	Forme *suiv;
protected:
	Segment Largeur;

	double  Hauteur;


public:
	Rectangle(const Segment& S,double H):Largeur(S),Hauteur(H),S0(S),H0(H){
	

	}


double perimetre(void)const{
	return 2*(Largeur.Distance()+Hauteur);

}

 double surface(void)const{
	return (Largeur.Distance()*Hauteur);;


}

void afficher(void)const{

	cout<<"C'est un rectangle de segment: ";
	Largeur.AffichageS();
	cout<<"et de hauteur: ";
	cout<<Hauteur;
	cout<<"\n";
	cout<<"Son périmètre= "<<this->perimetre()<<"\n";
	cout<<"Sa surface= "<<this->surface()<<"\n";


}


};






class Carre:public Rectangle{




public:
	Carre(  Segment& S):Rectangle(S,(double)S.Distance()){

	}


//J'ai pas mis une fonction qui calcule la surface et le périmètre parce que c'est les mêmes

	
void afficher(void)const{

	cout<<"C'est un carre de segment: ";
	Largeur.AffichageS();
	cout<<"et de hauteur: ";
	cout<<Hauteur;
	cout<<"\n";
	cout<<"Son périmètre= "<<this->surface()<<"\n";
	cout<<"Sa surface= "<<this->perimetre()<<"\n";//en fait je peut utiliser this à l'interieur d'une fonction constante ,ilsuffit juste que j'harminise les trucs constants


}

};



class ListeFormes
{
private:	
Forme *tete;//tête de liste
Forme *racine;

public:
	ListeFormes(void){
	tete=NULL;
	racine=tete;

}
	void ajouter(Forme *F){
	F->setSuiv(tete);
	tete=F;
	

}
	void afficher()const{
	Forme* Actuel=tete;
	while(Actuel!=NULL){
		Actuel->afficher();

		Actuel=Actuel->getSuiv();}



}
	void afficherMax()const{

Forme*pgp=tete;
Forme*pgs=tete;
Forme*Actuel=tete;
while(Actuel!=NULL){
	if(Actuel->perimetre()>=pgp->perimetre())
		pgs=Actuel;
	if(Actuel->perimetre()>=pgs->perimetre())
		pgs=Actuel;

	Actuel=Actuel->getSuiv();

}
cout<<"La forme qui a le plus grand périmètre est : ";
pgp->afficher();
cout<<"La forme qui a le plus grand périmètre est : ";
pgs->afficher();


}



};















int main(){
Terrestre T(310,4);
Vehicule *V=&T;
Marin M(40,5.1);
Vehicule *V2=&M;
//V2->Afficher();
//V->Afficher();
Amphibe A(70,3,4);
Vehicule *V3=&A;
//V3->Afficher();


FiltrerFicPoints("fichier.txt","fichier2.txt",22);
Point P1(5.5,3);
Point P2(6,9);
Segment D(P1,P2);

Carre C(D);
Forme *F=&C;
Rectangle R(D,17.5);
Forme *F2=&R;

//F->afficher();
ListeFormes L;

L.ajouter(F);
L.ajouter(F2);
//L.afficher();
L.afficherMax();
}

			
			

		
