#include<stdio.h>
#include<string.h>
typedef struct employe{
    int id;
    float salary;
    char name[12];
}emp;

int main(){
     emp e1;
    e1.id=100;
    e1.salary=55.32;
    strcpy(e1.name,"tejas");

    printf("%d \n",e1.id);
    printf("%f \n",e1.salary);
    printf("%s \n",e1.name);
return 0;
}