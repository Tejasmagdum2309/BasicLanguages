#include<stdio.h>
#include<string.h>
typedef struct employe{
    int id;
    float salary;
    char name[10];
}emp;

int main(){
    emp e1;
    // e1.id=12;
    // e1.salary=22.323;
    emp *ptr;
    ptr=&e1;
    ptr->id=12;
    printf("%d \n",ptr->id);
    strcpy(ptr->name,"tejas");
    printf("%s",ptr->name);
return 0;
}