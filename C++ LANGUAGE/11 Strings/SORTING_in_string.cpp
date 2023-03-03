#include<iostream>
#include<string>
#include<algorithm>              // --->>  in this header file sorting function present

using namespace std; 

int main()
{
   string s1 = "sfsdfsdjfhiscndkn";

   sort(s1.begin(),s1.end());
   cout<<s1;

    
return 0;
}