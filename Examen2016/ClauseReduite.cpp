
#include "ClauseReduite.h"






ClauseReduite::ClauseReduite(void):Clause(void){



}
ClauseReduite::ClauseReduite(int *t,int T):Clause(*t,T){

ClauseReduite::SansDoublons();
ClauseReduite::sansEtv();

}

ClauseReduite::~ClauseReduite(void){



}

 ClauseReduite operator+(const ClauseReduite &C1,const ClauseReduite &C2){
	int tableau[C1.taille,C2.taille];
	for(int i=0;i<C1.tab;i++)
		tableau[i]=C1.tab[i];

	for(int i=C1.tab;i<C2.tab+C1.tab;i++)
		tableau[i]=C2.tab[i];
	

	ClauseReduite Resultat(tableau,C1.taille+C2.taille);

	
	Resultat.SansDoublons();	
	Resultat.sansEtv();
	return Resultat;
	

}
bool ClauseReduite::evalue(int,bool){



}
