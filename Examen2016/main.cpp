

#include "Clause.h"


/*réponse à la première question:
1)
pour x1 vrai:non x1=faux,donc f1 est faux

pour x2 faux:f1 est faux

pour x1 faux et x2 vrai:(x1 v non x2)=(faux union faux)=faux
fonc f1 est faux


donc f1 n'est pas satisfiable
2)
Pour x1 faux et x2 vrai

pour x1 vrai et x2 faux

pour x1 faux et x2 faux


*/
int main(){




int tab1[]={1,3,-2,3,-6,5,-1,-5,-6};
Clause C(tab1,8);
cout<<C;
C.SansDoublons();cout<<endl;
cout<<C;cout<<endl;
C.sansEtv();
cout<<C;cout<<endl;
cout<<C.vMin();

return 1;

}


