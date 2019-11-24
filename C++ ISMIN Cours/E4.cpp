# include <iostream>
using namespace std;
#include <string.h>

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
	
private:

	char *ch;



};



String::String(const char* str){
	
	ch=new char[TAILLE_SUFF];
	strcpy(ch,str);


}


String::String( const String &S):ch(S.ch)//Constructeur par copie

{
ch=new char[TAILLE_SUFF];
strcpy(ch,S.ch);

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


/**************************/
class Compte{

private:
	String Nom;
	float Montant;
	static float  Taux;
	Compte *suiv;
	static Compte*tete;
	

public:

	friend void Modification(Compte &C,float);
	Compte(const char*,float montant=0);
	Compte(){
		
}
	void Actualise(void);
	void Versement(float valeur);
	void Actualisation(void);
	void Affichage(void)const;
	void AffichageListe(void);
	~Compte(void);
	

};



	Compte::Compte(const char * name,float montant):Nom(name){
		
	Montant=montant;
	


	suiv=tete;
	tete=this;//premier devient le dernier compte inséré


	
	}
	Compte::~Compte(void){
		//delete suiv;
   Compte *prec=0;
    Compte* actuel = tete;
    Compte *precedent=NULL;
    /* parcours de la liste a la recherche du compte, tout en gardant trace de
     * son precedent
     */
    while (actuel != this) // la recherche est faite en comparant les adresses
    {
	precedent=actuel;
        actuel = actuel->suiv;
    }

    // on sort necessairement de la boucle en ayant trouve le compte

    /* on supprime le compte de la liste en chainant son precedent sur son
     * suivant, ou en chainant la tete de liste sur son suivant s'il n'a pas de
     * precedent
     */

	
    if (prec != 0)
        prec->suiv = actuel->suiv;
    else
        tete = actuel->suiv;
	}
	
	 void Modification(Compte &C,float NvTaux){
		C.Taux=NvTaux;
	
	}
	
void Compte::Versement(float valeur){
	Montant=Montant+valeur;

	}

void Compte::Affichage(void)const{
	Nom.Affichage();
	cout<<": "<<Montant<<", Taux:"<<Taux<<"\n";
}
	float Compte::Taux=0;//Initialisation de l'attribut statique
	Compte *Compte::tete=NULL;//Initialisation de l'attribut statique
void Compte:: Actualisation(void){
	Montant=Montant+Montant*Taux;
}




void Compte:: AffichageListe(void){
	Compte *Actuel=tete;	
	while(Actuel!=NULL){
		Actuel->Affichage();

		Actuel=Actuel->suiv;}
}


void Compte::Actualise(void){
	Compte*Actuel=tete;	
	while(Actuel!=NULL){
		Actuel->Actualisation();
		Actuel=Actuel->suiv;
	 }


}

/*********************Mise ajour classe compte**************************/

	int main(void){

	/*String s1("Omar Khatib\n");
	String s2(s1);

	s2.Majuscule();


	s2.Affichage();
	

	s1.Affichage();
	s1.EstEgal(s2);
	*/
/*
	C.Affichage();
	C.Versement(8659);
	C.Affichage();
	
	C.Actualisation();
	Modification(C,0.5);*/
	Compte *C= new Compte("Omar",1879.5);
	Compte *C2= new Compte("Khatib",1879.5);
	Compte *C3= new Compte("Zbbi",0);
	
 	C->AffichageListe();


}

