#include<iostream>

using namespace std; 

int main()
{
    int age;
    cout<<"ENTER your age :";
    cin>>age;
    switch(age)
    {
        case 10:
        cout<<"small child"<<endl;
        break;
        case 18:
        cout<<"adult brooo"<<endl;
        break;
        case 25:
        cout<<"do somthing"<<endl;
        break;
        default:
        cout<<"you are not present";
    }
return 0;
}