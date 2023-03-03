#include<iostream>
using namespace std; 
class Base{
    int id;
    float salary;
    public :
    int ID;
    float SALARY;
    Base(){}
    Base(int a){
        id = a;
    }
    void show(){
        cout<<"id is : "<<id<<endl;
    }
};
class Derived : public Base{
    int NEW;
    char CHAT;
    public :
    Derived(int b){
        ID = b;
    }
    void show1(){
        cout<<"ID is : "<<ID<<endl;
    }
};
int main()
{
 Base A(1);
 A.show();
 Derived B(2);
 B.show1();
 cout<<B.ID;
    
return 0;
}