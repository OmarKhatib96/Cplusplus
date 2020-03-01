#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <vector>


using namespace std;

class MatriceCarree
{
	
		protected :
			vector<vector<int>> colonnes ;
			int dimension;
	
		public:
			MatriceCarree();
			MatriceCarree(int dimension_matrice);
			int getDimension()const;
			int get(int i, int j)const;
			virtual void set(int i, int j, int val);
			void redimensionnement(int nouvelleDimension);
			
		
	
};
