#include<iostream>
using namespace std;

int main(){

float basic;
float percentAllow;
float percentDeduct;
float netSalary;

cout<<"Enter basic salary:";
cin>>basic;
cout<<"enter percent of allowance";
cin>>percentAllow;
cout<<"percentDeduction";
cin>>percentDeduct;

netSalary=basic+basic*percentAllow/100 - basic*percentDeduct/100;
cout<<"Net salary is:"<<netSalary<<endl;
}