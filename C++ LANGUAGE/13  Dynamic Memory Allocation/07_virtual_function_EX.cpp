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
    virtual void show(){}

};
class CWTVTIME : public CWT{
    protected :
    float Video_time;
    public :
    CWTVTIME(string t,float r,float vt) : CWT(t , r){
        Video_time = vt;
    }
    void show(){
        cout<<"The title of video is  :"<<title <<
        "and rating is :"<<rating<<"N Video Time is  :"<<Video_time<<endl;
    }
};
class CWTNowords : public CWT{
    protected :
    int Words_no;
    public :
    CWTNowords(string t,float r,int WN) : CWT(t , r){
       Words_no = WN;
    }
    void show(){
        cout<<"The title of video is  :"<<title <<
        "and rating is :"<<rating<<"and has Words are  :"<<Words_no<<endl;
    }
};
int main()
{   
  //  CWTNowords W("objests broo",4.5,235);
  //  W.show();
  CWT *ptr;
  CWTNowords W("what ",4.5,345);
  CWTVTIME V("noooo",3.5,9.7);
  ptr = &W;
  ptr->show();
 

    
return 0;
}