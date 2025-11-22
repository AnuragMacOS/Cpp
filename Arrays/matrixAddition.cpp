#include<iostream>
using namespace std;

int main(){
 
 int A[3][4]={3,4,8,2,5,7,3,5,3,2,6,8};
 int B[3][4]={2,4,3,7,9,1,5,2,9,8,6,5};
 int C[3][4];

 for(int i=0;i<3;i++){

   for(int j=0;j<4;j++){
      C[i][j]=A[i][j]+B[i][j];
   }
 }
  for(int i=0;i<3;i++){

   for(int j=0;j<4;j++){
      cout<<C[i][j]<<" ";
   }
   cout<<endl; 
 }
return 0;
}