#include<iostream>
using namespace std; 
class A{
    protected :
    int A1;
    public :
    A();
    A(int );
    void Print_A();

};
A ::A(){
    cout<<"yooooooo"<<endl;
}
A ::A(int a){
    A1 = a;
    cout<<"A Constructor Executed "<<endl;
}
void A :: Print_A(){
    cout<<"A1 : "<<A1<<endl;
}

class B :public A{
    protected :
    int B1;
    public :
    B();
    B(int a,int b):A(a)
   {
    B1 = b;
    cout<<"B Constructor Executed "<<endl;
}
    void Print_B();

};
B ::B(){
    cout<<"BaaaaaaaaaGAAAAAAAAA!!!!!"<<endl;
}

void B :: Print_B(){
    cout<<"B1 : "<<B1<<endl;
}

class C : public B{
     private :
     int Z,total;
     public :
     C(){}
     C(int a,int b,int c) : B(a,b){
         Z = c;
         cout<<"Last costrtor Executed !!!!!!!!"<<endl;
         total=Z+A1+B1;
         cout<<"Total : "<<total<<endl;
     }
};
int main()
{
  C naman;
  naman = C(1,2,3);
  naman.Print_A();
  naman.Print_B();

    
return 0;
}