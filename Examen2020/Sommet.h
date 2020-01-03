
#include <stdio.h>
#include <stdlib.h>
#include <iostream>


using namespace std;




class Sommet
{
	private:
		string nom;
		bool marque;
	
	public:
		
	Sommet(string n);
	
	string getNom()const;
	bool getMarque()const;
	void setMarque(bool marque);
	friend ostream &operator <<(ostream &os, const Sommet  &S);
	friend bool operator==(const Sommet &S1,const Sommet &S2);
	friend bool operator!=(const Sommet &S1,const Sommet &S2);


};
	
	
