 #include<iostream>
 using namespace std;
 
 int sum(int x,int y){
  return x+y;

 }
  float sum(float x,float y){
  return x+y;
 }

 int sum(int x,int y,int z){
  return x+y+z;

 }

 int main(){
 cout<<sum(10,5)<<endl;
 cout<<sum(23.5f,6.9f)<<endl;// we should add "f" after each number because without 'f' 
                            //it is taken as double by deafault so we have to make it as float
 cout<<sum(10,5,34)<<endl;
 
 }