

 #include "Polygone.h"





Polygone::Polygone(Point2 P[],int o){
	ordre=o;
	
	sommets=new Point2[o];

	for(int i=0;i<o;i++)
		sommets[i]=P[i];


}

	
Polygone::~Polygone(void){

	delete [] sommets;


}


void Polygone::AfficheCoorCart(void)const{
	cout<<"Les points constituant ce polygône sont : ";
	for(int i=0;i<ordre;i++)
		sommets[i].afficherCart();
		

	
}

double Polygone::Perimetre(void){
	
double P=0;

	for(int i=0;i<ordre;i++)
		P=P+sommets[i].distance(sommets[i+1]);


	P=P+sommets[ordre-1].distance(sommets[0]);


return P;

}


