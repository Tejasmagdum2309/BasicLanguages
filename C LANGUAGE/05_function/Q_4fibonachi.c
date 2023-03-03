#include<stdio.h>
int fib(int a){int d;
    if(a==1){
        return 0;
    }else if(a==2){
        return 1;
    }else{
        d=fib(a-1)+fib(a-2);
        return d;
    }
}
int main(){
    int z=11;
    fib(z);
    printf("%d",fib(z));
return 0;
}