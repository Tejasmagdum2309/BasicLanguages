#include<stdio.h>
void m(int *mul,int num,int n){
    int i=0;
for(i=0;i<n;i++){
    // *(mul+i)=num*(i+1);   
    mul[i]=num*(i+1);
}
for(i=0;i<n;i++){
    printf("%d \n",*(mul+i));  }
}
int main(){
    int mul[3][10];int num;int n;
m(mul[0],3,10);
m(mul[1],4,10);
m(mul[2],5,10);

return 0;
}