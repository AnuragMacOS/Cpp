 #include<iostream>
 using namespace std;
 
 int maxim(int a,int b,int c)
{
  
  if(a>b && a>c){
  return a;
  }
  else if(b>a && b>c){
  return b;
   }
  else{
    return c;
  }
}

  int main()
  {
    int x=5,y=4,z=9,r;
    r=maxim(x,y,z);
    cout<<"The maximum numberis:"<< r<<endl;
    return 0;
  }