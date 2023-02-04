/******************************************************************************
7. Write a C++ program to accept a username if the username has less than 6 characters
or does contain any digit or special symbol.

*******************************************************************************/

#include <iostream>
#include<cstring>

using namespace std;

int main()
{
    string name;             // we are using string as numeric
    cout<<"Enter your name: ";
    getline(cin,name);
    try{
        if(name.length()<6)        // for calculating length
         throw "name should not be less than 6 characters";
         int i=0;
        while(name[i]!='\0') 
        {
            if(!((name[i]>=65 && name[i]<=90) || (name[i]>=97 && name[i]<=122) || (name[i]==32)))
             throw "name contains any number or any special digit";
           i++;
        }
    }
     catch(const char *p)
      {
          cout<<p<<endl;
      }
      cout<<name<<endl;
       
    return 0;
}
