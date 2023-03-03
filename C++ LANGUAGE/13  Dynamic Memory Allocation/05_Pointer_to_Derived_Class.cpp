#include<iostream>
using namespace std; 
class Baseclass{
    public :
    int base_data;
    void show(){
        cout<<"Data is : "<<base_data;
    }
};
class Derivedclass : public Baseclass{
    public :
    int derived_data;
    void show(){
        cout<<"Data is : "<<base_data;
        cout<<"Data is : "<<derived_data;
    }

};

int main()
{
    Baseclass * ptr_b;
    Baseclass base_obj;
    Derivedclass derived_obj;
    ptr_b = &derived_obj;
    ptr_b->base_data=40;
    ptr_b->show();
    
    cout<<"endl";
    
    Derivedclass * ptr_d;
    ptr_d = &derived_obj;
    ptr_d->derived_data = 400;
    ptr_d->show();
 

    
return 0;
}