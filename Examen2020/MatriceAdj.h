#include "MatriceCarree.h"





class MatriceAdj: public MatriceCarre
{

public:
	MatriceAdj();
	MatriceAdj(int dimension);
	void set(int i, int j, int val);
	void setAll(void);
	void resetAll(void);
	int matriceDensite(void)const;


};

