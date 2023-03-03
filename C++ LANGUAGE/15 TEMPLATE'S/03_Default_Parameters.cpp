#include<iostream>
using namespace std; 
template <class t1=int,class t2=float,class t3=char>  //  we set here custom data types for class 
class tejas{
    t1 data1;
    t2 data2;
    t3 data3;
    public :
    tejas(t1 a,t2 b,t3 c){
        data1 =a;
        data2 =b;
        data3 =c;
    }
    void show(){
        cout<<data1<<endl;
        cout<<data2<<endl;
        cout<<data3<<endl;
    }
};


int main()
{
    tejas<> obj(1,2.3,'t');
    obj.show();

    cout<<"\n";
    tejas<float , char ,char> obj2(1.2,'c','b');
    obj2.show();
 

    
return 0;
}