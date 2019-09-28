
#include "Array.h"
#include "ArraySec.h"

#include "Vect.h"






Array::Array(int t){
	taille=t;
	tab=new int[taille];

	for(int i=0;i<taille;i++)
		tab[i]=0;





}
	void Array::load(int t[]){
		
		for (int i=0;i<taille;i++)
			tab[i]=t[i];
		



}
	Array::Array(const Array & A2):taille(A2.taille),tab(A2.tab){
		tab=new int[taille];
		for(int i=0;i<taille;i++)
			tab[i]=A2.tab[i];
	

}


	Array::~Array(void){

	delete []tab;


}

 ostream &operator <<(ostream &os,const Array A){
		cout<<"Cet array est de taille "<<A.taille<<" et ses éléments sont:\n";
		for(int i=0;i<A.taille-1;i++)
			cout<<A.tab[i]<<",";
	

			cout<<A.tab[A.taille-1];

return os;


}


	 bool operator==(const Array &A1,const Array &A2){
		if(A1.taille==A2.taille){
			
			for (int i=0;i<A1.taille;i++){
				if(A1.tab[i]!=A2.tab[i])
					return false;}

			return true;
					}


		else
			return false;

}
					
					


	int Array::get(int i)const{
		return tab[i];}

	void Array::set(int i,int val){
			tab[i]=val;}

	
	int Array::size(void)const{
			return taille;}


	
	void Array::resize(int newSize){
		int tabRemplacant[taille];
		for( int j=0;j<taille;j++)
			tabRemplacant[j]=tab[j];//On conserve les valeurs du tableau dans un nouveau tableau
		delete [] tab;//on désalloue la mémoire de tab car on va changer de dimension
		if(newSize<taille){
			taille=newSize;
			tab=new int[taille];//on crée un nouveau tableau
			for(int i=0;i<taille;i++)
				tab[i]=tabRemplacant[i];

		}

		else{
			if(newSize>taille){
				int oldSize=taille;
				taille=newSize;
				tab=new int[taille];
				for(int i=0;i<oldSize;i++)
					tab[i]=tabRemplacant[i];
				for(int i=oldSize;i<taille;i++)
					tab[i]=0;
		

			}




 }




}//fin fonction



int main(){



int t1[]={4,2,5,0,8,7,6,12,9,2};

Array a1(10);



a1.load(t1);

//cout<<a1<<endl;
a1.set(8,5);
//cout<<a1<<endl;
a1.resize(1);
cout<<a1<<endl;
ArraySec As(10);
As.load(t1);
//cout<<As.subArray(-1,5);

Vect v(10);

int t5[]={2,3,2,4,5};
Vect v1(5,t5);
cout<<v1;

v1=3*v1;cout<<endl;
//cout<<v1;
v1=v1*3;cout<<endl;
//cout<<v1;

int tab[3]={1,1,1};
Vect v0(3,tab);
Vect v4(3,tab);
int  v5=v0*v4;
cout<<v5;

return 1;

}


