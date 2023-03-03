#include<stdio.h>
int factorial(int a){
    if(a==0 || a==1){
          return 1;   
      }else{
          return a*factorial(a-1);
      }
}
int main(){
   int c=5;
   factorial(5);
   printf("%d",factorial(5));
return 0;
}