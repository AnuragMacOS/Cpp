#include<iostream>
 using namespace std;

int g=5; //Global variable

 void fun() //all other variable inside function are loacal variable
 {
  int a=10; //local VAR
  a++;
  g++;
  cout<<a<<" "<<g<<endl;
 }
 int main()
 {
   cout<<g<<endl;
   fun();
   cout<<g<<endl;
 }