#include<iostream>
 using namespace std;
 
 void swap(int a,int b)
{
  cout<<a<<" "<<b<<endl;
  int temp;
  temp=a;
  a=b;
  b=temp;
  cout<<a<<" "<<b<<endl;
}

 int main()
 {
  int x=10,y=49;
  swap(x,y);
  cout<<x<<" "<<y<<endl;

 }

 //thus by call by value the actual parameter doesnot change  
 //only the value of formal parameter changes in the function.