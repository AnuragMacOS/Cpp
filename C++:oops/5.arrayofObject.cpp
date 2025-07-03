#include<iostream>
using namespace std;

class employee
{
 int id;
 int salary;
 public:
 void setId(void)
 {
  cout<<"enter the id of employee:";
  cin>>id;
 }
 void setSalary(void)
 {
  cout<<"enter salary:";
  cin>>salary;
 }
 void getId(void)
 {
  cout<<"the Id of this employee is"<<id<<endl;
  }

  void getSalary(void)
  {
    cout<<"the salary of this employee is:"<<salary<<endl;
  }

  
 
};
int main()
{
    //made array of object here
   employee facebook[4];
   for(int i=0;i<4;i++)
   {
    facebook[i].setId();
    facebook[i].setSalary();
    facebook[i].getId();
    facebook[i].getSalary();
   }
    return 0;
}

  /*   OR

  employee anurag,ter,dhiraj;
  anurag.setId();
  anurag.setSalary();
  anurag.getId();
  anurag.getSalary();

  ter.setId();
  ter.setSalary();
  ter.getId();
  ter.getSalary();
  */