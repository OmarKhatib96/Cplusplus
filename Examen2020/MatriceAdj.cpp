#include "MatriceAdj.h"







MatriceAdj::MatriceAdj():MatriceCarre(0)
{

}


MatriceAdj::MatriceAdj(int dimension):MatriceCarre(dimension)

{
}

void MatriceAdj::set(int i, int j, int val)
{

	if(!val)
		MatriceCarre::set(i,j,val);
	else
		MatriceCarre::set(i,j,1);


}


void MatriceAdj::setAll(void)
{
	for(int i=0;i<getDimension();i++)
		for(int j=0;j<getDimension();j++)
			MatriceCarre::set(i,j,1);

	

}


void MatriceAdj::resetAll(void)
{
	for(int i=0;i<getDimension();i++)
		for(int j=0;j<getDimension();j++)
			MatriceCarre::set(i,j,0);


}


int MatriceAdj::matriceDensite(void)const
{
	int nbrSet=0;
	for(int i=0;i<getDimension();i++)
 	{
		for(int j=0;j<getDimension();j++)
		{
			if(colonnes.at(i).at(j))
				nbrSet++;
		}
	}	
	
	return nbrSet;
}





