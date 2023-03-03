#include<stdio.h>

int main(){
    char c;
    FILE *ptr;
    ptr = fopen("GETC.txt","r");
    // char c=fgetc(ptr);
    
    // while(c!=EOF)
    // {                                       OR
    //     printf("%c",c);
    //     c=fgetc(ptr);
    // }

    while(1)
    {
       c = fgetc(ptr);
       printf("%c",c);
       if(c == EOF)
       {
           break;
       }
       
    }


return 0;
}