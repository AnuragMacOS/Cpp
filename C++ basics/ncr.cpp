#include<iostream>
using namespace std;

int c(int n,int r)
{
  if(r==0 || n==r)
  {
    return 1;
  }
  {
    return c(n-1,r-1) + c(n-1,r);
  }
}
int main()
{
  int result;
  result=c(5,2);
  cout<<"combination are:"<<result<<endl;
  return 0;
}