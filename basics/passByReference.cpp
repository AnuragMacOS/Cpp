/*
pass by reference will send the original value
to the function above and
will change the value in the 
main function as well and print it 
*/
#include<iostream>
using namespace std;

void IncreaseNum(int &num)
{
  cout<<num<<endl;
  num=num+1;
  cout<<num<<endl;
  num=num+1;
  cout<<num<<endl;
}

int main()
{
  int num=67;
  IncreaseNum(num);
  cout<<num<<endl;
  return 0;

}