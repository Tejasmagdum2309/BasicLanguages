#include<stdio.h>
#include<stdlib.h>
int main(){
    int *aksak;
    // aksak = (int *)malloc(6 * sizeof(int));    
     aksak =(int *)calloc(6,sizeof(int));
    for(int i=0;i<6;i++)
    {
        printf("NO. :");
        scanf("%d",&aksak[i]);
    }
     for(int i=0;i<6;i++)
    {
        printf("%d \t",aksak[i]);
    }





return 0;
}