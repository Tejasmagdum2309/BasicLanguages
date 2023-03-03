#include<stdio.h>
#include<string.h>
struct empl{
    int id;
    float salary;
    char name[15];
};

int main(){
    struct empl e1,e2,e3;
    printf("entre the id of e1 :");
    scanf("%d",&e1.id);
    printf("entre the salary of e1 :");
    scanf("%f",&e1.salary);
    printf("entre the name of e1 :");
    scanf("%s",e1.name);
    

    printf("entre the id of e2 :");
    scanf("%d",&e2.id);
    printf("entre the salary of e2 :");
    scanf("%f",&e2.salary);
    printf("entre the name of e2 :");
    scanf("%s",e2.name);

    printf("entre the id of e3 :");
    scanf("%d",&e3.id);
    printf("entre the salary of e3 :");
    scanf("%f",&e3.salary);
    printf("entre the name of e3 :");
    scanf("%s",e3.name);



return 0;
}