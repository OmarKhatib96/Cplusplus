#include <iostream>

using namespace std;
#include <math.h>



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

	

	Polygone Convexe(void){
		int nbr=0;

		int taille=nbrPoints;


		Point* R=new Point[taille];//R<-ensemble vide de points
		Point P0;
		P0=tab[0];
		Point P;
//Recherche du point le plus à gauche
		for(int i=0;i<taille;i++){
			if(P0.getX()>tab[i].getX())
				P0=tab[i];
			else{
				if(P0.getX()==tab[i].getX()){
					if(P0.getY()<tab[i].getY())
						P0=tab[i];
					}//fin if

			}//fin else
					
				}//fin for		

			
		P=P0;//p<-p0
		bool Egalite=false;
		Point Q;
		while(!Egalite){
			R[nbr]=P;
			nbr++;
			Q=tab[0];
		for(int i=0;i<taille;i++){
					if( !tab[i].TestEgalite(P))
						Q=tab[i];

						}//fin for

			for(int i=0;i<taille;i++){
				if( (Q.getX()-P.getX())*(tab[i].getY()-P.getY())-(tab[i].getX()-P.getX())*(Q.getY()-P.getY()) <0 )
					Q=tab[i];}//fin fors

//			}//fin for
			P=Q;
			if(P.TestEgalite(P0)){

				Egalite=true;}//fin if 



}//fin while
		Polygone Enveloppe(R,nbr);

	return Enveloppe;
			
		}//fin fonction	


};
			
			
int main(void){

	Point P(5.26,5);
	Point P2(5.26,7);
	Segment S(P,P2);
	//cout<<P.Distance(P2)<<"\n";
	P.Affichage();
	S.AffichageS();
	S.Translation(P2);
	S.AffichageS();
	Point tableau[5]={Point(0.5,1),Point(1,4),Point(4,3),Point(3,1),Point(2,2)};
	Polygone p(tableau,5);
	p.AffichageP();
	Polygone Pol;

	Pol=p.Convexe();
	Pol.AffichageP();
	//p.Convexe().AffichageP();

	

//cout<<P.TestEgalite(P2);
}









		
