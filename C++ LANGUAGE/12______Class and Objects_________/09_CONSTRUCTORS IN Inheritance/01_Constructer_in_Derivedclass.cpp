#include <iostream>
using namespace std;
class Base1
{
protected:
    int data1;

public:
    Base1();
    Base1(int);
    void print_data1();
};
Base1 ::Base1()
{
    cout << "Program is starting  " << endl;
}
Base1 ::Base1(int a)
{
    data1 = a;
    cout << "Constructor of Basse1 is Executed" << endl;
}
void Base1 ::print_data1()
{
    cout << "DATA1 : " << data1 << endl;
}

class Base2
{
protected:
    int data2;

public:
    Base2();
    Base2(int);
    void print_data2();
};
Base2 ::Base2()
{
    cout << "Baaaaaagaaaaaa!!!!!" << endl;
}
Base2 ::Base2(int b)
{
    data2 = b;
    cout << "Base2 COnstructor Executed " << endl;
}
void Base2 ::print_data2()
{
    cout << "DATA2 : " << data2 << endl;
}

class Derived : public Base1, public Base2
{
private:
    int derived1;

public:
    Derived() {}
    Derived(int a, int b, int c) : Base1(a), Base2(b)
    {
        derived1 = c;
        cout << "Last constructor is executed " << endl;
    }
    /*   void print_data(){
        Base1 ::print_data();
    } */
    void printall()
    {
        cout << "derived1 :" << derived1 << endl;
    }
};
int main()
{
    Derived Naman;
     Naman = Derived(1,2,3); 
    Naman.print_data1();
    Naman.print_data2();
    Naman.printall();

    return 0;
}