#include<iostream>
using namespace std; 

template <class T1,class T2>
float yo(T1 a,T2 b){
    float d = (a+b)/2;
    return d;
}

template <class t>
void swapp(t &a,t &b){
    t temp = a;
    a=b;
    b=temp;
}

int main()
{    
    float e = yo(4.2,6.4);
    cout<<e<<"\n";

    int x=6,y=8;
    swapp(x,y);
    cout<<x<<"\n"<<y;

    
return 0;
}