#include<iostream>
using namespace std;

class complex
{
  int a;
  int b;

  public:
    
    void setdata(int v1,int v2) //yesma pass vayo value
   {
    a=v1;
    b=v2;
   }
   void setdataBysum(complex x,complex y)
   {
    a= x.a + y.a;
    b= x.b + y.b;
   }
   void print()
   {
    cout<<"the complex number is:"<<a<<"+"<<b<<"i"<<endl;
   }
};

int main()
{
 complex c1,c2,c3;
 c1.setdata(2,3);
 c1.print();
 c2.setdata(3,4);
 c2.print();
 c3.setdataBysum(c1,c2);
 c3.print();
 return 0;

}