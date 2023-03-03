#include<stdio.h>

int main(){
    int a[]={1,1,2,2,3,3,4};
    int n = 0;
    int i =0;
    int j =0;
    while(i<7)
    {
        int p = a[i];
        
        while(p==a[j] && i<7 )
        {
            n++;
            j++;
            i++;
        }
        
        printf("%d is %d times  \n",p,n);
        n=0;
    }
return 0;
}