#include<stdio.h>
#include<stdlib.h>
int main(){
    int *ptr;
    ptr =(int *)malloc(4 * sizeof(int));
    for(int i=0;i<4;i++)
    {
        printf(" NO. :");
        scanf("%d",&ptr[i]);
    }
    for(int i=0;i<4;i++)
    {       
       printf("%d \t",ptr[i]);
    }
    ptr = realloc(ptr,2 * sizeof(int));
    for(int i=0;i<2;i++)
    {
        printf(" \n NO. :");
        scanf("%d",&ptr[i]);
    }
    for(int i=0;i<2;i++)
    {       
       printf("%d \t",ptr[i]);
    }

return 0;
}