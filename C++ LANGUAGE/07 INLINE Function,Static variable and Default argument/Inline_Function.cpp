#include<iostream>
using namespace std; 
int product(int a,int b)
{      
    return a*b;
}                   //function body is small then use inline functions
int main()          //not used when ther is --->> recurcive funtion
                    //                      --->> static variables
{
    int num1,num2;
    num1=4;num2=5;
    cout<<product(num1,num2)<<endl;
    cout<<product(num1,num2)<<endl;
    cout<<product(num1,num2)<<endl;
    cout<<product(num1,num2)<<endl;
    cout<<product(num1,num2)<<endl;
    cout<<product(num1,num2)<<endl;
 
return 0;
}