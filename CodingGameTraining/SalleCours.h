#include "Salle.h"



class SalleCours:public Salle{

private:

bool estAmphi;


public:

    SalleCours(string nom, float largeur, float longueur,int capacite,bool Amphi);
    void AffichageSalle(void)const;

    //:Salle(nom,largeur,longueur,capacite);
    //{
      //  estAmphi=Amphi;
    //}



};