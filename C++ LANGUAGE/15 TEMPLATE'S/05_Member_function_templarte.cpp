#include<iostream>
using namespace std;
template <class T>
class New{
    T data;
    public :
    New(T a){
        data = a;
    }
    void show();
};
template <class T>
void New<T> ::show(){
    cout<<"Data is : "<<data;
}
int main()
{
  New<char> obj('d');
  obj.show();
    
return 0;
}