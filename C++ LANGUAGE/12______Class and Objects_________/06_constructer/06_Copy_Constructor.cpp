#include<iostream>
using namespace std; 
class COPYY{
     int a;
     public :
     COPYY(){a=0;}
     COPYY(int num);
     void show(){
         cout<<"a is :"<<a<<endl;
         }

    COPYY NEW(COPYY &Q){
        a=Q.a;
    }
};
COPYY ::COPYY(int num){
    a=num;
}
int main()
{COPYY A,B(23);
A.show();
B.show();
COPYY V;
V.NEW(A);
V.show();


    
return 0;
}