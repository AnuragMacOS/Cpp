// main point of destructor is to frees the dynamically allocated memory

#include<iostream>
using namespace std;

//destructor never takes an argument nor does it return any value
 int cont=0; //count initiated with 0
class num
{
  public:
  num()
  {
    cont++; //count inc
    cout<<"this the time when constructor is called for object number"<<cont<<endl;
  }
  ~num()
  {
    cout<<"this is the time when my destructor is called for object number"<<cont<<endl;
    cont--;
  }
};
int main()
{
  cout<<"we are inside our main function"<<endl;
  cout<<"creating first object n1"<<endl;
  
  num n1; //object made so now constructor will be called
  {
    cout<<"entering this block"<<endl;
    cout<<"creating three more objects "<<endl;

    num n2,n3,n4; //object is made so constuctor is called
    cout<<"exiting this block"<<endl;

    // now there's no more object here,so it will go back destroy all of the constructor made.

  }
  cout<<"back to main"<<endl;
  //no more object calls ,so go back and destroy

  return 0;
}