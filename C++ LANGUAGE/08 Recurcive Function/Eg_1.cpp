#include<iostream>
using namespace std; 
int factprial(int N){
       if(N<=1){
           return 1;
       }
       return N * factprial(N-1);
}
int main()
{   
    int num;
    cout<<"Enter no  :";
    cin>>num;
    cout<<factprial(num);

 

    
return 0;
}