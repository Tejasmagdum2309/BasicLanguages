#include<stdio.h>

int main(){
  FILE *ptr;
  ptr=fopen("number.txt","r");
  int num1,num2;
  if(ptr == NULL)
  {printf("this file not exist");
  }else{
      fscanf(ptr,"%d ",&num1);
      fscanf(ptr,"%d ",&num2);

  fclose(ptr);

       printf("the no is : %d \n",num1);
       printf("the no is : %d",num2);
  }
    
return 0;
}