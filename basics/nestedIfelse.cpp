#include<iostream>
using namespace std;

int main()
{
  int age;
  cout<<"the age of the person is:";
  cin>>age;
  
  if(age<18)
  {
    cout<<"not eligible for job"<<endl;
  }
  else if(age<=57)
  {
    cout<<"eligible for job";
    if(age>=55){
    cout<<" retirement soon"<<endl;
  }
}
if(age>57){
  cout<<"retirement time"<<endl;
}
  return 0;
}