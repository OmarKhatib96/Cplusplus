

#include "Point.h"


Point::Point(void){

theta=Radian(0);
r=0;

}
Point::Point(double R,Radian Ra){

theta=Ra;
r=R;

}

Point:: Point(double x,double y){

r=sqrt(x*x+y*y);
Radian R(atan2(y,x));
theta=R;



}


double Point:: getPolairesR(void)const{
	return r;
}
	
Radian Point:: getPolairesT(void)const{
	return theta;
}
	
void Point::setCart(double newX,double newY){
	r=sqrt(newX*newX+newY*newY);
	theta=atan2(newY,newX);

}

void Point::afficherPol(void)const{

cout<<"Les coordonnées polaires de ce point sont "<<"("<<r<<","<<theta<<")\n";

}

void Point::afficherCart(void){
cout<<"Les coordonnées cartésiennes de ce point sont "<<"("<<this->getX()<<","<<this->getY()<<")\n";


}


void Point::setPol(double newR,Radian newTheta){
	r=newR;

	theta=newTheta;


}



double Point::getX(void)const{
	return cos(theta.getRadian())*r;
}



double Point::getY(void)const{

	return sin(theta.getRadian())*r;


}

