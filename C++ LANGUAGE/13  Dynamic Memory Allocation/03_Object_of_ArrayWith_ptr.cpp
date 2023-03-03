#include<iostream>
using namespace std; 
class shop{
    int tagNo;
    float price;
    public :
    shop();
    void get_data(int a,float b);
    void show();
};
shop :: shop(){
    cout<<"Lets start program  "<<endl;
}
void shop::get_data(int a,float b){
    tagNo = a;
    price = b;
}
void shop ::show(){
    cout<<"TAG NO : "<<tagNo<<endl;
    cout<<"PRICE  : "<<price<<endl;
}

int main()
{   
    shop* ptr = new shop[2];
    int p;
    float q;
    shop* ptrNew = ptr;
    for(int i=0;i<2;i++){
        cout<<"Enter Tag no. and price of item :"<<i+1<<endl;
        cin>>p>>q;
        ptr->get_data(p,q);
        ptr++;
    }
    cout<<"********************************************************************"<<endl;
     for(int i=0;i<2;i++){
        cout<<"Tag no. and price of item :"<<i+1<<endl;
      
        ptrNew->show();
        ptrNew++;
    }
    
    

 

    
return 0;
}