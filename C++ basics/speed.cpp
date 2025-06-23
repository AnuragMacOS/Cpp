#include<iostream>
using namespace std;

int main(){
  int v,u,a;
  float speed;
  cout<<"Enter values:";
  cin>>v>>u>>a;
  speed=(v*v-u*u)/(a*a);
  cout<<"the speed is:"<<speed<<endl;
  return 0;
}