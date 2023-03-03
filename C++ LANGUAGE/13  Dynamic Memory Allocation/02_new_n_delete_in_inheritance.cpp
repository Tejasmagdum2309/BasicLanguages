#include<iostream>
using namespace std; 
class complexno{
    int a,b;
    public :
    complexno(){
        cout<<"lets start  "<<endl;
    }
    complexno(int A,int B):a(A),b(B){
        cout<<"Values are initialized "<<endl;
    }
    void show();   
};
void complexno ::show(){
    cout<<a<<" + "<<b<<"i"<<endl;
}
int main()
{
    /* complexno z;
     z = complexno(2,4);
     z.show();
    */
   complexno* A = new complexno;
   (*A) = complexno(2,4);
   A->show();    
return 0;
}