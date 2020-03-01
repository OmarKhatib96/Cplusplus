#include "MatriceCarree.h"




MatriceCarree::MatriceCarree()
{
	
	MatriceCarree(0);
	
	
}

MatriceCarree::MatriceCarree(int dimension_matrice)
{
	dimension=dimension_matrice;
	vector<int> array_ini;// array of dimension_matrice 0
	for (int i=0;i<dimension_matrice;i++)
		array_ini.push_back(0);
		
	for (int i=0;i<dimension_matrice;i++)//Filling the [dimension_matrice][dimension_matrice] matrix with the 0s
		colonnes.push_back(array_ini);

			
}

int MatriceCarree::getDimension()const
{
	return dimension;
	
}

int MatriceCarree::get(int i, int j)const{
	
	return colonnes.at(i).at(j);
	
	
	
}

void  MatriceCarree::set(int i, int j, int val)
{
		
	colonnes.at(i).at(j)=val;

}

void  MatriceCarree::redimensionnement(int nouvelleDimension) 
{
	
//MatriceCarre(nouvelleDimension);

}






