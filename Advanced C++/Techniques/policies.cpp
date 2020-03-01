#include <iostream>

using namespace std;

template <class T>
//Première méthode
struct OpNewCreator

{
    static T*create();
    {
        return new T;
    }
};


//Deuxième méthode

template <class T>
struct MallocCreator
{

    static T*create()
    {
        void *buf=malloc(sizeof(T));
        if(!buf) return 0;
        return new(buf) T;
    }
};

//Troisième méthode

template <class T>
struct PrototypeCreator
{
    PrototypeCreator(T*pObj=0):pProtoype_(pObj()
    {}
    T*Create()
    {

        return pPrototype_ ? pPrototype_->Clone()
    }
    T* GetPrototype(){ return pPrototype_;}

    void SetPrototype(T* pObj){ pPrototype_=pObj;}
    private:
        T* pPrototype_;
};


//How to design a class that exploits the Creator policy

//Library code
/*template <class CreationPolicy>
class WidgetManager: public CreationPolicy
{
...
};*/


//Instatiating the WidgetManager
//Application code
//typedef WidgetManager< OpNewCreator<Widget>> MyWidgetMgr;

