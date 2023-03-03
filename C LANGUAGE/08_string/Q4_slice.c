#include<stdio.h>
void new(char *st,int m,int n){
    int i=0;
      while((m+i)<n){
         st[i]=st[m+i]; 
          i++;
      }st[i]='\0';


}


int main(){
    char st[]="tejasmagdum";
    new(st,2,6);
  printf("%s",st);


return 0;
}