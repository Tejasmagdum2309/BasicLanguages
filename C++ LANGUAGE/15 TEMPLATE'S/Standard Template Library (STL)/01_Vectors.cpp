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
    vector <int> v1;
    int size,element;
    cout<<"Enter size of vector : ";
    cin>>size;
    cout<<endl;

    for (int i = 0; i < size; i++)
    {
        cout<<"Enter no. : ";
        cin>>element;
        v1.push_back(element);
    }
    
    show(v1);
    v1.pop_back();
    show(v1);


    
return 0;
}