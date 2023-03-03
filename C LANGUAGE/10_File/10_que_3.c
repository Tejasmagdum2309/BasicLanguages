#include<stdio.h>

int main(){
    FILE *pt;
    FILE *ptr;
    pt = fopen("myname.txt","r");
    ptr = fopen("myname2.txt","w");
    char c = fgetc(pt);
   
    while(c != EOF)
    {
        fprintf(ptr,"%c",c);
        c = fgetc(pt);
    }
     fclose(pt);
    
    


    
return 0;
}