


#include "ArraySec.h"

#include <stdlib.h>






void paramError(const char* msg,int invalidParam);


ArraySec::ArraySec(int taille):Array(taille){

if(taille<=0)
	 paramError("Taille saisie négative ou nulle\n",taille);
	


}


	/*ArraySec::ArraySec(const ArraySec & A2):Array(A2){
		tab=new int[this->size()];
		for(int i=0;i<this->size();i++)
			tab[i]=A2.tab[i];

}*/

int ArraySec::indexOf(int val){

	for(int i=0;i<this->size();i++){
		if (tab[i]==val)
			return i;

		}
	return -1;

}

ArraySec ArraySec:: subArray(int begin,int end)const{

	if(begin<0)
		 paramError("Indice de début négatif\n",begin);
	if(end>this->size())
		 paramError("Indice de fin plus grand que la taille\n",end);
	ArraySec As(end-begin+1);

	
 	for(int i=begin;i<end+1;i++)
		As.tab[i-begin]=this->tab[i];



	return As;


}
	


void paramError(const char* msg,int invalidParam)
{

cout<<invalidParam<<": "<<msg;

exit(0);


}


 int ArraySec:: get(int i)const{

	if(i<0 || i>this->size())
			 paramError("indice invalide\n",i);

	Array::get(i);

}

	 void ArraySec::set(int i,int val){
		if(i<0 || i>this->size())
			 paramError("indice invalide\n",i);



		Array::set(i,val);
}
	

	
void  ArraySec::resize(int newSize){

		if(newSize<=0)
			 paramError("Taille négative ou nulle\n",newSize);
			
	Array::resize(newSize);


}





