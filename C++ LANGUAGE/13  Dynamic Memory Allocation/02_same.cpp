#include<iostream>
using namespace std; 
class complex{
    private :
    int a,b;
    public :
    complex(){
        cout<<"LETs Goooooooooooooooooooooo!!!!!!!!!!!!!!!!"<<endl;
    }
    void get_data(int A,int B);
    void show();
};
void complex ::get_data(int A,int B){
    a=A;
    b=B;
}
void complex ::show(){
    cout<<a<<" + "<<b<<"i"<<endl;
}
int main()
{     
 /*  1.  
    complex A;
    A.get_data(2,4);
    A.show();
 */
 /*  2.
   complex A;
   complex* ptr = &A;
   (*ptr).get_data(2,4);
   (*ptr).show();
   ptr->get_data(3,6);
   ptr->show();
 */

   complex* ptr=new complex;
   ptr->get_data(12,24);
   ptr->show();
    
return 0;
}