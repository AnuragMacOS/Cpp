#include<iostream>
using namespace std;

int main(){
  int A[7]={4,5,3,9,8,7,6};
  int max;
  max=A[0];

  for(int i=1;i<7;i++){
    if(A[i]>max){
      max=A[i];
    }
  }
  cout<<"Maximum number is:"<<max<<endl; 
  return 0;
}
