#include<iostream>
#include<fstream>
using namespace std; 

int main()
{
 string st;
 cout<<"Start :"<<endl;
 getline(cin , st);
 ofstream out("Basic.txt");
 out<<st;

 
  
  
    
return 0;
}