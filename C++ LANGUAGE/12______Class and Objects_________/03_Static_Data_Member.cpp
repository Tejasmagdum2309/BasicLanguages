#include<iostream>
using namespace std; 
class Employe{
     int ID;
     static int count;


 // Static data type help to not re-initilize the val. of data type for every new oBJECT.......


 // simple data type re-initilize the val. of data type for every new OBJECT.......


     public :
     void getinfo(void)
     {
         cout<<"ID NO.  :";
         cin>>ID;
         count++;
     }
     void setinfo(void)
     {
         cout<<"ID of employe is "<<ID<<" no of employe "<<count<<endl;
         
     }
     static void printcount(void)
     {   cout<<"COUNT is :   ";
         cout<<count<<endl;
     }
};
int Employe :: count;
int main()
{
 Employe mayur,naman,harsh;
 mayur.getinfo();
 mayur.setinfo();
 Employe::printcount();

 
 naman.getinfo();
 naman.setinfo();
 Employe::printcount();

 harsh.getinfo();
 harsh.setinfo();
 Employe::printcount();

    
return 0;
}