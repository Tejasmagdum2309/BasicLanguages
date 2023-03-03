#include<iostream>
#include<math.h>
using namespace std; 
class SimpleCalculator{
    protected :
    float sum,sub,product,division;
    public :
    void getno(float,float);
    void ShowSIMCAL(){
        cout<<sum<<endl;
        cout<<sub<<endl;
        cout<<product<<endl;
        cout<<division;
    }

};
void SimpleCalculator ::getno(float a,float b){
    sum=a+b;
    sub=a-b;
    product=a*b;
    division=a/b;   
}

class ScintifiCalculator{
    protected :
    float X,Y,A,B;
    public :
    void CALCULATE(float a,float b){
         X = sin(a);
         Y = cos(b);
    }
    void display(){
        cout<<X<<endl;
        cout<<Y;
    }
};
class HybriCalculator : public SimpleCalculator,public ScintifiCalculator
{
    protected :
    int Q,W,E,R;
    public :
    void showshow(){
        cout<<"WE r using both CALCULATORS AT SAME TIME"<<endl;
    }

};
int main()
{ HybriCalculator NUM;
NUM.showshow();
NUM.getno(8,4);
NUM.ShowSIMCAL();
NUM.CALCULATE(45,45);
NUM.display();
  
return 0;
}