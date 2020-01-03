#include "MatriceAdj.h"
#include "Sommet.h"
#include <stack>



class Graphe
{
    private:
        vector<Sommet> listeSommets;
        MatriceAdj matriceAdjacence;

    public:
        Graphe();
        Graphe(string nomSommets [],int nbrSommets);
        Graphe(string nomFichier);
        void ajouterArc(int s1,int s2);
        void affichageGraphe(void)const;
        int getNbrSommets(void)const;
        int getNbrArcs(void)const;
        bool existeArc(int s1,int s2)const;
        vector<int> getSuccesseurs(int s)const;
        Graphe parcourir(int s);

};