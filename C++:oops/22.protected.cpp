#include<iostream>
using namespace std;

class base
{
protected:  //same as private bus it is inheritable
  int a;
private:
  int b;


};

class derived: protected base
{

};

int main()
{
  base b;
  derived d;
  //cout<<d.a; will not work since a is proteted in both base as well as derived class
  return 0;
}