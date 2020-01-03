#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <vector>


using namespace std;

class MatriceCarre
{
	
		protected :
			vector<vector<int>> colonnes ;
			int dimension;
	
		public:
			MatriceCarre();
			MatriceCarre(int dimension_matrice);
			int getDimension()const;
			int get(int i, int j)const;
			virtual void set(int i, int j, int val);
			void redimensionnement(int nouvelleDimension);
			
		
	
};
