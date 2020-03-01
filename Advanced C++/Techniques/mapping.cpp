#include <iostream>

using namespace std;

template <int v>

struct Int2Type
{

    enum { value=v};
};

/*Int2Type generates a distinct type for each distinct constant integral value passed.-->Int2Type<0> is different from 
Int2Type<1> and so on*/
