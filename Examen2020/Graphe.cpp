#include "Graphe.h"



Graphe::Graphe():Graphe({}, 0)

{


}

Graphe::Graphe(string nomSommets [],int nbrSommets)
{

    for(int i=0;i<nbrSommets;i++)
    {
        listeSommets.push_back(Sommet(nomSommets[i]));
    }
    matriceAdjacence=MatriceAdj(nbrSommets);


}

void Graphe::ajouterArc(int s1,int s2)
{
    matriceAdjacence.set(s1,s2,1);

}

void Graphe::affichageGraphe(void)const
{
    cout<<"SOMMETS("<<getNbrSommets()<<")\n";

    for(int i=0;i<listeSommets.size();i++)
    {
        cout<<listeSommets.at(i).getNom()<<" "<<i<<"\n";

    }

    cout<<"ARCS("<<getNbrArcs()<<")\n";

    for(int i=0;i<matriceAdjacence.getDimension();i++)

        for(int j=0;j<matriceAdjacence.getDimension();j++)
        {
            if(existeArc(i,j))
            {
                cout<<i<<" "<<j<<"\n";
            }
        }



}

bool Graphe::existeArc(int s1,int s2)const
{
    
            if(matriceAdjacence.get(s1,s2))
            {
                return true;
            }
            else
            {
                return false;
            }
            

}



int Graphe::getNbrSommets(void)const
{

    return matriceAdjacence.getDimension();
}

int Graphe::getNbrArcs(void)const
{

    return matriceAdjacence.matriceDensite();
}

vector<int> Graphe::getSuccesseurs(int s)const
{

    vector<int> successeurs;
    for(int i=0;i<getNbrSommets();i++)
    {
        if(existeArc(s,i))
            successeurs.push_back(i);
    }
    return successeurs;

}

Graphe Graphe::parcourir(int s)
{
    int nbrSommetsParcourus=0;
    vector<int> sommetsParcourus;
    stack<int> mapile;
    for(int i=0;i<getNbrSommets();i++)
        listeSommets.at(i).setMarque(false);
    listeSommets.at(s).setMarque(true);
    mapile.push(s);
    while(!mapile.empty())
    {
        int i=mapile.top();
        mapile.pop();
        cout<<i<<"\n";
        nbrSommetsParcourus++;  
        sommetsParcourus.push_back(i);

        for(int succ=0;succ<getSuccesseurs(i).size();succ++)
        {
            if (!listeSommets.at(getSuccesseurs(i).at(succ)).getMarque())
            {
                listeSommets.at(getSuccesseurs(i).at(succ)).setMarque(true);
                mapile.push(getSuccesseurs(i).at(succ));
            }
        }
    }

    string sommetsPar[nbrSommetsParcourus];
    for(int sommet=0;sommet<nbrSommetsParcourus;sommet++)
    {
        sommetsPar[sommet]=listeSommets.at(sommetsParcourus.at(sommet)).getNom();
    }
    Graphe arbre=Graphe(sommetsPar,nbrSommetsParcourus);

    for (int i=0;i<nbrSommetsParcourus-1;i++)
        arbre.ajouterArc(i,i+1);

    return arbre;

}


int main(){


    MatriceAdj ma=MatriceAdj(6);
    cout<<"Dimension= "<<ma.getDimension()<<"\n";
    string listeSommets[]={"A","B","C","D","E","F"};
    Graphe g=Graphe(listeSommets,6);
    g.ajouterArc(1,3);
    g.ajouterArc(4,5);
    g.ajouterArc(0,2);
    g.ajouterArc(2,4);



   g.affichageGraphe();//ok
   Graphe arbre= g.parcourir(0);//ok
   arbre.affichageGraphe();

   return 1;
}

