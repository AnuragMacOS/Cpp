#include<iostream>
using namespace std;

int main(){
  int m,n,r,rev=0;
  cout<<"Enter a number n:";
  cin>>n;
   m=n;

  while(n>0){
    r=n%10;
    n=n/10;
    rev=rev*10+r;
  }
  cout<<"the reversed number is:"<<rev<<endl;
  return 0;
}