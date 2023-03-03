#include<iostream>
using namespace std; 
template <class T>
class vector{
    private :
    T * arr;
    int size;
    public :
    vector(){}
    vector(int S){
        size = S;
        arr = new T[size];
    }
    void set(vector &V){
        for(int i=0;i<size;i++){
            cout<<"Enter the "<< i+1 <<" no. : ";
            cin>>V.arr[i];
        }
    }
    T doproduct(vector &V){
        T d=0;
        for (int i = 0; i < size; i++)
        {
           d += this->arr[i] * V.arr[i];
        }
        return d; 
    }

};
int main()
{  
   vector <float> V1(3),V2(3);
//    V1 = vector(3);
//    V2 = vector(3);
   cout<<"For 1 st vector : \n";
   V1.set(V1);
   cout<<"FOr 2 nd vector : \n";
   V2.set(V2);
   float d = V1.doproduct(V2);
   cout<<"dot product is :  \n";
   cout<<d;

   


    
return 0;
}