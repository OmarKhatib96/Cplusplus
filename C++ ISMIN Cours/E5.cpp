#include <iostream>
#include <math.h>
using namespace std;


int pgcd(int a,int b);


class Rationnel
{
	
private:
	int N, D;
	bool Signe;
	bool Nul;

public:
	

		friend bool operator!=(const Rationnel &r1,const Rationnel &r2);
		friend bool operator==(const Rationnel &r1,const Rationnel &r2);
	
		Rationnel(int n,int d=1):N(n),D(d){

		this->Simplification();//Il faut simplifier avant a cause du probleme du signe(- en bas)
		if(N<0 && D<0){
			N=-N;
			D=-D;
			Signe=false;//c'est positif
			Nul=false;
}
				

		if(D<0 && N>0){
			N=-N;
			D=-D;
			Signe=true;//c'est négatif
			Nul=false;
}
		

		if(D>0 && N<0){
			Signe=true;//c'est négatif
			Nul=false;
}
		
		if(D!=0 && N==0){

			Nul=true;//C'est nul
}


}//COnstructeur qui permet la construction par copie



		friend ostream &operator <<(ostream &os,const Rationnel &R)
		{
		if(R.D==1 )
			os<<R.N;
		else{
			if(R.N==0 && R.D!=0)
				os<<R.N;
		
	
			else

			os<<R.N<<"/"<<R.D;}//ici on évit de faire os<<P.ch<<"\n":c'est l'utilisateur qui devrait le faire


		return os;//On fait un return os pour pouvoir enchaîner et pouvoir écrire:cout <<Nom<<'/n';(cpris)
		


}

		friend Rationnel operator+(const Rationnel &r1,const Rationnel &r2){
			
			Rationnel R(r1.N*r2.D+r2.N*r1.D,r1.D*r2.D);
			return R;

			}

	
		friend Rationnel operator-(const Rationnel &r1,const Rationnel &r2){
			
			Rationnel R(r1.N*r2.D-r2.N*r1.D,r1.D*r2.D);
			return R;

			}




		
	
		friend Rationnel operator*(const Rationnel &r1,const Rationnel &r2){
			
			Rationnel R(r1.N*r2.N,r1.D*r2.D);
			return R;

			}





		
	
		friend Rationnel operator/(const Rationnel &r1,const Rationnel &r2){
			
			//cout <<(r1.N)*r2.D<<"/"<<r1.D*r2.N<<"\n";
				//works great2
			Rationnel R((r1.N)*(r2.D),(r1.D)*(r2.N));
			
			//Faire cette syntaxe plutot que return ((r1.N)*(r2.D),(r1.D)*(r2.N)) car elle renvoie N/1
			return R;

			}


	Rationnel operator /=(const Rationnel &r)
		{
			*this=*this/r;
			return(*this);

		}
		
	


	
	Rationnel operator *=(const Rationnel &r)
		{
			*this=*this*r;
			return(*this);

		}
		



	Rationnel operator -=(const Rationnel &r)
		{
			*this=*this-r;
			return(*this);	

		}
		


Rationnel operator +=(const Rationnel &r)
		{
			*this=*this+r;
			return(*this);

		}
		




		friend bool operator<(const Rationnel &r1,const Rationnel &r2){

			
			Rationnel r3=r1/r2;
						//cout<<r1<<"\n"<<r2<<"\n";//works perfectly in order
						//cout<<r3;doesn't work
			
			if(r1.Signe==true &&(r2.Signe==false||r2.Nul==true))
				return true;
			else{

				if(r1.Signe==false &&(r2.Signe==true||r2.Nul==true))
					return false;
				else{
			
					if(r3.N<r3.D){//il faut utiliser cette notation là plutôt que r2/r1 pour éviter qu'il divise deux foi( a confirmer)//Dans le cas ou ils sont tous les deux strictement positifs

						return true;}

					else

						return false;}}

				}




