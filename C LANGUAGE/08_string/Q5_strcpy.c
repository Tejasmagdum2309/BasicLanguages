#include<stdio.h>
void fun(char *st,char *st1){
    int i=0;
    while(i<10){
        
        st[i]=st1[i];
          i++;
    }st[i]='\0';

}
int main(){
    char st[]="tej";
    char st1[]="magdum";
    fun(st,st1);
    printf("%s",st);
return 0;
}