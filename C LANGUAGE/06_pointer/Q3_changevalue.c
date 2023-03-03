#include<stdio.h>
int ch(int *ptr){
  int k;
  k=*ptr*10;
  *ptr=k;
   
}
int main(){
    int j=10;
   
    printf("val of j is %d\n",j);
    ch(&j);
    printf("val of j is %d",j);
return 0;
}