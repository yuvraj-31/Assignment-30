/******************************************************************************
3. Write a C++ program to perform arithmetic operations on two numbers and throw an
exception if the dividend is zero or does not contain an operator.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    int a,b,c;
    cout<<"Enter the two operands: "<<endl;
    cin>>a>>b;
    cout<<"enter the operation that you want to perform"<<endl;
    char c1;
    cin>>c1;
    try{
    if(c1==43)
    {
        c=a+b;
        
    }
    else  if(c1==45)
    {
        c=a-b;
    }
    else if(c1==42)
    {
        c=a*b;
    }
    
      else if(c1==47)
    {  
        if(a==0)
        throw "your dividend cant be zero";
        if(b==0)
        throw "your divisor cant be zero";
        c=a/b;
    }
        else
          throw "plz input the right operator";
   }
       
       catch(const char *p)
       {
           cout<<p<<endl;
       }
       cout<<"result : "<<c<<endl;
    return 0;
}
