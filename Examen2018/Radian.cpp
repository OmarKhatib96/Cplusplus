
#include "Radian.h"
#include "Point.h"
#include "Point2.h"
#include "Polygone.h"

using namespace std;

Radian::Radian(void){


Angle=0;

}

Radian::Radian(float A){

Angle=fmod(A,2*M_PI);
if( Angle>M_PI)
	Angle=Angle-2*M_PI;

else{
	if(Angle<-M_PI)
		Angle=Angle+2*M_PI;


}//fin else




}//fin constructeur






double Radian::getRadian(void)const{
return Angle;

}

void Radian::setAngle(double ang){

Angle=ang;
}





 ostream &operator <<(ostream &os,const Radian &R)
{

	cout<<"L'angle est égal à "<<R.Angle<<" radians\n";


	


return os;//On fait un return os pour pouvoir enchaîner et pouvoir écrire:cout <<Nom<<'/n';(cpris)



}




 ostream &operator >>(ostream &os, Radian R){
	double AngleSaisi;
	cout<<"Saisir la valeur de l'angle en radian\n";
	os>>AngleSaisi;

	R.setAngle(AngleSaisi);


	return os;




}



 Radian operator+(const Radian &r1,const Radian &r2){
			
			Radian R(r1.getRadian()+r2.getRadian());
			return R;

			}

Radian operator*(const Radian &r1,const Radian &r2){
			
			Radian R(r1.getRadian()*r2.getRadian());
			return R;

			}

double Radian::toDegree(void)const{

return (Angle*180)/(M_PI);




}



Radian Radian ::createFromDegree(double deg){
double ValeurEnRadian=(deg*M_PI)/180;
Radian R(ValeurEnRadian);

return R;




}






int main(){

Radian R(10.5);


cout<<R;

Radian R2(-M_PI);

cout<<R2;
Point P(1.5,R);

P.afficherPol();

Point2 P2(1.5,R2);
P2.rotation(R);
P2.afficherPol();

Point2 tab[]={Point2(1,2),Point2(5,4),Point2(10,25),Point2(1,21),Point2(8,2),Point2(10.5,2),Point2(180,2)};

Polygone Pgone(tab,7);
Pgone.AfficheCoorCart();
cout<<"Le périmètre est égal à : "<<Pgone.Perimetre();cout<<endl;

}




