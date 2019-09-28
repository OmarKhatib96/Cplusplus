


#include "Point2.h"





Point2::Point2(void):Point(){





}

Point2::Point2(double r,Radian t):Point(r,t){

}
	

Point2::Point2(double x,double y):Point(x,y){

}

void Point2::homothethie(double k){

this->setCart(getX()+k,getY()+k);

}
void Point2::rotation(const Radian& t){

setPol(this->getPolairesR(),this->getPolairesT()+t.getRadian());


}
double Point2::distance(const Point2& P2)const{

double dist=sqrt((this->getX()-P2.getX())*(this->getX()-P2.getX())+(this->getY()-P2.getY())*(this->getY()-P2.getY()));

return dist;

}












