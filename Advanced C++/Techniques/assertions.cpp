/*suppose we're developing a function for safe casting. We want to cast from one type to another,
while making sure that information is preserved;larger types must not be cast to smaller types*/
#include <iostream>
#include <assert.h>    
using namespace std;

#define STATIC_CHECK(expr){ char unnamed[(expr)?1:0];}






template<class To,class From>

To safe_reinterpret_cast(From from)
 {
     //assert(sizeof(From)<=sizeof(To));
     STATIC_CHECK(sizeof(From)<=sizeof(To))
     return reinterpret_cast<To>(from);
 }


 //calling this funtion
 int main(){

     int i=5;
     char *p =safe_reinterpret_cast<char*>(i);//ok understood
 }