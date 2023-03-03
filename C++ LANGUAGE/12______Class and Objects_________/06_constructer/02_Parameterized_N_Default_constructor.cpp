#include <iostream>
using namespace std;
class point
{
    int x, y;

public:
    point(int, int); // ----------->>>> paramaterized constructor

    void show()
    {
        cout << "(" << x << "," << y << ")" << endl;
    }
};
point ::point(int a, int b)
{
    x = a;
    y = b;
}
int main()
{   
    // EMPLICiT Call 
    point p(2, 4);
    p.show();
    // OR
    
    // Explicit call
    point q = point(3, 5);
    q.show();

    return 0;
}