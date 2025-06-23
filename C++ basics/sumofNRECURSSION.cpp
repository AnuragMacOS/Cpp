#include<iostream>
using namespace std;


int sum(int n)
{
  if (n==0)
  {
    return 0;
  }
  else
  {
    return sum(n-1)+n;
  }
}

int main()
{
  int result;
  result=sum(6);
  cout<<"sum is:"<<result<<endl;
  return 0;
}