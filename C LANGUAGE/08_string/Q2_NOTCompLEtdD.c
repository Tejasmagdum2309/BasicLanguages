#include<stdio.h>
#include<string.h>
int main(){
     char str1[10];int i=0;
     char str2[10];char c;
     printf("str1 is :");
    //  scanf("%s",str1);
    gets(str1);
    //  printf("%s",str1);
printf("charater by character waords :");
while(c!='\n'){
    fflush(stdin);
 scanf("%c",&c);
 str2[i]=c;
 i++;
}
str2[i-1]='\0';
printf("str1 is %s \n",str1);
printf("str2 is %s\n",str2);
printf("so %d",strcmp(str1,str2));


return 0;
}