#include<stdio.h>

struct employees
{
    int salary;
    char name[15];
};

int main()
{
    FILE *pt;
    pt = fopen("EMPLOYEES_INFO.txt","w");

    struct employees E1;
    printf("NAME of EMPLOYE : ");
    scanf("%s",&E1.name);
    printf("SALARY :");
    scanf("%d",&E1.salary);

    fprintf(pt,"NAME :%s \n",E1.name);
    fprintf(pt,"THE SALARY OF EMPLOYE %d",E1.salary);
    


return 0;
}