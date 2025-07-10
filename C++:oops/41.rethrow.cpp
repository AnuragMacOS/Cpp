#include<iostream>
using namespace std;

void divide(int x,int y)
{
  cout<<"inside function"<<endl;

try
{
  if(y==0)
  {
  throw y;
  }
  else{
  cout<<"division ="<<x/y<<endl;
  }
}
catch(int ex)
{
  cout<<"caught integer exception inside the function"<<endl;
  //rethrow makes the exception to be thrown from inner catch block to outer catch block
  throw;  //-->rethrow (no argument is required for rethrowing)

}

cout<<"end of function"<<endl;
}

int main()
{
  cout<<"inside main"<<endl;
  try
  {
    divide(12,6);
    divide(12,0);
  }
  catch(int ex)
  {
   cout<<"caught interger exception inside the main function";
  }
  cout<<"end of main"<<endl;

  return 0;
}