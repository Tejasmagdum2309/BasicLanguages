#include<iostream>
using namespace std; 
typedef struct employe{
    int id;
    float salary;
    char favchar;
}EMP;


int main()
{
    // struct employe m1;
    EMP m1;
    m1.salary=23.2;
    m1.id=1;
    m1.favchar='c';
    
return 0;
}