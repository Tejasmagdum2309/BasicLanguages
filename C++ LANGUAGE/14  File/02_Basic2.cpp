#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    string s1;
    ifstream in("Basic2.txt");
 //   in >> s1;     ----------->>>>>  not full sentance is get in string 

    getline(in , s1);

    cout<<s1;

        return 0;
}