#include<iostream>

using namespace std; 

int main()
{
    int arr[5] = {10,20,30,40,50};
    int *ptr = &arr[0];
int i=0;
   while(i<5)
   {
     cout<<"no. :"<<*(ptr+i)<<endl;
     i++;

   }
return 0;
}