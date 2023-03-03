#include<stdio.h>
void in(char *st){ int i=0;                     //we can do inscription and discription
     while(st[i]!='\0'){ 
      st[i]=st[i]-1;
      i++;}
    printf("%c",st[i]='\0');
}
int main(){
    char st[]="ufkbt";
    in(st);
    printf("%s",st);
return 0;
}