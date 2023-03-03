#include<iostream>
using namespace std; 
class Base1{
    protected :
    int A,B;
    public :
    void show(){
        cout<<"HI BEROOOOOOOOOOOO"<<endl;
    }
};
class Base2{
    protected :
    int X,Y;
    public :
    void show(){
        cout<<"BYE BEROOOOOOOOOOO"<<endl;
    }
};
class Derived :public Base1,public Base2{
    protected :
    int d;
    public :
    void show(){
        Base2 ::show();
    }
};

class E{
    protected :
    int z;
    public :
    void see(){
        cout<<"YESSSSSSS"<<endl;
    }
};
class F :public E{
    int e;
    public :
  /*  void see(){
        cout<<"NOOOOOOOO"<<endl;
    }
    */
};
int main()
{ 
    /*
1.  First Ambiguity
    Base1 B1;
    B1.show();
    Base2 B2;
    B2.show();
    
    Derived Der;
    Der.show();
   */
 // 2.  Second Ambiguity
E nw;
nw.see();
F b;
b.see();
    
return 0;
}