//1)static binding-->compile time binding or early binding
//2)function overloading is used for static binding; which means creating multiple fns with
//-same name but different parameters
//3)basically in static binding--> every information required to successfully run the program 
//is already available at compile time.
//4) normal function/program ley show garna sakincha stativ binding (no class and shit)


#include<iostream>
using namespace std;

   int sum(int a,int b)
   {
   return a+b;
   }
   int sum(int a,int b,int c)
   {
   return a+b+c;
   }

int main()
{
  cout<<"the sum is:"<<sum(9,9)<<endl;
  cout<<"the sum is:"<<sum(5,6,8)<<endl;
  return 0;
}