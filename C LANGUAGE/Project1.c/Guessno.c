#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
    int num;int nguess=1;int guess;
    srand(time(0));
    num=rand()%99+1;
    // printf("%d",num);
do{
   printf("enter the no. :");
   scanf("%d",&guess);
   if(guess>num){
       printf("Enter less no. plz \n");
   }else if(guess<num){
       printf("Enter greater no. plz\n");       
   }else{
       printf("****U GUESS CORRECT IN %d chanses****\n",nguess);
   }nguess++;

}while(guess!=num);



return 0;
}