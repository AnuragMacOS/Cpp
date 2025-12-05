#include<iostream>
using namespace std;

class Rectangle
{
  public:
  int length;
  int breadth;
  
  int area()
  {
    return length*breadth;
  }
  int perimeter()
  {
    return 2*(length+breadth);
  }
}; 

int main()
{
  Rectangle r1,r2;
  r1.length=10;
  r2.breadth=9;
  cout<<r1.area()<<endl;
  cout<<r1.perimeter()<<endl;
  r2.length=6;
  r2.breadth=9;
  cout<<r2.area()<<endl;
  cout<<r2.perimeter()<<endl;
}