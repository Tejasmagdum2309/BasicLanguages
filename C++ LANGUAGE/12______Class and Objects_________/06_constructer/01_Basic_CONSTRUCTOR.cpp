#include <iostream>
using namespace std;
class complex
{
    int a, b;

public:
    complex(void);

    void show()
    {
        cout << a << " + " << b << "i" << endl;
    }
};
complex ::complex()
{
    a = 10;
    b = 23;
}
int main()
{
    complex A;
    A.show();

    return 0;
}