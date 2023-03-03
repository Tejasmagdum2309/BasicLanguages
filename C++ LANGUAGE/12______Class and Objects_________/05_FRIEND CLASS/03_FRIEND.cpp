#include<iostream>
using namespace std; 
class Y;
class X
{
    int A;
    friend int add(X O1,Y O2);
    public :
    void getinfo(int N)
    {
        A=N;
        }
};
class Y
{
    int B;
    friend int add(X O1,Y O2);
    public :
    void getinfo(int N){
        B=N;
    }
};
int add(X O1,Y O2){
    return O1.A+O2.B;
} 
int main()
{
 X a;
 a.getinfo(2);
 Y b;
 b.getinfo(5);
 cout<<add(a,b);

    
return 0;
}