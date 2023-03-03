#include<stdio.h>

int main(){
    int i=5;
    int *ptr;
    ptr=&i;
    int **ptr_ptr;
    ptr_ptr=&ptr;

    printf("val of i : %d\n",**ptr_ptr);
  printf("val of i : %u\n",&i); 
   printf("val of i : %u\n",&ptr);
 printf("val of i : %u\n",&ptr_ptr);
  

return 0;
}