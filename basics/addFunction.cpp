// #include<iostream>
// using namespace std;

// int add(int num1,int num2)
// {
//   int num3=num1+num2;
//   return num3;
// } 
// int main()
// {
//   int num1,num2,result;
//   // cout<<"the value of num1 and num2 is:";
//   cin>>num1>>num2;
//   result=add(num1,num2);
//   cout<<result<<endl;
  
//   return 0;
// }

     //  OR (by using void)

 #include<iostream>
using namespace std;

void add(int num1,int num2)
{
  int num3=num1+num2;
  cout<<num3;
} 
int main()
{
  int num1,num2;
  // cout<<"the value of num1 and num2 is:";
  cin>>num1>>num2;
  add(num1,num2);
  return 0;
}    

