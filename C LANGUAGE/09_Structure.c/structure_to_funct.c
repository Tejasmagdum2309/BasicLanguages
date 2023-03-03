#include<stdio.h>
#include<string.h>

struct employe{
     int id;
     float salary;
     char name[12];
};

void s(struct employe  *e){
     printf("%d \n",(*e).id);
     printf("%f \n",(*e).salary);
     printf("%s \n",(*e).name);

(*e).id=109;
};

int main(){
   struct employe e1;
   struct employe *ptr;
   ptr=&e1;
   (*ptr).id=101;
   ptr->salary=55.4;
   strcpy(ptr->name,"tejas");

   s(&e1);

    printf("%d",ptr->id);

return 0;
}