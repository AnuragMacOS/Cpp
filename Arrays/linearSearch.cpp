#include<iostream>
using namespace std;

int main(){
  int A[10],n=10,i,key;
  cout<<"Enter numbers : ";

  for( i=0;i<n;i++){
    cin>>A[i];
  }
  cout<<"Enter key : ";
  cin>>key;

  for( i=0 ; i<n ; i++){
    if(A[i]==key){
      cout<<"found at: "<<i<<endl;
      return 0; 
  }
  }
  cout<<"not found:"<<endl;
  return 0;
}