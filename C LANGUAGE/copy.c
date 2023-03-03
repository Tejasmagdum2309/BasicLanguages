#include<stdio.h>

int main(){
    FILE *ptr1,*ptr2;

    ptr1 = fopen("1.txt","r");
    ptr2 = fopen("2.txt","w");

    char c = fgetc(ptr1);
    while(c != EOF){
        fputc(c,ptr2);
     c = fgetc(ptr1);
    }

return 0;
}