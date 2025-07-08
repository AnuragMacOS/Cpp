#include<iostream>
using namespace std;

class A
{
  int a;
  public:
     void setdata(int a)
     {
      //yo program lai run garey hamiley without using
      //without using this pointer and a ko garbage value aayo

      //now using this pointer to rectify that issue
      //this is a keyword which is a pointer that points to the object 
      //invokes member function
      this->a=a;
     }
     void getdata(void)
     {
      cout<<"the value of a is :"<<a<<endl;
     }
};

int main()
{
  A a;
  a.setdata(9);
  a.getdata();
  return 0;
}