
#include<iostream>
using namespace std;

class complex 
{
  int a,b;

  public:

 complex()
 {
  a=0;
  b=0;
 }
  complex(int x)
 {
  a=x;
  b=0;
 }
 complex(int x,int y) //constructor declaration (default constructor)
 {
   a=x;
   b=y;
 }

void printnumber()
{
  cout<<"your complex number is:"<<a<<" + "<<b<<"i"<<endl;
}

};

int main()
{
 complex c1;
 c1.printnumber();

 complex c2(6);
 c2.printnumber();

 complex c3(4,6);
 c1.printnumber();

 return 0;

}