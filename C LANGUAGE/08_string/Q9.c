#include<stdio.h>

int main(){
    char st[]="tejas";
    char p;int i=0;int d=0;
    printf("enter the character : ");
    scanf("%c",&p);
    while(st[i]!='\0'){
        if(st[i]==p){
            printf("its there");
            d++;
            break;
        }i++;
    }
    if(d==0){
        printf("not present");
    }

return 0;
}