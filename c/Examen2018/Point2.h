
#ifndef POINT2_H
#define POINT2_H
#include "Point.h"









class Point2:public Point{


public:
	Point2(void);
	Point2(double r,Radian t);
	Point2(double x,double y);

	void homothethie(double k);
	void rotation(const Radian& t);
	double distance(const Point2& P2)const;




};


#endif
