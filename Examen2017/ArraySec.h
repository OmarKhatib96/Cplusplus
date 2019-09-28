
#ifndef ARRAYSEC_H
#define ARRAYSEC_H
#include "Array.h"







class ArraySec:public Array{


public:


	ArraySec(int taille);	
	//ArraySec(const ArraySec & A2);
	int indexOf(int val);

	ArraySec subArray(int begin,int end)const;
	
	 int get(int i)const;

	 void set(int i,int val);
	

	
	 void resize(int newSize);
	


};


#endif
