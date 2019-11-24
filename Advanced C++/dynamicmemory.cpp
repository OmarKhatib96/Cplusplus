//Variable amount of memory variable during the run time

#include <iostream>
#include <new>
using namespace std;


int main(void)
{

    int * omar;
    omar= new int [5];
    //int khatib[17];
    //omar=khatib;

    //To check whether the memory allocation has succeeded or not:
    int * khatib;
    //khatib= new (nothrow) int[5] ;//TODO:Check the syntaxe of this line of code

    if(khatib==0)
    {
        //do something 
    }


    return 1;
}