#include<iostream>
using namespace std; 
template <class T1,class T2>
class my{
    T1 data1;
    T2 data2;
    public :
    my(T1 a,T2 b){
        data1 = a;
        data2 = b;
    }

    void show(){
        cout<<data1<<"\n";
        cout<<data2;
    }
};

int main()
{
//    my<int ,char> obj(3,'t');
//    obj.show();

    my<char ,float> obj('d',4.56);
    obj.show();

    
return 0;
}