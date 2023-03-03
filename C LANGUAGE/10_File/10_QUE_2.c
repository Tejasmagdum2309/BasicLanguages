#include<stdio.h>

int main(){
    int N;
    printf("ENTER THE NO. : ");
    scanf("%d",&N);
    FILE *ptr;
    ptr = fopen("MULTABLE.txt","w");
    
    for(int i=0;i<10;i++){
        fprintf(ptr,"%d X %d = %d \n",N,i+1,N*(i+1));
    }
    fclose(ptr);
return 0;
}