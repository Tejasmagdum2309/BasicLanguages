#include<stdio.h>
void star(int a){
    int i;
if(a>0){ star(a-1);   
    for(i=0;i<2*a-1;i++){
        printf("*");
    }
    printf("\n");
    
}}
int main(){
    star(5);
   
return 0;
}