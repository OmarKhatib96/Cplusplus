#include <iostream>
using namespace std;


const int ANNEE_DE_BASE=1996;

struct Date
{
	int jour;
	int mois;
	int annee;

};




void Initialisation(struct Date &D,int j,int m,int a=ANNEE_DE_BASE){

	D.jour=j;
	D.mois=m;
	D.annee=a;

}
	

void Affichage(struct Date &D){

	cout<<D.jour<<"/"<<D.mois<<"/"<<D.annee<<"\n";

	

}

	

bool Identiques(struct Date &D1,struct Date &D2){
	if(D1.jour==D2.jour && D1.mois==D2.mois && D1.annee==D2.annee)
		return true;

	else
		return false;
}



bool Identiques(struct Date &D,int j,int m, int a){
	
		if(D.jour==j && D.mois==m && D.annee==a)
			return true;	
		else
			return false;
}


//Strcture ListeDate//

struct ListeDates
{
	int nbjours;
	Date *dat;

	};

void Initialisation2( ListeDates &L,int NbrJour){
L.nbjours=NbrJour;
L.dat=new  Date[NbrJour];
for(int i=0;i<NbrJour;i++)
	Initialisation(L.dat[i],1,1);


	
}


void AfficheListe( ListeDates &L){
	for(int i=0;i<L.nbjours;i++)

		Affichage(L.dat[i]);


	
}

void Modifie( ListeDates &L,int rang,int j,int m,int a){
	Initialisation(L.dat[rang],j,m,a);

}

void LibereEspace( ListeDates &L){
delete L.dat;

}
	
int main(void){
struct Date D;
struct Date D2;
Initialisation(D,4,4);
Initialisation(D2,23,8);
Affichage(D);
Identiques(D,D2);
Identiques(D,4,5,1998);
struct ListeDates L;
Initialisation2(L,5);
cout<<"****************";
AfficheListe(L);
Modifie(L, 3, 2, 1, 1949);
LibereEspace(L);

cout<<"****************";
AfficheListe(L);
return 1;

}







	
