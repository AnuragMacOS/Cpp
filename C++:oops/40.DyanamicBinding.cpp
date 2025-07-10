//1)DynamicBinding-->late bidning or runtime binding
//2)function overriding is used to show dynamic binding;which means we create a fn inside derived class a newer version
// of function that already exists inside the base class(basically redefine hanchau)
// 3)esma virtal function ,inheritance use huncha
// 4)Dynamic Binding occurs when the compiler cannot 
//identify the complete information required for a function call at compile time

#include<iostream>
using namespace std;

class base
{
  public:
  int base_var;
  virtual void fun()
  {
    cout<<"base function"<<endl;
  }
};
class derived:public base
{
  public:
  int derived_var;
  virtual void fun()
  {
    cout<<"derived function"<<endl;
  }
};


int main()
{
  base *p=new derived();
  p->fun();
  return 0;
}
