#include<iostream>
using namespace std; 
int interest(int income,float increase=1.04)
{
    return income*increase;
}
int main()
{
 int salary,increase;
 cin>>salary;
 cout<<interest(salary,1.08);

    
return 0;
}