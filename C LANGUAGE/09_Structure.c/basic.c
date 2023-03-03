#include<stdio.h>
#include<string.h>
struct employee{
       int id;
       float sallery;
       char name[12];
};

int main(){
    struct employee e1 ={10,55.34,"tejas"};
    // e1.id=10;
    // e1.sallery=55.45;
    // // e1.name="tejas mag";    --->>NOT WORK
    // strcpy(e1.name,"tejas");

    printf("id of e1 %d \n",e1.id);
    printf("sallary of e1 %f \n",e1.sallery);
    printf("name of e1 %s",e1.name);


return 0;
}