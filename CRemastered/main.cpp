


#include "liste.h"
#include "liste2.h"
#include "Sommet.h"
#include "Sommet2.h"
#include <iostream>
using namespace std;



int main(){

Sommet2 *S2=new Sommet2(8,5);
Sommet2 *S3=new Sommet2(14,1);
Sommet2 *S4=new Sommet2(140,10);
//Liste *L=new Liste(S2);
Liste *L=new Liste;//ça a marché parce j'ai enleve setsuivant de l'initialisation du constructeur de Liste

//cout<<L->getPremier()->getDistance();
L->insertion(S2);
L->insertion(S3);
L->insertion(S4);
L->AfficherListe();//le setSuiv a marché car je l'ai mis en virtual et dans la fonction insérer il prend en paramètre une variable de type sommet2 et pas sommet
Sommet2*S=L->ParcoursListe(14);
cout<<S->getNumero();
return 0;


}


