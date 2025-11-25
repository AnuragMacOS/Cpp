#include<iostream>
using namespace std;

int main(){
  
  float billamount;
  float discount=0.0;

  cout<<"Enter billamount:";
  cin>>billamount;

  if(billamount >= 500){
    discount= billamount* 20/100 ;
  }
  else if(billamount>=100 && billamount<500)
    discount=billamount * 10/100;

  cout<<"the bill amount is:"<<billamount<<endl;
  cout<<"the discount is:"<<discount<<endl;
  cout<<"the total amount is:"<< billamount-discount<<endl;
  return 0;


  }