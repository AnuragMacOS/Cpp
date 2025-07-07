#include <iostream>
using namespace std;

class student
{
protected:
  int rollnum;

public:
  void set_rollnum(int r)
  {
    rollnum = r;
  }
  void get_rollnum(void)
  {
    cout << "the roll number is: " << rollnum << endl;
  }
};

class exam : public student
{
protected:
  float maths;
  float physics;

public:
  void set_marks(float m1, float m2)
  {
    maths = m1;
    physics = m2;
  }

  void get_marks(void)
  {
    cout << "the marks obtained in maths are: " << maths << endl;
    cout << "the marks obtained in physics are: " << physics << endl;
  }
};

class result : public exam // multileveol inheritance
{
  float percentage;

public:
  void display()
  {
    get_rollnum();
    get_marks();
    percentage = (maths + physics) / 2;
    cout << "your percentage is: " << percentage << "%" << endl;
  }
};
int main()
{
  result anurag;
  anurag.set_rollnum(541);
  anurag.set_marks(83.0, 91.0);
  anurag.display();

  return 0;
}