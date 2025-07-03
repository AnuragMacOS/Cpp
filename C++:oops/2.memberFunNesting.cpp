#include<iostream>
#include<string>
using namespace std;

class binary
{ 
  string s;
  public:
  int i;
void read(void);   // not taking any input that's why void
void chk_binary(void);
void ones_compliment(void);
void display(void);
};


void binary::read(void)
{
  cout<<"enter a binary number:"<<endl;
  cin>>s;

}
void binary::chk_binary()
{
  for(i=0; i<=s.length(); i++)
  {
    if(s.at(0)!='0' && s.at(0)!='1')
   {
      cout<<"incorrect binary format"<<endl;
     exit(0);   
    }
 
  }
}
void binary :: ones_compliment(void)
{
  for(i=0; i<s.length() ; i++)
  {
    if(s.at(i) == '0')
    {
      s.at(i) = '1';
    }
    else
    {
      s.at(i)= '0';
    }
  }
}

void binary:: display(void)
{
  cout<<"displaying your binary number:"<<endl;
  for(i=0;i<s.length();i++)
  cout<<s.at(i);

}


int main()
{
  binary b;
  b.read();
  b.chk_binary();
  b.display();
  cout<<endl;
  b.ones_compliment();
  b.display();
  return 0;
}