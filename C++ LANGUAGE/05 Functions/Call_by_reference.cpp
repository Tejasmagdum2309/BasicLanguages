#include<iostream>
using namespace std; 
void swap(int *a,int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
void newswap(int &a,int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

int main()
{
    int num1,num2;
    num1=4,num2=15;
    cout<<num1<<endl<<num2<<endl;
    // swap(&num1,&num2);
    newswap(num1,num2);
    cout<<num1<<endl<<num2;
 

    
return 0;
}