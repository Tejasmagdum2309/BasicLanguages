#include<iostream>
using namespace std; 
union employe{
    int id;
    char fav;         //   --->> they share memory with each other
    float salary;
};
int main()
{  union employe m1;
m1.salary=100;
m1.id=1;
cout<<m1.id;      // at one time only one i/p can be given
    
return 0;
}