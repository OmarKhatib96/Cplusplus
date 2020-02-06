#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;



//Using auto: automatically determines the type of the variable
int main(void)
{
    auto i=17;

    vector<int > v;
    v.push_back(5);
    v.push_back(10);
    v.push_back(13);
    //We can use this method

    for (vector<int>::iterator it = v.begin(); it != v.end(); ++it) 
        cout << *it << ' ';
    // or this one

    for(auto n:v)
    cout<<n<<" ";

//To swap two things, we use the already built-in swap function

    int c=3;
    int d=4;
    swap(c,d); // Now c=4 and d=3



//Normally we use 
    v.push_back(1);
//This one is much faster

    v.emplace_back(2);

}

