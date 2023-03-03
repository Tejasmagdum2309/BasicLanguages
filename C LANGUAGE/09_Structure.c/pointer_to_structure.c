#include<stdio.h>
#include<string.h>
struct employe{
    int id;
    float salary;
    char name[12];
};
int main(){
    struct employe e1;
    struct employe *ptr;
    ptr=&e1;

    // (*ptr).id=101;
   
// or we can use ptr->id
    ptr->id=101;
    printf("%d",e1.id);
return 0;
}