#include<iostream>
using namespace std;

int main(){

  int year;
  cout<<"enter the year:";
  cin>>year;

  if( year % 4 == 0){

     if( year % 100 ==0){

        if( year % 400==0){
        cout<<"it is a leap year"<<year;
      }

      else{
        cout<<"it is not a leap year"<<year;
      } 
     }
   else{
    cout<<"it is a leap year"<<year;
   }
  }
   else{
    cout<<"year is not a leap year"<<year;
   }

 }