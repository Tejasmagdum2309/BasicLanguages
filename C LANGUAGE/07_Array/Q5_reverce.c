#include<stdio.h>
void re(int *ptr,int p){
    int oo;int i;
    for(i=0;i<p/2;i++){
    // oo=*(ptr+i);
    // *(ptr+i)=*(ptr+p-i-1);  //we can use *ptr=ptr[0];
    // *(ptr+p-i-1)=oo;
oo=ptr[i];
ptr[i]=ptr[p-i-1];
ptr[p-i-1]=oo;

    }
}
int main(){
    int arr[5]={1,2,3,4,5};int i;
    for(i=0;i<5;i++){
        printf("%d \n",arr[i]);
    }
    re(arr,5);
    printf("**********************************************\n");
for(i=0;i<5;i++){
        printf("%d \n",arr[i]);
    }

return 0;
}