#include<stdio.h>

typedef struct vector{
    int x;
    int y;
}t;
// void sumv(t *ptr,t *ptr1,t *ptr3){
//       (*ptr3).x=(*ptr).x+(*ptr1).x;
//       (*ptr3).y =(*ptr).y+(*ptr1).y;
// };

t sumv(t v3,t v4){
       t result;
       result.x = v3.x+v4.x;
       result.y = v3.y+v4.y;
      return result;
}

int main(){
    struct vector v1,v2,v3;
    v1.x=4;
    v1.y=5;
    v2.x=4;
    v2.y=5;
   t sum= sumv(v1,v2);
    printf("%d and %d",sum.x,sum.y);
    
    // printf("%d is x AND %d is y",v3.x,v3.y);
return 0;
}