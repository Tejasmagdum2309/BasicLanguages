#include<stdio.h>
#include<string.h>
typedef struct Bank_holder_info{
    int id,age;
    char name[30];
    float Balance;
    int opened_bank_account_at;
}banka;


int main(){
    banka person[2];
    for(int i=0;i<2;i++){
        printf("id of %d person :",i+1);
        scanf("%d",&person[i].id);
        printf("name of %d person :",i+1);
        scanf("%s",&person[i].name); 

        // gets(person[i].name);
};

     for(int i=0;i<2;i++){
        printf("id of %d person is : %d \n",i+1,person[i].id);
         printf("name of %d person is %s \n",i+1,person[i].name);

     };



return 0;
}