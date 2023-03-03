#include<iostream>
using namespace std; 
class Base{
    int num1;
    public :
    int num2;
    void getdata();
    int Getnum1();
    int Getnum2();
};
void Base :: getdata(){
    num1 = 10;
    num2 = 20;
} 
int Base :: Getnum1(){
    return num1;
}
int Base :: Getnum2(){
    return num2;
}

class Derived : public Base{
    int num3;
    public :
    void Process();
    void show();

};
void Derived ::Process(){
    num3 = num2 * Getnum1();
}
void Derived ::show(){
    cout<<"num1 is : "<<Getnum1()<<endl;
    cout<<"num2 is : "<<num2<<endl;
    cout<<"num3 is : "<<num3;

}
int main()
{
 Derived der;
 der.getdata();
 der.Process();
 der.show();

    
return 0;
}