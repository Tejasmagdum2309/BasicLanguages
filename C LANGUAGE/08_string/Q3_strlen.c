#include<stdio.h>
int length(char *str){
     int l=0;
     while (*str!='\0')
     {
        str++;
        l++;
     }
     return l;

}
int main(){
    char str[]="tejas";
    length(str);
 printf("by cmp %d",length(str));
return 0;
}