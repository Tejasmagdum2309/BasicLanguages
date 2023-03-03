#include<stdio.h>
float avg(int a,int b,int c){
    float z=(float)(a+b+c)/3;
    return z;
}
int main(){
    avg(4,6,3);
    printf("%f",avg(4,6,3));
return 0;
}