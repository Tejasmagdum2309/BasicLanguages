#include<iostream>
using namespace std; 

void funk(int a){
     cout<<"i am funk() "<<a<<endl;
}
template <class T>
void funk(T a){
     cout<<"i am funk() for all "<<a<<endl;
}
template <class T>
void funk1(T a){
     cout<<"i am funk1() for all "<<a<<endl;
}
int main()
{   
 funk(4);
 funk1('v');
 funk(5.767);


    
return 0;
}