#include <iostream>
using namespace std;

// forward declaration of complex class

class complex; //telling that complex class cha yo code ma,we're gving assurity

class calculator
{
  public:
  
  int sumRealcomplex(complex ,complex);
  int sumImgcomplex(complex , complex);
//  declaration matra diye hamiley ya.
//yeslai define scope resolution lagayera tala define gardinchau.
// after defining complex class(kinaki a and b tesmai cha)
};

class complex
{
  int a,b;
// indiviually declaring fn as frnd
//friend int calculator::sumRealcomplex(complex,complex)
//friend int calculator::sumRealcomplex(complex,complex)

// declaring entire calculator class as friend
  friend class calculator;
  public:
  void setnumber(int n1, int n2)
  { 
    a = n1;
    b = n2;
  }
  void printnumber()
  {
    cout << "your number is:" << a << "+" << b << "i" << endl;
  }
};

int calculator:: sumRealcomplex(complex o1,complex o2)
{
  return (o1.a + o2.a);
}
int calculator:: sumImgcomplex(complex o1,complex o2)
{
  return (o1.b + o2.b);
}
int main()
{
  complex o1,o2;
  o1.setnumber(1,4);
  o2.setnumber(5,7);
  calculator calc;
  int result=calc.sumRealcomplex(o1,o2);
  cout<<"the sum of real part is:"<<result<<endl;
  int ans=calc.sumImgcomplex(o1,o2);
  cout<<"the sum of Imaginary part is:"<<ans<<endl;
  return 0;
}