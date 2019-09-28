

#ifndef POLYGONE_H
#define POLYGONE_H
#include "Point2.h"









class Polygone{

private:
	Point2 *sommets;

	int ordre;//ordre du polynôme


public:
	Polygone(Point2 P[],int o);
	~Polygone(void);

	void AfficheCoorCart(void)const;
	double Perimetre(void);

};


#endif













