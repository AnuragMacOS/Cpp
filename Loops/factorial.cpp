#include<iostream>
using namespace std;

int main(){
  int i,n,factorial=1;
  cout<<"enter n:";
  cin>>n;

  for(i=1;i<=n;i++){
    factorial=factorial*i;
  }
  cout<<"the factorial of " << n << "is:"<<factorial;
  return 0;
}
