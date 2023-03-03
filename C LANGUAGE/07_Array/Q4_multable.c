#include<stdio.h>

int main(){
    int p,i;
    int mul[10];
    int *ptr=mul;
printf("multiplication table of :");
scanf("%d",&p);
for(i=0;i<10;i++){
    *(ptr+i)=p*(i+1);

    printf("%d \n",mul[i]);
    
}

return 0;
}