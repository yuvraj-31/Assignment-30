/******************************************************************************
10. Write a C++ program to accept Nickname and throw an exception if it has greater than 8
characters or does contain a digit or special symbol or space.

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
        if(name.length()>8)        // for calculating length
         throw "name should not be greater than 8 characters";
         int i=0;
        while(name[i]!='\0') 
        {
            if(!((name[i]>=65 && name[i]<=90) || (name[i]>=97 && name[i]<=122)))
             throw "name contains any number or any special digit or any space";
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
