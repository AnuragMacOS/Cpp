#include<iostream>
using namespace std;
/*
syntax for initialization list in constructor:

constructor(argument list): initialiazation -section
{
  assignment+ other code
}
*/
class test 
{
int a;
int b;
public:
 test (int i,int j):a(i),b(j)//-->runs
// test (int i,int j):a(i),b(i+j)-->runs
// test (int i,int j):a(i),b(2*j)-->runs
// test(int i,int j):a(i),b(a+j)-->runs
//  test (int i,int j):b(j),a(i+b)--> this wont runsuccessfully (garbage value aaucha) because a will be initialized first because a is declared first
                                    //the one which is declared first will get initialized first
 {
 cout<<"constructor executed"<<endl;
 cout<<"value of a is:"<<a<<endl;
 cout<<"value of b is:"<<b<<endl;
  }
};

int main()
{
  test t(6,9);

  return 0;
}