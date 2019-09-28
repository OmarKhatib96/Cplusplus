
#include <iostream>
#include <cstdlib>
#include <string.h>
using namespace std;

const int TAILLE_FIXE=20;
#include <math.h>
const bool EstPremier(int entier);

class Exception{
private:
long V;
public:
	Exception(long v){
		V=v;
}

	long getException(void){
		return V;}


};



	class SHORT
{


	private:
		short val;
	public:
		SHORT(long  v){

			try{
				if(-32768<v && v< 32767){
					val=v;}
				else{
					throw Exception(v);
				
}



			}//fin try

		catch(Exception E){
			cout<<"Le nombre saisi "<<E.getException()<<" n'est pas un long\n";
			exit(99);
	}//fin catch





}//fin constructeur


		

	friend ostream &operator <<(ostream &os,const SHORT &S){



			SHORT R(S.val);
			cout<<R.val;
		

			return os;//On fait un return os pour pouvoir enchaîner et pouvoir écrire:cout <<Nom<<'/n';(cpris)
		



}



		friend SHORT operator+(const SHORT &S1,const SHORT &S2){
			SHORT S3(S1.val+S2.val);
			return S3;		


		
		
}
	
		
			


		friend SHORT operator-(const SHORT &S1,const SHORT &S2){
			SHORT S3(S1.val-S2.val);
			return S3;		


		
		
}
	

		
		friend SHORT operator*(const SHORT &S1,const SHORT &S2){
			SHORT S3(S1.val*S2.val);
			return S3;		


		
		
}


		friend SHORT operator/(const SHORT &S1,const SHORT &S2){
			SHORT S3(S1.val/S2.val);
			return S3;		


		
		
}

	

};




/***************Execice11****************************/




template<class T>

class Ensemble{

private:

	T tab[TAILLE_FIXE];
	int taille;

	
public:

	Ensemble(void){
		
	taille=0;
	}


	
	const bool TestAppartenance(T entier){

		for(int i=0;i<taille;i++){
			if(tab[i]==entier){


				return true;}


}

		return false;

}

	int  AjoutEntier(T entier){

			if (TestAppartenance(entier)){
				cout<<entier<<" est déjà présent dans l'ensemble\n";
				return -1;}
	
		
				
		if(taille==TAILLE_FIXE)
			cout<<"Taille maximale atteinte supprimer des éléments!\n";

		else{

			tab[taille]=entier;
			taille++;

			}
		}

	void Suppression(T entier){
		bool trouve=false;
		for(int i=0;i<taille;i++){
			if(tab[i]==entier){
				trouve=true;
				for(int j=i;j<taille;j++)
					tab[j]=tab[j+1];

						



}
				



}
		if(trouve)
				taille--;
		else
			cout<<"l'entier n'a pas été trouvé dans l'ensemble\n";
			
}
	const void Affichage(void){

		for(int i=0;i<taille;i++){

				cout<<tab[i]<<" ";
			}
				cout<<"\n";
		}	


	const bool TestEgalite(Ensemble &E){
		for(int i=0;i<taille;i++){
			if(!E.TestAppartenance(tab[i])){
				cout<<"Non, ils ne sont pas égaux\n";
				return false;}}
		cout<<"Oui,ils sont égaux\n";
		return true;
 }
			

	const void Intersection(Ensemble &E2){
	cout<<"L'intersection des deux ensembles est:\n";
		for(int i=0;i<taille;i++){
			if(E2.TestAppartenance(tab[i]) )
				cout<<tab[i]<<" ";
		}
}



	const Ensemble EnsemblePremier(void){
		Ensemble Premiers;
		for(int i=0;i<taille;i++){
			if(!EstPremier(tab[i]))
				Premiers.AjoutEntier(tab[i]);
			}
	
			return Premiers;
}
};



	const bool EstPremier(int entier){
		bool divisible=false;
		if(entier==1){}
		
		else{
			int max=sqrt(entier);

			for(int i=2;i<max;i++){
				if(entier%i==0 && entier!=i)
					divisible=true;
			}

		}
	
		return divisible;


}







/************/


int const TAILLE_SUFF=10;


class String 
{


   
	
public:

	String(const char *str);
	~String(void);
	String(){
	ch=new char[TAILLE_SUFF];
	}

	String(const String &S);
	void Affichage(void)const;
	void Majuscule(void);
	bool EstEgal(const String& str2)const;
	friend void Modification(float NvTaux);

	String  operator=(const String &S2){
			this->len=S2.len;
			delete [] this->ch;
			this->ch=new char[len];
			
			strcpy(this->ch,S2.ch);
			
			return *this;









			
		
		
}
		
				


	friend ostream &operator <<(ostream &os,const String &S){



			cout<<S.ch;
		

			return os;//On fait un return os pour pouvoir enchaîner et pouvoir écrire:cout <<Nom<<'/n';(cpris)
		



}







private:

	char *ch;
	int len;



};



String::String(const char* str){
	
	ch=new char[TAILLE_SUFF];
	strcpy(ch,str);
	len=strlen(ch);


}


String::String( const String &S):ch(S.ch)//Constructeur par copie

{
ch=new char[TAILLE_SUFF];
strcpy(ch,S.ch);
len=S.len;

}

String::~String(void){
	delete [] ch;

}


void String::Affichage(void)const{
	cout<<ch;

}

void String::Majuscule(void){
	for(int i=0;i<strlen(ch);i++)
		ch[i]=toupper(ch[i]);
}


bool String::EstEgal(const String& str2)const
{
	if(!strcmp(ch,str2.ch))
		return true;
	else
		return false;

}



















int main(){
//SHORT S(100000);
//cout<<S;
Ensemble<float> E;
Ensemble<string> E2;
/*
E.AjoutEntier(32.5);
E.AjoutEntier(17.5);
E.AjoutEntier(2.2);
E.AjoutEntier(19.5);
E.AjoutEntier(20);
E.AjoutEntier(10);
E.AjoutEntier(1);
E.AjoutEntier(3);
E.AjoutEntier(103);
E.AjoutEntier(71);
E.AjoutEntier(1000);
E.AjoutEntier(1000);
E.AjoutEntier(198);

E2.AjoutEntier("fdsf");
E2.AjoutEntier("omar");
E2.AjoutEntier("khatib");
E2.AjoutEntier("yassine");
E2.AjoutEntier("khatib");
E2.Affichage();
*/
Ensemble <String> S;

S.AjoutEntier("fdsf");
S.AjoutEntier("omar");
S.AjoutEntier("khatib");
S.AjoutEntier("yassine");
S.AjoutEntier("khatib");



//Ensemble P=E.EnsemblePremier();
String Omar("omar");
String Bahaa("bahha");
Bahaa=Omar;
//Bahaa.Affichage();
//Omar.Affichage();Works perfectly
return 0;



}





