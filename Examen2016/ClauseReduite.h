
#include "Clause.h"








class ClauseReduite:public Clause{



public:

ClauseReduite(void)
ClauseReduite(int *t,int T);

~ClauseReduite(void);

friend ClauseReduite operator+(const ClauseReduite &C1,const ClauseReduite &C2);
bool evalue(int,bool);


}
