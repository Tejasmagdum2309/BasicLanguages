#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int RPS(comp,you)
{
    if(comp == you)
    {
        return 0;
    }

    if(comp =='r' && you =='p' )
    {
        return 1;
    }
    else if(comp == 'p' && you == 'r')
    {
        return 2;
    }

    if(comp =='p' && you =='s' )
    {
        return 1;
    }
    else if(comp == 's' && you == 'p')
    {
        return 2;
    }
    if(comp =='s' && you =='r' )
    {
        return 1;
    }
    else if(comp == 'r' && you == 's')
    {
        return 2;
    }
}


int main(){
    char you,comp;  int N;
    srand(time(0));
    N = rand()%100+1;
  //  printf("N is %d \n",N);
    if(0<=N && N<=33)
    {
       comp ='r';
    }
    else if(34<=N && N<67)
    {
        comp = 'p';
    }
    else if(67<=N && N<=100)
    {
        comp ='s';
    }
    printf("ENTER Rock=r,Paper=p,and Scissor=s \n");
    printf("CHOOSE  :   ");
    scanf("%c",&you);
    int ans =RPS(comp,you);
    if(ans == 0)
    {
        printf("Tie");
    }
    else if(ans == 1)
    {
        printf("YOU win");
    }
    else if(ans == 2)
    {
        printf("you lose");
    }


return 0;
}