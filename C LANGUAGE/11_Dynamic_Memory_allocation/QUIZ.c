#include<stdio.h>
#include<stdlib.h>
int main(){
    float *ptr;
    ptr =(float *)malloc(5 * sizeof(float));

    for(int i=0;i<5;i++)
    {
        printf("ENTER the %d element : ",i+1);
        scanf("%f",&ptr[i]);
    }
    for(int i=0;i<5;i++)
    {
        printf("--%f-- \t",ptr[i]);
        
    }

return 0;
}