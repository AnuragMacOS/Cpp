#include<iostream>
using namespace std;

class point
{
  int x,y;
  public:
  point(int a,int b)
  {
    x=a;
    y=b; 
  }
  void displayPoint()
   {
    cout<<"the point is:"<<x<<","<<y<<endl;
   }

};
  int main()
{
  point p(6,9);
  p.displayPoint();
  point q(4,4);
  q.displayPoint();
  return 0;
}