// #include<iostream>
// using namespace std;

// template<class T> //function template
// void show( T a, T b)
// {
//   cout<<"A : "<<a<<endl<<"B : "<<b<<endl;
// }

// int main()
// {
//   int p=10,q=20;
//   char m='x',n='z';
//   float s=10.45,f=23.98;
//   show(p,q);
//   show(m,n);
//   show(s,f);

//   return 0;
// }

#include<iostream>
using namespace std;


template<class T>
 T add(T x, T y)
{
  return x+y;
}

int main()
{

  cout<<"addition of 2 integers 3 and 4  is :"<< add<int>(3,4)<<endl;
  cout<<"addition of 2 integers 3 and 4  is :"<< add<float>(3.90,4.34)<<endl;
  return 0;
}
