#include<iostream>
using namespace std; 
class complex{
    int a,b;
    public :
    complex();
    complex(int p);
    complex(int p,int q);
    void show(){
        cout<<a<<" + "<<b<<"i"<<endl;
    }
};
complex ::complex(){
    a=0;
    b=0;
}
complex ::complex(int p){
    a=p;
    b=0;
}
complex ::complex(int p,int q){
    a=p;
    b=q;
}
int main()
{
    complex A;
    A.show();
    complex B(2);
    B.show();
    complex C = complex(2,4);
    C.show();
 

    
return 0;
}