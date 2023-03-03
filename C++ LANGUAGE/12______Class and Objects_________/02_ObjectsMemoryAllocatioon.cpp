#include<iostream>
using namespace std; 
class shop{
    int itemID[10];
    int itemPrice[10];
    int counter;

    public :
    int j=0;
    // void incounter(void)
    // {
    //      counter = 0;
    // }
    void getinfo(void);
    void print(void);
};
void shop::getinfo()
{
    cout<<"Enter ID : ";
    cin>>itemID[j];
    cout<<"Enter PRICE : ";
    cin>>itemPrice[j];
    j++;
}
void shop ::print(){
    for (int i = 0; i<j; i++)
    {
        cout<<"ID is : "<<itemID[i];
        cout<<"PRICE is : "<<itemPrice[i];
    }
    
}
int main()
{shop NAMAN;
// NAMAN.incounter();

NAMAN.getinfo();
NAMAN.getinfo();
NAMAN.getinfo();
NAMAN.print();
     

    
return 0;
}