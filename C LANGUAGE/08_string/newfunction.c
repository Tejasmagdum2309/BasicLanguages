#include<stdio.h>
#include<string.h>             //  new functions  1]strlen,2]strcpy,3]strcat,4]strcmp
int main(){
    char str[]="hello";
    char *str1="hello";     
    // strcpy(str,str1);
    // int len=strlen(str);
    // printf("%d",len);
    // printf("%s",str);

    int v= strcmp(str1,str);
     printf("%d",v);

return 0;
}