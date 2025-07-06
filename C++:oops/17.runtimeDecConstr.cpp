#include<iostream>
using namespace std;

class bankdeposit
{
  int principle;
  int years;
  int interestRate;
  float returnValue;

  public:
  bankdeposit(){}
  bankdeposit(int p,int y,float r); // r can be a value like 0.04
  bankdeposit(int p,int y,int r);  // r is 4% here

  void displayAmt()
  {
    cout<<endl<<"principle amount was "<<principle
         <<".return value after "<<years<<"years  is "
         << returnValue <<endl;
  }
} ;
bankdeposit::bankdeposit(int p,int y,float r)
{
  principle=p;
  years=y;
  interestRate=r;
  returnValue=principle;
  for(int i=0;i<y;i++)
 {
  returnValue= returnValue * (1+r);
 }
}
bankdeposit::bankdeposit(int p,int y,int r)
{
  principle=p;
  years=y;
  interestRate=float(r)/100; //typecasted to float ,ajha point ma change gardiye 
  returnValue=principle;
  for(int i=0;i<y;i++)
 {
  returnValue=returnValue *(1+r);
 }
}


int main()
{ 
  bankdeposit b1,b2,b3;
  int p,y;
  float r;
  int R;
  cout<<"enter the value of p y and r"<<endl;
  cin>>p>>y>>r;
  b1=bankdeposit(p,y,r);
  b1.displayAmt();
  
  cout<<"enter the value of p y and R"<<endl;
  cin>>p>>y>>R;
  b1=bankdeposit(p,y,R);
  b1.displayAmt();
  return 0;

}