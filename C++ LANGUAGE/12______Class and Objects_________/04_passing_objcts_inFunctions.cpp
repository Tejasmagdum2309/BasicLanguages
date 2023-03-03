#include<iostream>
using namespace std; 
class MY{
    int a;
    int b;

    public :
    void getinfo(int v1,int v2)
    {
         a=v1;
         b=v2;
    }
    void setinfo(void){
        cout<<"The complex NO. is "<<a<<" + "<<b<<"i"<<endl;
    }
    void ADD(MY A,MY B)
    {
        a=A.a+B.a;
        b=A.b+B.b;
        // cout<<"NEW  :"<<a<<" + "<<b<<"i"<<endl;
    }
     
};
int main()
{    MY A,B,C;

    A.getinfo(2,4);
    A.setinfo();

    B.getinfo(3,6);
    B.setinfo();

    C.ADD(A,B);
    C.setinfo();
     

    
return 0;
}