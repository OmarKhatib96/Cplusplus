


#ifndef RADIAN_H
#define RADIAN_H
#include <iostream>
#include <math.h>




using namespace std;


class Radian{


private:
	
double Angle;

public:

Radian(float A);
Radian(void);
double getRadian(void)const;


void setAngle(double ang);

friend ostream &operator <<(ostream &os,const Radian &R);
friend ostream &operator >>(ostream &os, Radian &R);
friend Radian operator+(const Radian &r1,const Radian &r2);
friend Radian operator*(const Radian &r1,const Radian &r2);
double toDegree(void)const;
static Radian createFromDegree(double deg);


};


#endif







