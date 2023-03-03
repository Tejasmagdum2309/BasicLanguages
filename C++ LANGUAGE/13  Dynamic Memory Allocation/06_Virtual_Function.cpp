#include<iostream>
using namespace std; 
class Base{
    public :
    virtual void show(){
        cout<<"Base class show function executed "<<endl;
    }
};
class Derived : public Base{
    public :
    void show(){
        cout<<"Derived class show function executed "<<endl;
    }
};

int main()
{  Base * ptr;
   Base obj_B;
   Derived obj_D;
   ptr = &obj_D;
   ptr->show();
   

    
return 0;
}