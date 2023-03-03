#include<iostream>
using namespace std; 
class complex{
      int a;
      int b;
      friend complex sum(complex o1,complex o2);
      public :
      void getinfo(int n1,int n2){
          a=n1;
          b=n2;
      }
      void printinfo(){
          cout<<"COMPLEX NO.  : "<<a<<" + "<<b<<"i"<<endl;
      }
};
complex sum(complex o1,complex o2)
{
     complex o3;
    //  o3.getinfo((o1.a+o2.a),(o2.b+o1.b));
    o3.a= o1.a+o2.a;
    o3.b= o1.b+o2.b;
     return o3;
  
}

int main()
{
    complex A,B;
    A.getinfo(2,4);
    B.getinfo(6,8);
    A.printinfo();
    B.printinfo();
 
    complex s = sum(A,B);
    s.printinfo();

    
return 0;
}