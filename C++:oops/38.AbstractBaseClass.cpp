/*Abstract class
• Derived class can must override pure virtual function, otherwise it will also become a abstract
class.
• Pointer of abstract class can be created
• Pointer of abstract class can hold object of derived class
• Abstract classes are used for achieving polymorphism
*/

// BASICALLY IF A CLASS IS HAVING PURE VIRTUAL CLASS THEN
//-->IT IS CALLED ABSTRACT BASE CLASS

#include<iostream>
using namespace std;

class Base
{
public:
virtual void fun1()=0;
//cout<<"fun1 of base1 called"<<endl; --> this was removed and zero haley because jasari ni we'll override this in derived class
virtual void fun2()=0;
//cout<<"fun2 of base2 called"<<endl;--> this was removed and zero haley because jasari ni we'll override this in derived class
};

class Derived :public Base
{
public:
void fun1()
{
cout<<"fun1 of Derived 1 called"<<endl;
}
void fun2()
{
cout<<"fun2 of Derived 2 called"<<endl;
}
};
int main()
{
Derived d;
d.fun1();
d.fun2();
return 0;
}