#include<iostream>
using namespace std; 
class Y;
class X{
    int A;
    friend void swap(X & O1,Y & O2);
    public :
    void getinfo(int a){
        A=a;
    }
     void show(){
        cout<<A;
    }
};
class Y{
    int B;
    friend void swap(X & O1,Y & O2);
    public :
    void getinfo(int b){
        B=b;
    }
    void show(){
        cout<<B;
    }
};
void swap(X & O1,Y & O2){
    int temp = O1.A;
    O1.A=O2.B;
    O2.B=temp;
}
int main()
{X x;
x.getinfo(12);
Y y;
y.getinfo(55);

swap(x,y);
cout<<"new :"<<x.show();
 
  
return 0;
}