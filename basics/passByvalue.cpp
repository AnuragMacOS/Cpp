/* it will only send the copy of the the origial number
so in th main function the real value will remain as it is
And when we print the value ,the original value will reamin as it is 
in the main function but the operation done on it on the function section
 will be evident
*/

#include<iostream>
using namespace std;

void IncreaseNum(int num)
{
  cout<<num<<endl;
  num=num+1;
  cout<<num<<endl;
  num=num+1;
  cout<<num<<endl;

}

int main()
{
  int num=67;
  IncreaseNum(num);
  cout<<num;
  return 0;
}
