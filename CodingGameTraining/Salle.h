
#ifndef SALLE_H
#define SALLE_H

#include <iostream>
using namespace std;




class Salle
{

private:
    string nom;
    float largeur;
    float longueur;
    int capacite;




public:
    Salle(void);//Constructeur par défaut
    Salle(string nom, float largeur, float longueur, int capacite);
    void virtual AffichageSalle(void) const;
    string getNom(void) const;
    float getLargeur(void) const;
    float getLongueur(void)const;
    int getCapacite(void)const;
      
    friend bool operator<(const Salle &Salle1,const Salle &Salle2);
    friend bool operator==(const Salle &Salle1,const Salle &Salle2);



};
#endif






