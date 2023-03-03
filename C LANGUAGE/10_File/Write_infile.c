#include<stdio.h>

int main(){
    FILE *fp;
    int num=123;
    fp = fopen("naman.txt","w");
    fprintf(fp,"the no is %d \n",num);
    fprintf(fp,"NAMAN mader bul****",num);
    fclose(fp);

return 0;
}