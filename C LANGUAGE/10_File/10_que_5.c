#include<stdio.h>

int main(){
    FILE *ptr1;
    FILE *ptr2;
    ptr1 = fopen("number.txt","r");

    int c ;
    fscanf(ptr1,"%d",&c);
     
    ptr2 = fopen("DOUBLE_no.txt","w");
    fprintf(ptr2,"%d",2*c);


    fclose(ptr1);
    fclose(ptr2);
return 0;
}