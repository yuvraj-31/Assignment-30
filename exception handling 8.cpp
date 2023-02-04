/******************************************************************************
8. Write a C++ program to accept a password and throw an exception if the password has
less than 6 characters or does not contain a digit or does not contain any special
character or does not contain any capital letter.

*******************************************************************************/

#include <iostream>
#include<cstring>

using namespace std;

int main()
{
    string password;             // we are using string as numeric
    cout<<"Enter your name: ";
    getline(cin,password);
    try{
        if(password.length()<6)        // for calculating length
         throw "password should not be less than 6 characters";
         int i=0,count1=0,count2=0,count3=0;
        while(password[i]!='\0') 
        {
            if(password[i]>=65 && password[i]<=90)
              count1++;
           else if(password[i]>=48 && password[i]<=57)
             count2++;
            else if(!(password[i]>=97 && password[i]<=122))
            count3++;
          i++;    
        }
        if(count1==0)
        throw "Invalid!..password does not contain a capital letter";
        if(count2==0)
         throw "Invalid!..password does not contain any digit ";
         if(count3==0)
         throw "Invalid!..password does not contain any special character ";
        }
     catch(const char *p)
      {
          cout<<p<<endl;
      }
      cout<<password<<endl;
       
    return 0;
}
