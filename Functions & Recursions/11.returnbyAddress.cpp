#include<iostream>
using namespace std;

int *fun()
{
  int *p=new int[5];  //memory created in heap
  for(int i=0;i<5;i++)
  {
    p[i]=5*i;
  }
  cout<<p<<endl;
  return p;
}
int main()
{
  int *q=fun(); // it is pointing at heap memor
    cout<<q<<endl;
  for(int i=0;i<5;i++){
    cout<<q[i]<<endl;
  }
}