#include<iostream>
 using namespace std;

int x=19;
int main()
{
  int x=20;
  {
    int x=69;
    cout<<x<<endl;// access 69  
  }
  cout<<x<<endl;//access 20
  cout<<::x<<endl; //to access global variable 19
} 