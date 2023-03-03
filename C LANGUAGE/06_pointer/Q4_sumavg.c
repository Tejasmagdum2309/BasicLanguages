#include<stdio.h>
void savg(int a,int b,int *sum,float *avg){
     *sum=a+b;
     *avg=(float)a/b;

}
int main(){
    int a,b,sum;
    float avg;
     printf("enter a :");
    scanf("%d",&a);
     printf("enter b :");
    scanf("%d",&b);
savg(a,b,&sum,&avg);
printf("sum and avg is %d and %f",sum,avg);

return 0;
}