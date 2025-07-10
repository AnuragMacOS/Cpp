#include<iostream>
using namespace std;

int main()
{
int deno,nume,result;
cout<<"Enter numerator and denominator: "<<endl;
cin>>nume>>deno;

try
{
  if(deno==0)
  {
    throw deno;
  }
  result=nume/deno;
}
catch(int ex)
{
  cout<<"exception:Divide by zero not allowed"<<endl;
 
}
cout<<"the division is: "<< result<<endl;

return 0;
}