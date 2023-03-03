#include<stdio.h>

int main(){
    FILE *ptr;
    ptr = fopen("new.txt","w");
    fputc('T',ptr);
    fputc('e',ptr);
    fputc('j',ptr);
    fputc('a',ptr);
    fputc('s',ptr);
    fclose(ptr);
return 0;
}