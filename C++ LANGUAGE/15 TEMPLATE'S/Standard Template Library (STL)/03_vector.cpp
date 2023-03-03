#include<iostream>
#include<vector>
using namespace std; 

void show(vector<int> &V){
    cout<<"\n";
    for (int i = 0; i < V.size(); i++)
    {
        cout<<V.at(i)<<"\t";
    }
    
}
int main()
{
    // vector <int> v1;
    // int size,element;
    // cout<<"Enter size of vector : ";
    // cin>>size;
    // cout<<endl;

    // for (int i = 0; i < size; i++)
    // {
    //     cout<<"Enter no. : ";
    //     cin>>element;
    //     v1.push_back(element);
    // }
    
    // show(v1);
    // v1.pop_back();
    // show(v1);

   vector<int> v1(2);  //    --------->> If we want to inert data one by one dont use this method 
   v1.push_back(12);         
   cout<<v1[2];


    // vector<int> v2(2);
    // v2.push_back(5);
    // show(v2);

  //  vector<int> v3(v2);


    vector<int> v4(4,14);
   // show(v4);




    
return 0;
}