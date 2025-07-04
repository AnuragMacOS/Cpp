#include<iostream>
using namespace std;

class Y;

class X
{
  int data;
  public:
  void setValue(int value)
  {
    data=value; 
  }
  friend void add (X,Y); //void add is friend of class x ,which takes the objects X and Y as parameters.

};
class Y
{
  int num;
  public:
  void setValue(int value)
  {
    num=value; 
  }

  friend void add (X,Y); //void add is friend of class Y ,which takes X and Y object as parameters.

};

void add(X o1, Y o2)
{
  int result=o1.data + o2.num;
  cout<<"adding data of x and y objects gives me "<<result<<endl;
}



int main()
{
  X a1;
  a1.setValue(3);

  Y b1;
  b1.setValue(5);

  add(a1, b1);
  return 0;
}