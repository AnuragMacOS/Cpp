#include<iostream>
using namespace std;

class complex
{
  int real,img;
  public:
   void getdata()
   {
    cout<<"the real part is:"<<real<<endl;
    cout<<"the imaginary part is:"<<img<<endl;
   }
   void setdata(int a,int b)
   {
    real=a;
    img=b;
   }
};

int main()
{
  // complex c1;
  // complex*ptr=&c1; 
  // // c1.setdata(1,55); yo euta tarika ho and there's another way as well;"pointer to objct" as well
  // // c1.getdata();

  // //here ->pointer ley public member object access gardiye hamiley
  // (*ptr).setdata(1,55);
  // (*ptr).getdata();

// OR


  complex *ptr=new complex;
  // (*ptr).setdata(1,55); is exactly same as
  ptr->setdata(1,55);
  // (*ptr).getdata(); is as good as
  ptr->getdata();

  return 0;
}