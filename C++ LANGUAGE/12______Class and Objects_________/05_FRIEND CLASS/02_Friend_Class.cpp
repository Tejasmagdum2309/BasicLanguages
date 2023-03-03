#include<iostream>
using namespace std; 
class complex;

class calculator
{
    public :
    int calrealno(complex O1,complex O2);
    
     int calcompno(complex O1,complex O2);
    

};
class complex
{
    private :
    int a;
    int b;
    friend int calculator :: calrealno(complex O1,complex O2);
    friend int calculator :: calcompno(complex O1,complex O2);

    public :
    void getinfo(int A,int B)
    {
       a=A;
       b=B;
    }
    void setinfo()
    {
        cout<<a<<" + "<<b<<"i";
    }
};
int calculator :: calrealno(complex O1,complex O2)
    {
        int j=O1.a+O2.a;
        return j;
    }
int calculator :: calcompno(complex O1,complex O2)
    {
        int j=O1.b+O2.b;
        return j;
    }
int main()
{
    complex X,Y;
    X.getinfo(2,4);
    Y.getinfo(4,7);
    calculator cal;
    int ansreal = cal.calrealno(X,Y);
    cout<<ansreal<<endl;
    int anscomp = cal.calcompno(X,Y);
    cout<<anscomp;

    
return 0;
}