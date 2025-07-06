#include<iostream>
using namespace std;

//base class
class employee
{
public:
int Id;

float salary;
employee(){};
employee(int id )
 {
 Id=id;
 salary=60.0;
 }
};

//syntax for inheritance: class(derived class name):(visibility mode{public, private})(base class name)

//#default visibility mode is: private.

/* 1)private visiblity mode ma: public members of the base class becomes 
 -private members of the derived class*/
/* 2)public visibility mode ma:public members of the base class becomes 
 -public members of the derived class*/
 // we cant inherit the private members of the base class
 
class programmer:public employee
{ 
  public:
 
  programmer(int id)
  {
  Id=id;
  }
   int languageCode = 9;
};
int main()
{
  employee anurag(1),ter(2);
  cout<<anurag.salary<<endl;
  cout<<ter.salary<<endl;
  programmer skillF(1);
  cout<<skillF.languageCode<<endl;
  return 0;
}