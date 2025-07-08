#include <iostream>
using namespace std;

class shopItem
{
  int Id;
  float price;

public:
  void setdata(int a, float b)
  {
    Id = a;
    price = b;
  }
  void getdata(void)
  {
    cout << "code of this item is: " << Id << endl;
    cout << "price of this item is: " << price << endl;
  }
};

int main()
{
  int size = 3;
  // int *ptr = &size;
  // int *ptr = new int[34]; // dynamically 34 integer store garney jati memory 
                             //hamilai alocate garera dey vaneko compiler lai

   //1.general store item
   //2.veggies item
   //3.hardware item                    
  shopItem *ptr = new shopItem[size];//hamro basically 3ta object shop banyo with respective memory size
  shopItem *ptrTemp=ptr;
  int p,q;
  for(int i=0;i<size;i++)
  {
    cout<<"Enter Id and price of the item"<<i+1<<":"<<endl;
    cin>>p>>q;
    // *(ptr).setdata(p,q);
    ptr->setdata(p,q);
    ptr++;
  }
  for(int i=0;i < size;i++)
  {
    cout<<"Item number: "<<i+1<<endl;
    ptrTemp->getdata();
    ptrTemp++;
  }

  return 0;
}