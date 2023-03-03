#include<stdio.h>
void fun(int *i){
    printf("%u",i);
}
int main(){
    int i;
    printf("%u\n",&i);
    fun(&i);
return 0;
}