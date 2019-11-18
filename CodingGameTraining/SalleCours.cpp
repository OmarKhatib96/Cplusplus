#include "SalleCours.h"



   SalleCours::SalleCours(string nom, float largeur, float longueur,int capacite,bool Amphi):Salle(nom,largeur,longueur,capacite)
   {

       estAmphi=Amphi;

   }


   void SalleCours::AffichageSalle(void)const{

       Salle::AffichageSalle();
       if(estAmphi)
            cout<<" cette salle est un amphi\n";
       else
       {
            cout<<" cette salle n'est pas un amphi\n";
       }
       
   }


