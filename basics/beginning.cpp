#include<iostream>
using namespace std;

int main()
{
  int age;
  cout<<"the age of the person is:";
  cin>>age;
  
  
  if(age>=18)
  {
    cout<<"the person is an adult"<<endl;
  }
  else{
    cout<<"the person is not an adult"<<endl;
  }
  return 0;
}