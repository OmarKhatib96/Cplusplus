//Pointers and arrays

#include <iostream>
using namespace std;

void increase(void *data, int psize);
int addition(int a, int b);
int operation (int x, int y, int (*functocall)(int, int));
int substraction (int a, int b);





int main(void)
{
    int numbers[6]={0,1,2,3,4,5};
    int *p;
    p=numbers;//This assignement is valid
    cout<<p[1];

    p = numbers; 
    *p = 10;
    p++;  
    *p = 20;
     p = &numbers[2]; 
     *p = 30;
     p = numbers + 3;  
     *p = 40;
     p = numbers; 
      *(p+4) = 50;
    for (int n=0; n<5; n++)
            cout << numbers[n] << ", ";
    // 
    //numbers=p; is not valid!!: because numbers is an array it operates as an constant pointer! you cannot assign a constant variable
    
    /*****/
    int a[5];
    a[5] = 0;       // a [offset of 5] = 0
    *(a+5) = 0;     // pointed by (a+5) = 0 
    //Those two expressions are equivalent

    /***Pointer initializer****/

    int number;
    int * tommy=&number;
    //is equivalent to :
    /*
    int number;
    int *tommy;
    tommy=&number;
    */
   const char* terry="hello";//this is allowed

    /****Pointers arthmetics****/
    char *mychar;
    short *myshort;
    long *mylong;
    //Let's assume that char takes 1 byte, short 2 bytes, long 3 bytes

    mychar++;
    myshort++;
    mylong++;

    //if mychar=1000, mychar++=1001
    // myshort=2000, myshort=2002
    //mylong=3000,mylong=3004


//(++) and (--) have greater operator predecence that *
//exemple: *p++: equivalent to *(p++). Since ++ is used as a suffixe: it increases p and return p before it's increased
    int a1[2]={1,2};
    int *pointer=a1;
    cout<<*pointer++;   //equivalent to *(pointer++) will print 1
    cout<<*pointer;


//Pointers to Pointers

    char d;
    char *f;
    char **g;
    d='z';
    f=&d;
    g=&f;

//Void pointers test:
    int variable1=10;
    char variable2='a';
    increase(&variable2,sizeof(variable1));
    cout<<"test increase function";
    cout<<variable2;
//null poitnter
    int *nullpointer=0;
    //or
    nullpointer=NULL;
    int m,n;
    int (*minus)(int,int)=substraction;

    m=operation(7,5,addition);
    n=operation(20,m,minus);
    cout<<n;

    return 0;


}

//Void pointers

//allows void pointers to point to any data type, from an integer value or a float to a string of characters.
//Limitation: the data pointed by them cannot be directly dereferenced-->we will allways have to cast the address in the void pointer to some other pointer type that points to a concrete data type before dereferencing it.


void increase(void *data, int psize)
{
    if(psize==sizeof(char))
    {
        char * pchar;
        pchar=(char*)data;
        ++(*pchar);
    }

    else if (psize==sizeof(int))
    {
        int *pint;
        pint=(int*)data;
        ++(*pint);

    }


}

//pointer to functions
//For passing a function as an argument to another function, since these cannot be passed dereferenced


int addition(int a, int b)
{
    return (a+b);

}

int substraction (int a, int b)
{
    return (a-b);
   
}

int operation (int x, int y, int (*functocall)(int, int))
{
    int g;
    g=(*functocall)(x,y);
    return (g);


}