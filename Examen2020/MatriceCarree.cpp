#include "MatriceCarree.h"




MatriceCarre::MatriceCarre()
{
	
	MatriceCarre(0);
	
	
}

MatriceCarre::MatriceCarre(int dimension_matrice)
{
	dimension=dimension_matrice;
	vector<int> array_ini;// array of dimension_matrice 0
	for (int i=0;i<dimension_matrice;i++)
		array_ini.push_back(0);
		
	for (int i=0;i<dimension_matrice;i++)//Filling the [dimension_matrice][dimension_matrice] matrix with the 0s
		colonnes.push_back(array_ini);

			
}

int MatriceCarre::getDimension()const
{
	return dimension;
	
}

int MatriceCarre::get(int i, int j)const{
	
	return colonnes.at(i).at(j);
	
	
	
}

void  MatriceCarre::set(int i, int j, int val)
{
		
	colonnes.at(i).at(j)=val;

}

void  MatriceCarre::redimensionnement(int nouvelleDimension) 
{
	
//MatriceCarre(nouvelleDimension);

}




