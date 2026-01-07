#include<iostream>
using namespace std;

void fun()
{
 static int s=69;
  s++;
  cout<<s<<endl;
}
int main(){
  fun(); 
  fun();
}