#include<iostream>
using namespace std;

int main(){
  int i,n,count=0;
  cout<<"enter n:";
  cin>>n;

 for(i=1;i<=n;i++){
  if(n%i==0){
    count++;
  }
 }
 if(count==2){
  cout<<"the number is prime";
 }
 else{
  cout<<"the number is not a prime";
 }
  return 0;
}