#include "Sommet.h"




Sommet::Sommet(string n)
{
	
	nom=n;

	marque=false;


}

bool Sommet::getMarque()const
{
	return marque;

}

string Sommet::getNom()const
{
	return nom;

}

 
ostream &operator <<(ostream &os,const Sommet S)
{
	cout<<"Ce sommet "<<S.getNom();

	if(S.getMarque())
		cout<<" est marqué\n";
	else
		cout<<"n'est pas marqué\n";


}


bool operator ==(const Sommet &S1,const Sommet &S2)
{
	if(S1.getNom()==S2.getNom())
		return true;
	else
		return false;

}


bool operator !=(const Sommet &S1,const Sommet &S2)
{
	if(S1==S2)
		return false;
	else
		return true;

}


void Sommet::setMarque(bool marque)
{
	marque=marque;

}


