// if 2ta diff class ma function definition same cha vaney,then when we multiple inherit it ,
// tyo inherit garne derived class lai garo/confusion huncha ki kun fuction liu vanera ::thats called "ambiguity"
// so obv we have to resolve this problem and this is called "Ambiguity resolution in inheritance"

// so lets create Ambiguity and then resolve it

#include <iostream>
using namespace std;

class base1
{

public:
  void greet()
  {
    cout << "how are you brother ?" << endl;
  }
};

class base2
{
public:
  void greet()
  {
    cout << "k cha halkhabar ?" << endl;
  }
};

class derived : public base1, public base2
{
  int a;
  // ambiguity resolution garey hamiley ya.
public:
  void greet()
  {
    base1::greet(); // we use scope resolution operator to resolve haii
  }
};

int main()
{
  // Ambiguity 1
  base1 base1obj;
  base2 base2obj;
  base1obj.greet();
  base2obj.greet();
  derived d;
  d.greet();

  return 0;
}
