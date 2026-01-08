#include<iostream>
using namespace std;

int LinSearch(int A[],int n,int key)
{
  for(int i=0;i<n;i++)
  {
    if(key==A[i])
    {
      return i;
    }
  }
    return 0;
}

int main()
{
  int A[]={2,4,5,19,45,33,22};
  int k;
  cout<<"Enter the element to be searched :";
  cin>>k;
  int index=LinSearch(A,7,k);
  cout<<"Element found at index :"<<index<<endl;
}
