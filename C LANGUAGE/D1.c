#include<stdio.h>

int main(){
    int a[]={1,1,2,2,3,3};
    int n = 0;
    int i =0;
    while(i<6)
    {
        int p = a[i];
        int j =0;
        while(p==a[j] )
        {
            n+=1;
            j++;
            i++;
        }
        j=0;n=0;
        printf("%d is %d times  \n",p,n);
        
    }
return 0;
}