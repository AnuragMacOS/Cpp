#include <iostream>
using namespace std;
//  multiple inheritance syntax

// class derived:visibility-mode base1,visibility-mode base2
//  {
//    class body of class"Derived"
//  };
//  /

class base1
{
protected:
  int base1int;

public:
  void set_base1(int a)
  {
    base1int = a;
  }
};

class base2
{
protected:
  int base2int;

public:
  void set_base2(int b)
  {
    base2int = b;
  }
};

class derived : public base1,public base2
{
  public:
       void show()
       {
        cout<<"the value of base1 is: "<<base1int<<endl;
        cout<<"the value of base2 is: "<<base2int<<endl;
        cout<<"the sum of these values is: "<<base1int + base2int<<endl;
       }
};
 
int main()
{
  derived anurag;

  anurag.set_base1(21);
  anurag.set_base2(69);
  anurag.show();
  return 0;
}
