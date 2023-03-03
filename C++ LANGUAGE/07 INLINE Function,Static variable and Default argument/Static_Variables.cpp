#include<iostream>
using namespace std; 

int main()
{
    for(int i=0;i<10;i++)
    {
        static int c=0;   //only run on time every time value of c varies
                          // according to next conndition
        c=c+1;
        cout<<c<<endl;
    }
    
return 0;
}