		friend bool operator>(const Rationnel &r1,const Rationnel &r2){
			
				
			if(!(r1<r2) && r1!=r2)
				return true;

			else
				return false;

			}



		friend bool operator==(const Rationnel &r1,const Rationnel &r2){
			

			if(r1.N==r2.N && r1.D==r2.D)
				return true;

			else
				return false;

			}



		friend bool operator!=(const Rationnel &r1,const Rationnel &r2){
			

			if(r1==r2)
				return false;

			else
				return true;

			}






		friend bool operator<=(const Rationnel &r1,const Rationnel &r2){
			

			if(r1<r2 || r1==r2)
				return true;

			else
				return false;

			}



		friend bool operator>=(const Rationnel &r1,const Rationnel &r2){
			

			if(r1>r2 || r1==r2)
				return true;

			else
				return false;

			}



		float ConversionReel (void){
			float reel=(float)this->N/(float)this->D;//il faut cast sur les membres de l'opération d'abord
			return reel;
			
	}


	void Simplification(void){
		int PGCD=pgcd(N,D);
		if(PGCD<0)
			PGCD=-PGCD;
		N=N/PGCD;
		D=D/PGCD;}

	
};


int reste(int a,int b){
	if(a<b)
		reste(b,a);

return a%b;

}	

int pgcd(int a,int b){
	if(reste(a,b)!=0)
		pgcd(b,reste(a,b));

	else
		return b;



}



Rationnel SuiteV(int n);

Rationnel SuiteU(int n);

/*********Utilisation de la classe Rationnel*****************/

Rationnel Suite(int q,int n){
	
	
	if(n==1)
		return 1;
	else{
		if(n>1){
			Rationnel S(1,pow(q,n-1));

			return Suite(q,n-1)+S;}
		if(n<=0){
	
			cout<<"n est négatif ou nul!\n";
						
		}

	}
}


void FonctionAffichage1(int q,int n){
for(int i=1;i<n;i++)	
	cout<<Suite(q,i).ConversionReel()<<"\n";

}


bool FonctionAffichage2(int n){

for(int i=0;i<n;i++){
	Rationnel S(1,pow(4,i));
	if((SuiteU(i)-SuiteV(i))<S)
		cout<<"("<<i<<") "<<SuiteU(i)<<" "<<SuiteV(i)<<" "<<(SuiteU(i)-SuiteV(i))<<" oui \n";
	else
		cout<<"("<<i<<") "<<SuiteU(i)<<" "<<SuiteV(i)<<" "<<(SuiteU(i)-SuiteV(i))<<" non \n";
	
}

}








/****Partie 4**************/

Rationnel SuiteU(int n){
	
	if(n==0)
		return 2;
	else{
		if(n>=1){
			Rationnel S=(SuiteU(n-1)+SuiteV(n-1))/2;

			return S;}
		if(n<0){
	
			cout<<"n est négatif ou nul!\n";
						
		}

	}
}



Rationnel SuiteV(int n){
	
	if(n==0)
		return 1;
	else{
		if(n>=1){
			Rationnel S=2/SuiteU(n-1);

			return S;}
		if(n<0){
	
			cout<<"n est négatif ou nul!\n";
						
		}

	}
}

int main(void){

Rationnel R(1,-4);
cout<<R;

if(4==R)
	cout<<"oui\n";


//FonctionAffichage1(2,10);//La limite quand n->+l'inf est 1+1/(1-q)

FonctionAffichage2(10);//La limite quand n->+l'inf est 1+1/(1-q)
//cout<<"\n";
//cout<<Resultat;

//Resultat+=10;
//cout <<Resultat;
//cout<<Resultat.ConversionReel();
//cout<<Resultat;
/*Rationnel R2(3);

 Resultat=R+3;



if((R<=R2))//marche
cout<<"ff\n";
	*/
//cout<<R*R2;,


return 0;

}
