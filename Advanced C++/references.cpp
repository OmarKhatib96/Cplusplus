/* A reference is a type of C++ cariable that acts as an alias to another object or value
3 types: 
a-References to non-const values 
b-References to const values(called "const references")
c-C++11 added r-value references
*/

#include <iostream>
using namespace std;

int value{5};//normal integer
int &ref{value};


int main()
{

    int value{5};
    int &ref{value};
    value=6;
    ref=7;
    cout<<value<<"\n";
    ++ref;
    cout<<value<<"\n";

    return 0

}
