#include<stdio.h>

int main(){
    FILE *ptr;
    ptr = fopen("GETC.txt","r");
    char c=fgetc(ptr) ;
    // fscanf(ptr,"%c",&c);
    // printf("%c",c);
    printf("%c",c);        
    c=fgetc(ptr);
    printf("%c",c);
    printf("%c",c);
    printf("%c",c);
    printf("%c",c);


return 0;
}