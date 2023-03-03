#include <iostream>
#include <math.h>

using namespace std;
class point
{
    int x, y;
    friend float Dist(point , point );
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
float Dist(point A, point B)
{
    int t = A.x - B.x;
    int s = A.y - B.y;
    int z = ((t * t) + (s * s));
    float Q = sqrt(z);
    return Q;
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
    // cout<<"DISTANCE : "<<Dist(p,q);
    
    return 0;
}