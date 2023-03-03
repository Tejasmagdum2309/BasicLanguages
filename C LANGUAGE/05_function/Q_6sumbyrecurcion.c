#include<stdio.h>
int sum(int a){
    int d;
    if(a==1){
        return 1;
    }else{
        d=a+sum(a-1);
        return d;
    }
}
int main(){
    int n=10;
    printf("%d",sum(n));
return 0;
}