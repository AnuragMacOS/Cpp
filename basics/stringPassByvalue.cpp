#include<iostream>
using namespace std;

void ChangeString(string s)
{
  cout<<s<<endl;
   s[3] = 'o';
  cout<<s<<endl;
  
}

int main()
{
  string s="Anurag";
  ChangeString(s);
  cout<<s<<endl;
  return 0;
}
