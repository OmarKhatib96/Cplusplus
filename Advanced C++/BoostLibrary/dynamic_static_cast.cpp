
using namespace std;
#include <iostream>
//for static_cast
class B {};
class D : public B {};
class X {};

//for dynamic_cast, Base Foo, and Bar should be Polymorphical type (should be at least having virtual function)
class Base
{
public:
    virtual void DoIt() = 0;    // pure virtual
    virtual ~Base() {};
};

class Foo : public Base
{
public:
    virtual void DoIt() { cout << "Foo"; }; 
    void FooIt() { cout << "Fooing It..."; }
};

class Bar : public Base
{
public :
    virtual void DoIt() { cout << "Bar"; }
    void BarIt() { cout << "baring It..."; }
};

Base* CreateRandom()
{
    if( (rand()%2) == 0 )
        return new Foo;
    else
        return new Bar;
}



int main()
{
    //static cast
  D* d = new D;
  B* b = static_cast<B*>(d); // this works
  X* x = static_cast<X*>(d); // ERROR - Won't compile

  /*dynamic cast
  this cast is executed at runtime, not compile time
  casts can go in one of 2 directions: fom bas to derived or from derived to base

  D2B is always true if ptr is derived from Type(we want to cast by Type*) we'lle get NULL otherwise

  B2D:
  return 0;
  */

  for( int n = 0; n < 10; ++n )
    {
        Base* base = CreateRandom();

            base->DoIt();

        Bar* bar = (Bar*)base;
        bar->BarIt();

        /* Problem:
        main() can't tell what kind of object CreateRandom() will return, so the C-style cast Bar* bar = (Bar*)base; is decidedly not type-safe. How could you fix this? One way would be to add a function like bool AreYouABar() const = 0; to the base class and return true from Bar and false from Foo. But there is another way: use dynamic_cast<>:
        */
       //Solution:
        Bar* bar = dynamic_cast<Bar*>(base);
        Foo* foo = dynamic_cast<Foo*>(base);
        if( bar )
            bar->BarIt();
        if( foo )
            foo->FooIt();
    }
}