#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;




int main(void)
{
    pair<int,int> p;
    vector<int> v;
    p=make_pair(3,4);
    v.push_back(4);
    v.push_back(5);
    //or much better:
    p={3,4};
    v={4,5};

    //you can use '#' sign to get exact name of an argument passed to a macro
    #define what_is(x) cerr <<#x<<"is"<<x<<endl;
    int a_variable=376;
    what_is(a_variable);
    //lambda functions
    auto f=[](int a ,int b)->int{return a+b;};
    cout<<f(1,2);//prints "3"
    
    regex email_pattern(R"(^[a-zA-Z0-9_.+-]+@[a-zA-Z0-9-]+\.[a-zA-Z0-9-.]+$)"); // This email pattern is not totally correct! It's correct for most emails.

    string valid_mail("khatibomar3@gmail.com"),invalid_email("hello world");

    if(regex_match(valid_mail,email_pattern))
}