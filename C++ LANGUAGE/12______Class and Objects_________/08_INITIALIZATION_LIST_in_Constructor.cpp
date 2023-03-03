#include<iostream>
using namespace std; 
class A{
    private :
    int x,y;
    public :
   // A();
    A(int a,int b):y(x+b),x(a) 
    {
        cout<<"Value of Members are Initialize in Initialization Section"<<endl;
    }
    void print();
};
/*A ::A(){
    cout<<"Program is staring!!!!!!!!!"<<endl;
}*/
void A ::print(){
    cout<<"x is :"<<x<<endl;
    cout<<"y is :"<<y<<endl;
}
int main()
{
  A num(3,2);
  //num = A(3,2);
  num.print();

    
return 0;
}