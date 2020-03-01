#include "boost/scoped_ptr.hpp"//used to ensure the proper deletion of a dynamically allocated object
#include <string>
#include <iostream>


int main()
{
    {
    boost::scoped_ptr<std::string>p(new std::string ("Use scoped_ptr often"));

    // print the value of the string
    if(p)
        std::cout<<*p<<"'\n";

    //Get the size of the string
    size_t i=p->size();
    //Assign a new value to the string
    *p="Acts just like a pointer";
    }//p is destroyed here, and deletes the std::string


}
//auto_ptr in the std library is not enough for the elements of STL, this is why boost smart pointer is good
//1- scoped_ptr,intrusive_ptr,weak_ptr,shared_ptr
//shared_ptr can be used for the std library



//scoped_ptr cannot be assigned or copied, he never accidentally surrenders the ownship of the ressource to which it points


