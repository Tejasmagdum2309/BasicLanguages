#include<stdio.h>
#include<stdlib.h>
int main(){
    int *ptr;
    ptr = (int *)calloc(4,sizeof(int));

    // for(int i=0;i<4;i++)
    // {                                    it returns 0.
    //    printf(" %d no. : \n",i+1);
    //    scanf("%d",&ptr[i]);
    // }
    for(int i=0;i<4;i++)
    {
       printf("%d \t",ptr[i]);
    }
return 0;
}