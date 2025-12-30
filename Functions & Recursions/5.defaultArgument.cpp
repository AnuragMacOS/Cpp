#include<iostream>
 using namespace std;
 
 int sum(int a,int b,int c=0)
{
  return a+b+c;
}

 int main(){
  cout<<sum(10,59)<<endl;
  cout<<sum(12,34,69)<<endl;

 }