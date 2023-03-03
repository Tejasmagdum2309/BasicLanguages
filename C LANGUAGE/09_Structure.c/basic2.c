#include<stdio.h>
#include<string.h>
struct employe{
     int id;
     float salary;
     char name[15];
};

int main(){
    struct employe facebook[10];
    facebook[0].id=101;
    facebook[0].salary=55.24;
    strcpy(facebook[0].name,"tejas");


return 0;
}