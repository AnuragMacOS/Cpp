#include<iostream>
using namespace std;

void swap(int *a,int *b)
{
  int temp;
  temp=*a;
  *a=*b;
  *b=temp;

}
int main()
{
  int x=19,y=69;
  swap(&x,&y);
  cout<<x<<" "<<y<<endl;
}