#include<iostream>
#include<fstream>
using namespace std; 

int main()
{/*
    ofstream baga("Basic.txt");
    string s;
    cout<<"NAME :" ;
  //  cin>>s;  ----->>> cannot used to get full string so we use getline() function
    getline(cin , s);

  // to write in the file --->
    baga<<s;
  baga.close();

*/

  ifstream nani("Basic.txt");
  string s;
  //nani>>s; 
  getline(nani,s);
  cout<<s;

   

    
return 0;
}