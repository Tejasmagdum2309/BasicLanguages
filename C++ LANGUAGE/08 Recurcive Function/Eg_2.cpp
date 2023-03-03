#include<iostream>
using namespace std; 
int sci(int n)
{
     if(n<2){
         return 1;
     }
    return sci(n-2) + sci(n-1);

}
int main()
{
    int n;
    cin>>n;
    cout<<sci(n);
 

    
return 0;
}