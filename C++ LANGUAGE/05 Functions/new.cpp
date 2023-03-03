#include<iostream>
using namespace std; 

int & newswap(int &a,int &b)
{
    int temp = a;
    
    return a;
}

int main()
{
    int num1,num2;
    num1=4,num2=15;
    
    newswap(num1,num2)=500;
    cout<<num1<<endl<<num2;
    
return 0;
}