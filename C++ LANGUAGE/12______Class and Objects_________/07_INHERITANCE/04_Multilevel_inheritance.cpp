#include <iostream>
using namespace std;
class student
{
private :
    int Roll_No;

public:
    void getRoll_no(int);
    void setRoll_no();
};

void student ::getRoll_no(int R)
{
    Roll_No = R;
}
void student ::setRoll_no()
{
    cout << "roll no. :" << Roll_No << endl;
}


class studentMarks : public student
{
protected :
    float maths, physics;

public:
    void getmarks(float, float);
    void showmarks();
};

void studentMarks ::getmarks(float M1, float M2)
{
    maths = M1;
    physics = M2;
}
void studentMarks ::showmarks()
{
    cout << "MATHS : " << maths << endl;
    cout << "PHYS : " << physics << endl;
}


class percentage : public studentMarks
{
protected:
    float percent;

public:
    void getpercentage()
    {
        percent = (maths + physics) / 2;
    }
    void showall()
    {
      //  cout << Roll_No<<endl;
        cout << "PERCENTAGE IS : " << percent;
    }
};
int main()
{
    percentage Naman;
    Naman.getRoll_no(49);
    Naman.getmarks(46.0,59.0);
    Naman.getpercentage();
    Naman.showall();

    return 0;
}