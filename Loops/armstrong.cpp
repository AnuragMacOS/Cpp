#include<iostream>
using namespace std;

int main(){
  int m,n,r,sum=0;
  cout<<"Enter n:";
  cin>>n;
   m=n;

  while(n>0){
    r=n%10;
    n=n/10;
    sum=sum+r*r*r;
  }
  if(m==sum){
    cout<<"the number is armstrong";
  }
  else{
    cout<<"the number is not an armstrong";
  }
  return 0;
}