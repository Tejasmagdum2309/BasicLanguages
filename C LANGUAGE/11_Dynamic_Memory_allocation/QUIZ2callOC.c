#include<stdio.h>
#include<stdlib.h>
int main(){
    int N;
    printf("enter no. you want in array : ");
    scanf("%d",&N);
    int *ptr;

    ptr = (int *)calloc(N,sizeof(int));

    for(int i=0;i<N;i++)
    {  
        printf("NO  :")  ;                              
       scanf("%d",&ptr[i]);
    }
    for(int i=0;i<N;i++)
    {
       printf("%d \t",ptr[i]);
    }
return 0;
}