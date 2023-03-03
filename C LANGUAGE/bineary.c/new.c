#include<stdio.h>
int main(){
int arr[10]={1,2,3,4,5,6,7,8,9,10};
int low=0;
int high=9;
int guess;
printf("guess no. :");
scanf("%d",&guess);
while(low<=high){
int mid=(low+high)/2;
if(arr[mid]<guess){
     low=mid++;  
}
else if(arr[mid]>guess){
     high=mid--;   
}
else if(arr[mid]==guess){
    printf("no. on %d place ",mid);
    break;
}
}
    return 0;
}