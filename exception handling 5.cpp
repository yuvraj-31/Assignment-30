/******************************************************************************
5. Write a C++ program to accept a mobile number and throw an exception if it does not
contain 10 digits.

*******************************************************************************/

#include <iostream>
#include<cstring>

using namespace std;

int main()
{
    string mob;             // we are using string as numeric
    cout<<"Enter your mobile number: ";
    getline(cin,mob);
    try{
        if(mob.length()!=10)        // for calculating length
         throw "invalid number as it is not contains 10 dogits";
    }
     catch(const char *p)
      {
          cout<<p<<endl;
      }
      cout<<mob<<endl;
       
    return 0;
}
