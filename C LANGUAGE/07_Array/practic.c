#include<stdio.h>

int main(){
    int arr[5];int i;
    int *ptr=arr;

    for(i=0;i<5;i++){
        printf("enter %d student marks :",i+1);
        scanf("%d",&arr[i]);
        


         
    }
    for(i=0;i<5;i++){
         printf(" %d student marks is %d \n",i+1,arr[i]);
        
    }

return 0;
}