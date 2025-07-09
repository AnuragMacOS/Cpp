#include<iostream>
using namespace std;
//Pure virtual functions must be overridden by derived class.
class Car
{
public:
virtual void start()=0; //pure virtual fn
  //meaning base class Function ko body ko hamilai baal chaina kinaki ,j garey ni tyo over ride hune nai ho
  // so why bother writing so we declare as zero
  
  //cout<<"bmw started"<<endl; -->yo override hune nai thiyo so we removed thge body of base class
};

class Innova:public Car
{
public:
void start()
{
  cout<<"Innova Started"<<endl;
}
};
class Swift:public Car
{
public:
void start()
{
  cout<<"Swift Started"<<endl;
}
};

int main()
{
//Car c;
Car *p=new Innova();
p->start();
p=new Swift();
p->start();
}