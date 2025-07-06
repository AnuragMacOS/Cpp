#include<iostream>
using namespace std;



class number
{
  int a;
  public:
      number(){
        a=0;
      } //default constructor banaunu parch pahile before invoking parameterized const
      number(int num)
      {
        a=num;
      }
      //when no copy constructor is found,compiler supplies its own copy constructor
      //copy constructor
      
      number(number &obj) // isko reference doo apne aap ka
      {
        cout<<"copy constructor called!!!"<<endl;
        a = obj.a;
      }
      void display()
      {
        cout<<"the number for this object is:"<<a<<endl;

      }
};

//if we want z1 to look same as z or x or y
// we'll use copy constructor
int main()
{
  number x,y,z(69),z2;
  x.display();
  y.display();
  z.display();
  number z1(z);// copy constructor invoked
  z1.display();
  z2=z; // copy constructor not invoked,because z2 was already made,so we cant just assign directly
  number z3=z;//invoked ,because hamiley yeslai yei line ma banaye
  return 0;
}