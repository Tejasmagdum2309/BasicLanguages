#include<iostream>
using namespace std; 
class base{
     protected :
     int a;
     private :
     int b;
     public :
     int z;
     void Binfo(){
         b=12;
     }
     void showB(){
         cout<<"B is : "<<b;
     }
};
class derived : public base{

};
int main()
{
 derived der;
 der.z=14;
 der.Binfo();
 der.showB();
    
return 0;
}