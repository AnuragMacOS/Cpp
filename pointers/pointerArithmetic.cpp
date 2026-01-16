  #include<iostream>
using namespace std;

int main() {

int A[5]={2,4,6,8,10};
int*p=A; 
cout<<*p<<endl;
p++;
cout<<*p<<endl;
p--;
cout<<*p<<endl;
p=p+3;
cout<<*p<<endl;

//using for loop
for(int i=0;i<5;i++){
  cout<<A[i]<<endl;
}

return 0;
}