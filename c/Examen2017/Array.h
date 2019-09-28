
#ifndef ARRAY_H
#define ARRAY_H
#include <iostream>

using namespace std;







class Array{


protected:
	int *tab;

private:

	int taille;

public:

	Array(int taille);
	void load(int *tab);
	~Array(void);
	Array(const Array & A2);
	friend ostream &operator <<(ostream &os,const Array A);

	friend bool operator==(const Array &A1,const Array &A2);


	virtual int get(int i)const;

	virtual void set(int i,int val);
	
	int size(void)const;
	
	virtual void resize(int newSize);
	



};
#endif

