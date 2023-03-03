#include<iostream>
using namespace std; 

float volume(int side){
    return side*side*side;
}
float volume(int h,int r){
    return 3.14*r*r*h;
}
float volume(int l,int b,int h){
    return l*b*h;
}

int main()
{
    cout<<volume(4)<<endl;
     cout<<volume(4,5,6)<<endl;
    cout<<volume(4,5)<<endl;
   
 
    
return 0;
}