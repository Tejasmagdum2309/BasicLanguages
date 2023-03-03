#include<stdio.h>
struct vector{
    int x;
    int y;
};

int main(){
    struct vector v1;
    v1.x=4;
    v1.y=7;
   printf("%d and %d",v1.x,v1.y);
    
return 0;
}