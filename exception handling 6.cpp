/******************************************************************************
6. Write a C++ program to accept area pin code and throw an exception if it does not
contain 6 digits.

*******************************************************************************/

#include <iostream>
#include<cstring>

using namespace std;

int main()
{
    string pin;             // we are using string as numeric
    cout<<"Enter your pincode: ";
    getline(cin,pin);
    try{
        if(pin.length()!=6)        // for calculating length
         throw "invalid pincode as it is not contains 6 dogits";
    }
     catch(const char *p)
      {
          cout<<p<<endl;
      }
      cout<<pin<<endl;
       
    return 0;
}
