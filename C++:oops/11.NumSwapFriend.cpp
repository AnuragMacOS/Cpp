#include<iostream>
using namespace std;

class c2;

class c1
{
  int value1;
 
  friend void exchange(c1 &, c2 &);
  public:
  void indata(int a)
  {
    value1=a;
  }
  void display(void)
  {
    cout<<value1<<endl;

  }
};

class c2
{
  int value2;

  friend void exchange(c1 &, c2 &);
  public:
  void indata(int b)
  {
    value2=b;
  }
  void display(void)
  {
    cout<<value2<<endl;

  }
};

void exchange(c1 &x, c2 &y)
{
  int temp=x.value1;
  x.value1=y.value2;
  y.value2=temp;

}

int main()
{
  c1 obj1;
  c2 obj2;

  obj1.indata(69);
  obj2.indata(96);
  exchange(obj1,obj2);
  cout<<"the value of c1 after exchanging becomes:";
  obj1.display();
  cout<<"the value of c2 after exchanging becomes:";
  obj2.display();

  return 0;
}