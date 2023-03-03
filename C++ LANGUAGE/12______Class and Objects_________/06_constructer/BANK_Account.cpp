#include <iostream>
using namespace std;
class Account
{
    int year;
    int Givenprice;
    int Newprice;
    float rate;

public:
    Account(){}
    Account(int p, int y, float r);
   // Account(int p, int y, int r);

    void show()
    {
        cout << Newprice << endl;
    }
};
    Account ::Account(int p, int y, float r)
    {   
        Givenprice=p;
        year=y;
        rate=r;
        Newprice=Givenprice;

        for (int i = 0; i < year; i++)
        {
            Newprice = Newprice * (1 + rate);
        }
    }
    int main()
    {
      Account A1;
      int p,y;
      float r;
      cout<<"WRITE :";
      cin>>p>>y>>r;
      A1=Account(p,y,r);
      A1.show();
       
        return 0;

    }