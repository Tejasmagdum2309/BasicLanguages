#include<stdio.h>

int main(){
    FILE * ptr;
    ptr = fopen("NUMBER.txt","r");
    // int num,num1,num2;
    // fscanf(ptr,"%d",&num);
    // fscanf(ptr,"%d",&num1);                   OORR
    // fscanf(ptr,"%d",&num2);
    // fclose(ptr);
    // printf("%d \t",num);
    // printf("%d \t",num1);
    // printf("%d \t",num2);

    int num;
    while(1)
    {
       num = fgetc(ptr);
       printf("%d",num);            // not work
       if(num == EOF)
       {
           break;
        }
    }

return 0;
}