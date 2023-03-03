#include<iostream>
#include<list>
using namespace std; 

void show(list<int> &L){
    list<int> :: iterator it;
    it = L.begin();
    for (it = L.begin(); it != L.end(); it++)
    {
        cout<<*it<<"\t";
    }
    


}
int main()
{
      list <int> l1(4);
      list<int> :: iterator iter;
      iter = l1.begin();
       *iter = 12;            // *****  this iterator format not work for ---->> list <int> L1;
       iter++;
       *iter = 7;
       iter++;
       *iter = 45;
       iter++;
       *iter = 88;
       iter++;


    //   l1.push_back(12);
    //   l1.push_back(152);
    //   l1.push_back(43);
    //   l1.push_back(7);

    //   list<int> :: iterator iter;
    //   iter = l1.begin();
    //   cout<<*iter<<"\n";
    //   iter++;
    //   cout<<*iter<<"\n";
    //   iter++;
    //   cout<<*iter<<"\n";
    //   iter++;
    //   cout<<*iter<<"\n";

  show(l1);
    
return 0;
}