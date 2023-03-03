#include<iostream>
using namespace std; 
class complex{
    int a,b;
    public :
    complex(int A,int B=9){
        a=A;
        b=B;
    }
    void show();

};
void complex :: show(){ 
    cout<<a<<" + "<<b<<"i"<<endl;
}
int main()
{
 complex Q(2,5);
 Q.show();

    
return 0;
}