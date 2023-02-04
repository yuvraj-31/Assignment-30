/******************************************************************************
2. Write a C++ program to demonstrate try, throw and catch statements.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    int a,b,c;
    a=5;
    b=1;
    try{ 
        if(b==0)
        throw 0;
        if(b==1)
        throw "you can't take 2nd value as 1 ";
          c=a/b;
       }
       catch(int x)
       {
           cout<<"your second value is: "<<x<<endl;
       }
       catch(const char *p)
       {
           cout<<p<<endl;
       }
    return 0;
}
