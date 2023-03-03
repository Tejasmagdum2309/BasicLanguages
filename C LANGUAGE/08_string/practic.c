#include<stdio.h>

int main(){
    char str[30];
    printf("name :");
    // scanf("%s",str);          
    gets(str);
    // printf(" your name is %s",str);
    puts(str);
return 0;
}