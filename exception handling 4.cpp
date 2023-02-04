/******************************************************************************
4. Write a C++ program to accept an email address and throw an exception if it does not
contain @ symbol.

*******************************************************************************/

#include <iostream>
#include<cstring>

using namespace std;

int main()
{
    // char str[30];
    string name;
    cout<<"Enter the email address: ";
    // cin.getline(str,30);
    getline(cin,name);
    int len=name.length()
    int i;
      for(i=0;name[i]!='\0';i++)
      {
          if(name[i]==64)
           break;
      }
      try{
          if(i==len)
          throw "plz insert the @ symbol in your email address";
      }
       catch(const char *p)
       {
           cout<<p<<endl;
       }
       cout<<name<<endl;
       
    return 0;
}
