#include<iostream>
using namespace std; 
//Default variable use in functions whose default value we write 
//but we can over write it also
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