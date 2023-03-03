#include<iostream>
#include<time.h>
using namespace std; 

int main()
{   
   int salary;
   cout<<"ENTER SALARY :";
   cin>>salary;
   if(salary>1 && salary<10000){
       cout<<"very nice";
   }
   else if(salary>=10000 && salary<20000)
   {
      cout<<"nice";
   }
   else if(salary>=20000){
       cout<<"fu** u";
   }

return 0;
}