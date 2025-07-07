#include<iostream>
using namespace std;
/*
student--> test
student-->sports
test-->result
sports-->result
*/

class student
{
  protected:
  int roll_no;
  public:
  void set_number(int a)
    {
      roll_no=a;
      }
    void print_number()
    {
      cout<<"your roll number is "<< roll_no<<endl;
    }

};

class test : virtual public student
{
  protected:
    float maths,physics;
  public:
     void set_marks(float m1,float m2)
     {
      maths=m1;
      physics=m2;

     }
     void print_marks()
     {
      cout<<"your maths result is:"<<maths<<endl;
      cout<<"your physics result is:"<<physics<<endl;
     }
};

class sports: virtual public student
{
  protected:
   float score;
   public:
   void set_score(float sc)
   {
    score=sc;
   }
   void print_score(void)
   {
    cout<<"your PT score is "<<score<<endl;
   }
};

class result: public test,public sports
{
 private:
 float total;
 public:
 void display(void)
 {
  total=maths+physics+score;
  print_number();
  print_marks();
  print_score();
  cout<<"your total score is :"<<total<<endl;

 }
};
int main()
{
  result anurag;
  anurag.set_number(541);
  anurag.set_marks(81.5,92.5);
  anurag.set_score(10);
  anurag.display();
  return 0;
}