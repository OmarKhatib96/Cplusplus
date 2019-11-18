#include "Salle.h"
#include "SalleCours.h"

/*
private:
    string nom;
    float largeur;
    float longueur;
    int capacite;




public:
    Salle(void);//Constructeur par défaut
    Salle(string nom, float largeur, float longueur, int capacite);
    void AffichageSalle(void) const;
    float getNom(void) const;
    float getLargeur(void) const;
    float getLongueur(void)const;
    int getCapacite(void)const;
    friend bool operator<(const Salle &Salle1,const Salle &Salle2);
    friend bool operator==(const Salle &Salle1,const Salle &Salle2);
    */

   Salle::Salle(void){



   }

    Salle::Salle(string n, float lar, float lon, int cap)
    {

        nom=n;
        largeur=lar;
        longueur=lon;
        capacite=cap;

    }
    void  Salle::AffichageSalle(void) const{

        cout<<"Salle "<<nom<<", capacité: "<<capacite<<", largeur: "<<largeur<<"longueur: "<<longueur<<endl;


    }


    int Salle::getCapacite(void) const{
        return capacite;
    }
    float Salle::getLargeur(void)const{

        return largeur;
    
    }
    float Salle::getLongueur(void)const{

        return longueur;
    }

    string Salle::getNom(void) const{

        return nom;
    }

     bool operator==(const Salle &Salle1,const Salle &Salle2)
     {


         if(Salle1.nom==Salle2.nom && Salle1.capacite==Salle2.capacite && Salle1.largeur==Salle2.largeur && Salle1.longueur==Salle2.longueur)
            return true;
         else
            return false;

     }

    bool operator<(const Salle &Salle1,const Salle &Salle2){
            if (Salle1.capacite<Salle2.capacite)
                return true;
            else
            {
                return false;
            }
            

    }

    
int main(void){

Salle S=Salle("Guy Verdier",22.5,20,10);
Salle S2=Salle("Omar Khatib",22.5,20,100);
SalleCours salleCours=SalleCours("Omar Khatib",22.5,20,100,true);
Salle *salleC=&salleCours;
salleC->AffichageSalle();
//salleCours.AffichageSalle();
S.AffichageSalle();

if(S<S2)
    cout<<"true";
else 
    cout<<"false";


}