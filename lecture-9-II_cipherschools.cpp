#include<iostream>
using namespace std;

int sum(int a,int b)
{
   int c;
   c = a+b;


   a=10;
   b=11;


   return c;
}

int main()
{
   int a,b;

   a=3;
   b=5;

   int c;
   cout<<a<<"  "<<b<<endl;   //these values are before I call the function "sum"

   c = sum(a,b);
   // int sum(int a, int b)  //int a --->a, int b ----> b

   cout<<c<<endl;
   cout<<a<<"  "<<b<<endl;   // these values of a,b are after I call the function "sum"


   return 0;
}
