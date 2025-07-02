#include<iostream>
using namespace std;

class employee
{
  private:
  int a,b,c;
  public:
  int d,e;

   void setdata(int a1,int b1,int c1);  //Declaration
   void getdata() {                //prints data
    cout<<"the value of a is:"<<a<<endl;
    cout<<"the value of a is:"<<b<<endl;
    cout<<"the value of c is:"<<c<<endl;
    cout<<"the value of d is:"<<d<<endl;
    cout<<"the value of e is:"<<e<<endl;
   }
 };
  void employee:: setdata(int a1,int b1,int c1)
  {
    a=a1;
    b=b1;
    c=c1;
  }

int main()
{
  employee Anurag;
  // Anurag.a=23; -> shows error because a is private member 
                    //and u can't change it without member function
  Anurag.d=34;
  Anurag.e=21;
  Anurag.setdata(1,2,4);
  Anurag.getdata();
  return 0;
}