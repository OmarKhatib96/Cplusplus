#include <iostream>

using namespace std;

#include <vector>;
#include <algorithm>;


bool oddOrNot(int &x)
{

    if (x & 1)/*Efficient for large numbers*/
    {
        cout<<"Odd";
        return true;
    }

    else
    {
        cout <<"Even"; 

        return false;
    }
}


int fastMultiplicationBy2(int &x)
{

    x=x<<1; // Multiplication with 2
   // x=x>>1; Divide by 2
    return x;
}

//Want to copy elements of an array 1 to another array 2 without running a loop? See below.
void copyingArray(int array1[],int array2[],int &lenArray2)
{
    copy_n(array1,lenArray2,array2);

}


bool myFunction(int i, int j)
{
    return (i<j);
}

//to find a value in a sorted array(binary search)
bool findValue(int array[],int valueToFind,int lengthArray)
{
        
    vector<int>  v(array,array+lengthArray);
    //Using  default comparison

    sort(v.begin(),v.end());
    cout<<"Looking for "<<valueToFind<<"...";
    if (std::binary_search (v.begin(), v.end(), valueToFind))
    {

    
        cout<<"found!\n";
        return true;

    }

    else
    {
        cout<<"not found\n";
        return false;
    }

    //Using myfunction as comp:

    sort(v.begin(),v.end(),myFunction);
    cout<<"looking for "<<valueToFind<<"...";

    if (std::binary_search (v.begin(), v.end(), valueToFind, myFunction))
    {
        std::cout << "found!\n"; 
        return true;
    }

    else 
    {
        std::cout << "not found.\n";
        return false;
    }


}
int main(void){
    int x=1;
    oddOrNot(x);

    //Effiscient way to check if the number is odd or not
      
    return 0;
}