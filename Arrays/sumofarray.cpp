#include<iostream>
using namespace std;

int main(){
  int A[7]={4,5,3,9,8,7,6};
  int sum=0;

for(int i=0;i<7;i++){
 sum=sum+A[i];
}
cout<<"The sum of array is:"<<sum<<endl;
return 0;
}
