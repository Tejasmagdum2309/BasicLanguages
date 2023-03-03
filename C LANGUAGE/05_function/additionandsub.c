#include<stdio.h>
int fun(int a,int b,int *ptr,int *pt){
    *ptr=a+b;
    *pt=a*b;
}

int main(){
   int a,b,sum,pr;
   fun(4,3,&sum,&pr);
   printf("ADDITION IS :%d \n",sum);
    printf("ADDITION IS :%d \n",pr);
return 0;
}