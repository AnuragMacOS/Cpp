// fn overloading mean using same function twice.
//same int sum wala ley 2 ta type fn banaye and it is working as well
//same int volume wala 3 ta fn banaye and it is working as well
//this is called function overloading

#include<iostream>
using namespace std;

int sum(int a,int b)
{
 // cout<<"using function with 2 arguments"<<endl;
  return a+b;
}
int sum(int a,int b,int c)
{
   //cout<<"using function with 3 arguments"<<endl;
  return a+b+c;
}

//volume of cylinder
int volume(double r,double h)
{
  return (3.14*r*r*h);
}
// volume of cube
int volume(int a)
{
  return (a*a*a);
}
//volume of rectangular box
int volume(int l,int b,int h)
{
  return (l*b*h);
}

int main()
{
  cout<<"the sum is:"<<sum(9,9)<<endl;
  cout<<"the sum is:"<<sum(5,6,8)<<endl;
   cout<<"the volume of cylinder is " <<volume(3,6)<<endl;
  cout<<"the volume of cuboid is " <<volume(3,7,10)<<endl;
   cout<<"the volume of rectangular box is " <<volume(3,7,6)<<endl;
  return 0;
}