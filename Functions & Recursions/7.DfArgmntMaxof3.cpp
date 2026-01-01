//default argument

#include<iostream>
 using namespace std;
 
 int maxim(int a=0,int b=0,int c=0) 
 // if you want to fill default argument 
 //fill it from RHS.
{
 if(a>b && a>c){
  return a;
 }
 else if(b>a && b>c){
  return b;
 }
 else{
  return c;
 }
}

 int main(){
  cout<<maxim()<<endl;
  cout<<maxim(10)<<endl;
  cout<<maxim(10,12)<<endl;
  cout<<maxim(10,12,69)<<endl;

 }