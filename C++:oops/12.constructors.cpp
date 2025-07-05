//from the begining hami setdata and getdata use gardai chau,
//but with the help of constructors,hami set and get fn banaunu pardaina

#include<iostream>
using namespace std;

class complex 
{
  int a,b;

  public:
  // creating a constructor
  /* Constructor is a special member function with the  
  same name as of the class.It is automatically invoked(called)
  whenever an object is created.
  */
 complex(void) //constructor declaration (default constructor)
 {
   a=10;
   b=20;
 }

void printnumber()
{
  cout<<"your complex number is:"<<a<<" + "<<b<<"i"<<endl;
}

};

int main()
{
 complex c1,c2;
 c1.printnumber(); 
 c2.printnumber();
 return 0;

}