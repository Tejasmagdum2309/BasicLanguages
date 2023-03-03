#include<stdio.h>

int main(){
    int arr[10];int i;
    int *ptr=arr;
    for(i=0;i<10;i++){
        printf("no. is :");
        scanf("%d",ptr+i);
    }printf("%d",*(ptr+2));
return 0;
}