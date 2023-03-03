#include<stdio.h>

int main(){
    int j=4;
    int *ptr;
    ptr=&j;
    printf("%u\n",&j);
    printf("%d\n",ptr);
    
printf("%d",*ptr);
return 0;
}