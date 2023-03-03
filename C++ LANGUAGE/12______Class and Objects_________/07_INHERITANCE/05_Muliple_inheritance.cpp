#include<iostream>
using namespace std; 
class Base1{
    protected :
    int num1;
    public :
    void getnum1(int );
};
void Base1 ::getnum1(int a){
    num1 = a;
}

class Base2{
     protected :
    int num2;
    public :
    void getnum2(int );
};
void Base2 ::getnum2(int a){
    num2 = a;
} 

class Derived : public Base1,public Base2
{  protected :
   int z,x,c,v;
   public :
   void show(){
       cout<<"NUM1 IS :"<<num1<<endl;
       cout<<"NUM2 IS :"<<num2<<endl;
       cout<<"SUM IS :"<<num1+num2;

   }

};
int main()
{  Derived no;
no.getnum1(12);
no.getnum2(20);
no.show();
 

    
return 0;
}