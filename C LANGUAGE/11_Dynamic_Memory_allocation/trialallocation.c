#include<stdio.h>
#include<stdlib.h>
int main(){
    int *ptr;
        ptr = (int *)malloc(4 * sizeof(int));

for(int i=0;i<4;i++){
    scanf("%d \n",&ptr[i]);
}
for(int i=0;i<4;i++){
    printf("%d \t",ptr[i]);
}
return 0;
}
