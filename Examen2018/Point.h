#ifndef POINT_H
#define POINT_H

#include "Radian.h"





class Point{


private:

	double r;
	Radian theta;


public:

Point(void);
Point(double r,Radian Ra);

Point(double r1,double r12);


double getPolairesR(void)const;
Radian getPolairesT(void)const;

void setCart(double newX,double newY);

void afficherPol(void)const;

void afficherCart(void);

double getX(void)const;

double getY(void)const;

void setPol(double newR,Radian newTheta);
};


#endif


