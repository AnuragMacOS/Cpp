#include<iostream>
using namespace std;

class shop
{
  int itemId[100];
  int itemPrice[100];
  int counter;

  public:
  void initcounter(void) //since it wont return anything
  {
    counter=0;
  }
  void setPrice(void);
  void getPrice(void);

};

void shop :: setPrice(void)
{
 cout<<"enter Id of your item no_"<<counter+1<<endl; //+1 so that it starts from 1
 cin>>itemId[counter];
  cout<<"enter price of your item"<<endl;
 cin>>itemPrice[counter];
 counter++; // now it is itemId[1] & itemprice[1] and likewise

}

void shop:: getPrice(void)
{
  for (int i=0; i<counter;i++)
  {
    cout<<"The price of item with ID"<<itemId[i]<<" is "<<itemPrice[i]<<endl;
  }

}


int main()
{
  shop dukaan;
  dukaan.initcounter();
  dukaan.setPrice();
  dukaan.setPrice();
  dukaan.setPrice();
  dukaan.getPrice();
  return 0;
}