#include<iostream>
#include<string>
using namespace std; 

class Binary
{
     string s;
     void che_bin(void);
     void oncs_comp(void);
     public :
    
     void give(void);
     
     void display(void);
};

void Binary :: give()
{
  cout<<"ENter the binary no. :";
  cin>>s;
   che_bin();
   oncs_comp();
}
void Binary :: che_bin()
{
     for(int i=0;i<s.length();i++)
     {
         if(s.at(i)!='0'  && s.at(i)!='1' )
         {
               cout<<"not binary";
               exit(0);
         }
     
     }
}
void Binary :: oncs_comp()
{
      for(int i=0; i < s.length(); i++)
    {
              if(s.at(i)=='0')
            {
                  s.at(i)='1';
            }else{
                  s.at(i)='0';
            }
    }
}

void Binary :: display()
{
     cout<<"1'S Complement : "<<endl;
     cout<<s;
}
int main()
{
 Binary NUM;
 NUM.give();
//  NUM.che_bin();
//  NUM.oncs_comp();
 NUM.display();
    
return 0;
}