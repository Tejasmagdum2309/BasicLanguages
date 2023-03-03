#include<iostream>
using namespace std; 
class members
{
    private :
    int salary,id;

    public :
    char name;
    int number;
    void getinfo(int salary1,int id1);
    void setinfo()
    {
        cout<<"SALARY :"<<salary<<endl;
        cout<<"ID :"<<id; 
    }

};
void members :: getinfo(int salary1,int id1)
{
      salary = salary1;
      id = id1;
}

int main()
{
  members Naman;
  Naman.getinfo(10000,2);
  Naman.setinfo();
  Naman.name='N';
  Naman.number=102;
  Naman.salary=1000;

    
return 0;
}