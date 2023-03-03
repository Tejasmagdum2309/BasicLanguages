#include<iostream>
using namespace std; 
class A{
    int a;
    public :
    A & getdata(int a){
        this->a=a;
        return (*this);
    }
    void show(){
        cout<<"a is : "<<a<<endl;
    }
};
int main()
{
   A point;
   point.getdata(4).show();
   point.show();

    
return 0;
}