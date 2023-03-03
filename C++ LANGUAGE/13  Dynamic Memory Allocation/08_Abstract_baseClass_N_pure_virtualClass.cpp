// 1.Abstract Base class and pure Virtual Function are related.
// 2.Abstract Base class is the simple base class which contains at least one PURE VIRTUAL FUNCTION.
// 3.PURE VIRTUAL FUNCTION are Functions which must be redefined in derived classes.

#include<iostream>
using namespace std; 
class CWT{
    protected :
    string title;
    float rating;
    public :
    CWT(string t,float r){
        title = t;
        rating= r;
    }
    virtual void show() = 0; // do-nothing function -->> PURE VIRTUAL FUNCTION

};
class CWTVTIME : public CWT{
    protected :
    float Video_time;
    public :
    CWTVTIME(string t,float r,float vt) : CWT(t , r){
        Video_time = vt;
    }
    void show(){
        cout<<"The title of video is  :"<<title <<endl<<
        "and rating is :"<<rating<<endl<<"N Video Time is  :"<<Video_time<<endl;
    }
};
class CWTNowords : public CWT{
    protected :
    int Words_no;
    public :
    CWTNowords(string t,float r,int WN) : CWT(t , r){
       Words_no = WN;
    }
  /*  void show(){
        cout<<"The title of video is  :"<<title <<endl<<
        "and has Words are  :"<<Words_no<<endl;
    } */
};
int main()
{   
  //  CWTNowords W("objests broo",4.5,235);
  //  W.show();
  CWT *ptr[2];
  CWTNowords o("na ni",3.45,450);
  CWTVTIME p("BAga ",4.35,18.45);
  ptr[0]=&o;
  ptr[1]=&p;

  ptr[0]->show();
  ptr[1]->show();

  

    
return 0;
}