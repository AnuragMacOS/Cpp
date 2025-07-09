#include<iostream>
using namespace std;

class baseclass
{
  public:
   int var_base=1;
   virtual void display() // yadi baseclass pointer derived class ko member object 
   //lai point gardai cha vaney then derivedclass ko display Function garnu not baseclass ko.

   // as we can see in terminal--> derivedclass display run hunla cha
   {
    cout<<"1 diplaying base class variable var_base"
         <<var_base<<endl;
   }

};
class derivedclass:public baseclass
{
  public:
   int var_derived=2;
   void display()
   {
    cout<<"2 diplaying base class variable var_base"
         <<var_base<<endl;
    cout<<"2 diplaying base class variable var_base"
        <<var_derived<<endl;
   }
 };
   



int main()
{
  baseclass * base_class_pointer;
  baseclass obj_base;
  derivedclass obj_derived;

  base_class_pointer =&obj_derived;
  base_class_pointer->display();


  return 0;
}