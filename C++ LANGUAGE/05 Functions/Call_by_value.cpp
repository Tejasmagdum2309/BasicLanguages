#include<iostream>
using namespace std; 
//Functions --->> CAll by value

int sum(int a,int b)
{
    int c =a+b;
    return c;
}


int main()
{
int num1,num2;
cout<<"Enter num1 :";
cin>>num1;
cout<<"Enter num2 :";
cin>>num2;
sum(num1,num2);
cout<<"Addition is : "<<sum(num1,num2);



      
return 0;
}