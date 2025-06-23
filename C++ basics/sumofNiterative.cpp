#include<iostream>
using namespace std;

int sum(int n)
{
  if(n==0)
  {
   return 0;
  }
  else
  {
    return n*(n+1)/2;
  }
}
int main()
{
  int result;
  result=sum(6);
  cout<<"sum is:"<<result<<endl;
  return 0;
}