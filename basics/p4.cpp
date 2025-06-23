#include<iostream>
using namespace std;

int main()
{
  int year;
  cout<<"the year is:";
  cin>>year;

  if(year%400==0)
  {
    cout<<"its a leap year";
    
  }
  else if(year%100==0)
  {
    cout<<"its not a leap year";
  }
  else if(year%4==0)
  {
    cout<<"its a leap year";
  }
  else
  {
    cout<<"its not a leap year";
  }
  return 0;
}