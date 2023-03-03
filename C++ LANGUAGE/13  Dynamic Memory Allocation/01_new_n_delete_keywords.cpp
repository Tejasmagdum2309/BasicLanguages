#include<iostream>
using namespace std; 
 
int main()
{
    int a = 4;
    cout<<"a is :"<<a<<endl;
    int* p = new int(40);
    cout<<"p is :"<<*p<<endl;

    int* z=new int;
    *z = 12;
    cout<<*z<<endl;
    
    delete p;
    cout<<"p is :"<<*p<<endl;
    int* arr = new int[3];
    arr[0]=1;
    cout<<"arr is :"<<*arr;
    
 
return 0;
}