#include<stdio.h>

typedef struct complex_no{
    int real;
    int img;
}com;
void what(com *c,int n){
     for(int i=0;i<n;i++){
         printf("real val.: %d\n",c[i].real);
         printf("imagineary val.: %d\n",c[i].img);
     };

};



int main(){ 

       int n=0;
       com c[5];
       for(int i=0;i<5;i++){
          printf("enter the %d real value  :",i+1);
          scanf("%d",&c[i].real);

          printf("enter the %d imagineary value  :",i+1);
          scanf("%d",&c[i].img);
          n++;
       };

        what(c,n);
  


return 0;
}