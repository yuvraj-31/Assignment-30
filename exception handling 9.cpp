/******************************************************************************
9. Write a C++ program to accept Gmail id only and throw an exception if the id does not
contain @ and gmail.com.

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
    char str[10]="gmail.com";
    char temp[10];
    int len=name.length();
    cout<<len;
    int i;
    try{
      for(i=0;name[i]!='\0';i++)
      {
          if(name[i]==64)
           break;
      }
    
          if(i==len)
          throw "plz insert the @ symbol in your email address";
          int k=0;
      for(int j=len-8;name[j]!='\0';j++)
      {
          temp[k]=name[j];
          k++;
      }
      if(strcmp(str,temp)!=0)
       throw "Invalid.. please enter or recorrect the gmail.com";
    }
       catch(const char *p)
       {
           cout<<p<<endl;
       }
       cout<<name<<endl;
       
    return 0;
}
