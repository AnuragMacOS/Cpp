#include<iostream>
 using namespace std;
 
template<class T>
T maxim(T a,T b)
{
  if(a>b){
    return a;
  }
  else{
    return b;
  }
}

int main()
{
 cout<<maxim(10,56)<<endl;
 cout<<maxim(10.9f,6.9f)<<endl;
}