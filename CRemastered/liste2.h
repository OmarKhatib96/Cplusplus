
#ifndef H_L
#define H_L


#include <iostream>
using namespace std;
#include "Sommet.h"
#include "liste2.h"

class Liste2{
	private:
		Sommet *premier;



	public:

	Liste2(void);
	Liste2(Sommet*P);
	~Liste2(void);
	void AfficherListe2(void)const;
	Sommet*getPremier(void);


};

#endif
