#include "Partie.h"





 float Partie:: Ptge1=0;
 int Partie:: Ptge2=0;
int Partie:: NbrCoupMoyen=0;
 int Partie::nbrDeParties=0;

bool Partie::trace=false;


void Partie::setTrace(bool T){
trace=T;

}

Partie::Partie(void){
termine=false;

Paquet P=Paquet::creerPaquetComplet();
P.MelangeListe();

for(int i=0;i<26;i++)
	 joueur1.prendreCarte(P.getCartes()[i]);



for(int i=26;i<52;i++)
	joueur2.prendreCarte(P.getCartes()[i]);

}
int  Partie::jouer(void){
	if(trace){
	cout<<"La distribution initiale du joueur 1 est: ";joueur1.AfficherCartesJoueur();cout<<endl;
	cout<<"La distribution initiale du joueur 2 est: ";joueur2.AfficherCartesJoueur();cout<<endl;}
if(termine==false){

	while(joueur1.NbrCartesJoueurs()!=0 && joueur2.NbrCartesJoueurs()!=0){
		
		Carte  CarteJ1=joueur1.JouerCarte();

		Carte CarteJ2=joueur2.JouerCarte();
		cout<<"La carte émise par j1 est"<<CarteJ1<<endl;
			joueur1.AfficherCartesJoueur();cout<<endl;
		cout<<"La carte émise par j2 est"<<CarteJ2<<endl;
			joueur2.AfficherCartesJoueur();cout<<endl;
		if(CarteJ1<CarteJ2){//normalement les deux cartes ne seront pas égales
			cout<<"joueur 2 remporte\n";
			joueur2.prendreCarte(CarteJ1);
			joueur2.prendreCarte(CarteJ2);
			NbrCoupMoyen++;
			if(trace){
			//cout<<"Le pli ramassé par le joueur 2 est "<<CarteJ1<<"et "<<CarteJ2<<endl;
			cout<<"Le joueur 1 a "<<joueur1.NbrCartesJoueurs()<<" cartes\n";
			cout<<"Le joueur 2 a "<<joueur2.NbrCartesJoueurs()<<" cartes\n";
}//fin if trace
			
	}//if comparaison carte


		else{
			cout<<"joueur 1 remporte\n";

			joueur1.prendreCarte(CarteJ1);
			joueur1.prendreCarte(CarteJ2);
			NbrCoupMoyen++;
			if(trace){
			//cout<<"Le pli ramassé par le joueur 2 est "<<CarteJ1<<"et "<<CarteJ2<<endl;
			cout<<"Le joueur 1 a "<<joueur1.NbrCartesJoueurs()<<" cartes\n";
			cout<<"Le joueur 2 a "<<joueur2.NbrCartesJoueurs()<<" cartes\n";}//fin if trace
}//fin else



		


	}//fin while

termine=true;
nbrDeParties++;
if(joueur1.NbrCartesJoueurs()==0){
	Ptge2++;
	return 2;}
else{
	if(joueur2.NbrCartesJoueurs()==0){
		Ptge1++;
		return 1;}

}//fin else


}//fin termine

}

void Partie::AfficherStats(void){

cout<<Ptge1/nbrDeParties<<endl;
cout<<Ptge2/nbrDeParties<<endl;
cout<<NbrCoupMoyen/nbrDeParties<<endl;




}


