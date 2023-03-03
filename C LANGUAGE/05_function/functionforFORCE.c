#include<stdio.h>
float force(int a){
    float g=9.81;
    float f=a*g;
    return f;
}
int main(){
    int m;
    printf("mass of object :");
    scanf("%d",&m);
    force(m);
    printf("ans : %f", force(m));
return 0;
}