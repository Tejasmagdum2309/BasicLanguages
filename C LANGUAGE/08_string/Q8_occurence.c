#include<stdio.h>
int occ(char *st,char p){
int i=0;int c=0;
while(st[i]!='\0'){
     if(st[i]==p){
          c++;
     }i++;

}
return c;

}
int main(){
    char st[]="teejj";
    occ(st,'j');
    printf("%d",occ(st,'j'));
return 0;
}