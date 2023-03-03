#include<iostream>
#include<iomanip>
using namespace std; 

int main()
{
    const int a=4;
    cout<<a<<endl;
    // a=9;                   ---->>>not aloud give varial another number 
    // cout<<a<<endl;
    
// newmanipulator ------>>>>>  setw();

   int z=4,b=12,c=14546;
   cout<<z<<endl;
   cout<<b<<endl;
   cout<<c<<endl;

   cout<<setw(5)<<z<<endl;
   cout<<setw(5)<<b<<endl;
   cout<<setw(5)<<c<<endl;
   





return 0;
}