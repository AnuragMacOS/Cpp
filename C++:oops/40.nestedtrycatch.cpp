#include<iostream>
using namespace std;


int main()
{
  //outer throw
  try
  {
    // inner catch throw
    try
      {
        throw " a character exception";
      }
      //inner catch
    catch(const char *e)
    {
       cout<<"character type in inner block-->"<<e<<endl;
       cout<<"rethrowing the exception"<<endl;
       throw;
    }
    
  }
  //outer catch
    catch(const char *e)
  {
    cout<<"character type in outer block-->"<<e<<endl;
  }
  catch(...)
  {
    cout<<"unexpected exception in outer block-->"<<endl;
  }
  
  
  return 0;
}