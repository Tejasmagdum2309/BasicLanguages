#include<iostream>
using namespace std; 

class Student{
    protected :
    int roll_no;
    public :
    void get_roll_no(int a){
        roll_no = a;
    }
    void print_roll_no(){
        cout<<"ROLL NO  : "<<roll_no<<endl;
    }
};
class Marks : virtual public Student{
    protected :
    int maths,physics;
    public :
    void get_marks(int a,int b);
    void print_marks();
};
void Marks ::get_marks(int a,int b){
    maths = a;
    physics = b;
}
void Marks ::print_marks(){
    cout<<"MATHS : "<<maths<<endl;
    cout<<"PHYS  : "<<physics<<endl; 
}
class Physical : virtual public Student{
    protected :
    int score;
    public :
    void get_score(int a){
        score = a;
    }
    void print_score(){
        cout<<"SCORE IS : "<<score<<endl;
    }
};
class Total :public Marks,public Physical{
    protected :
    int total;
    public :
    void show_all(){
        total = maths + physics + score;
        cout<<total;
    }
};
int main()
{
    Total harry;
    harry.get_roll_no(101);
    harry.print_roll_no();
    harry.get_marks(35,35);
    harry.print_marks();
    harry.get_score(9);
    harry.print_score();
    harry.show_all();
 

return 0;
}