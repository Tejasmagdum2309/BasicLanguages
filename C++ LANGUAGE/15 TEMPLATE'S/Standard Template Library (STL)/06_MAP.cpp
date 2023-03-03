#include<iostream>
#include<map>
#include<string>
using namespace std; 

int main()
{
    map <string , int> marks;
    marks["Tejas"] = 73;
    marks["naman"] = 83;
    marks["suyash"] = 37;

    // marks.insert({"Nap",24});            --------------->>  Dont know much about insert function

    map<string , int> :: iterator it;

    for(it = marks.begin();it!=marks.end();it++){
        cout<<(*it).first<<"\t"<<(*it).second<<"\n";
    }

   cout<< marks.size()<<endl;
    cout<<marks.max_size()<<endl;
   cout<< marks.empty();





    
return 0;
}