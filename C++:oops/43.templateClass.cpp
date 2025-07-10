#include<iostream>
using namespace std;

template<class T>
class show
{
  T a,b;
  public:
  show(T p, T q)
  {
    a=p;
    b=q;
  }
  void display()
  {
    cout<<"A : "<<a<<endl<<"B : "<<b<<endl;
  }
};
int main()
{
  show <int> obj(10,20);
    obj.display();

  return 0;
}