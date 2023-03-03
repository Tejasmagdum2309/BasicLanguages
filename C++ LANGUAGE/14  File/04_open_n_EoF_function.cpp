#include<iostream>
#include<fstream>
#include<string>

using namespace std; 

int main()
{  
    /* 
    string s1;
    ofstream out;
    out.open("Basic.txt");
    cout<<"ENTER YOUR NAME : \n";
    getline(cin,s1);
    out<<s1 + " is your name";
    */

   string s;
   ifstream in;
   in.open("Basic2.txt");
  // getline(in,s);   ------->>> only one line we get as output in program so we use while loooooop
  while(in.eof() == 0){
      getline(in , s);
      cout<<s<<"\n"; 
  }
    



 

    
return 0;
}