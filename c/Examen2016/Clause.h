

#include <iostream>

using namespace std;



class Clause{

protected:

	int *tab;
private:

	int taille;



public:

Clause(void);

virtual ~Clause(void);
Clause(int *t,int T);

bool estVide(void);

friend void Suppression(Clause &C,int indiceDebut,int element);
friend ostream &operator <<(ostream &os,const Clause &C);

Clause(const Clause &C2);//Constructeur âr défaut

Clause  operator=(const Clause &C2);//surcharge de l'opérateur = d'affectation
			/*this->len=S2.len;
			delete [] this->ch;
			this->ch=new char[len];
			
			strcpy(this->ch,S2.ch);
			
			return *this;*/



void SansDoublons(void);
void sansEtv(void);
int vMin(void);




			
		
		
};
		







