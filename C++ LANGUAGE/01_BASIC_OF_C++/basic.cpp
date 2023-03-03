#include<iostream>

using namespace std; 
#include"mymy.h"
int z = 56;
int main()
{
    int a=5;
    int b=8;
    // cout<<"ENTER a :";
    // cin>>a;
    // cout<<"ENTER b :";
    // cin>>b;
    // cout<<"addition a+b =  "<<a+b;
    // 
    cout<<"a<b :"<<(a<b)<<endl;
    cout<<"a>b :"<<(a>b)<<endl;

     int z=12;
     cout<<"z is :"<<z<<endl;
     cout<<"z is :"<<::z<<endl;   // :: ---->> this is scope resolution operator
return 0;
}