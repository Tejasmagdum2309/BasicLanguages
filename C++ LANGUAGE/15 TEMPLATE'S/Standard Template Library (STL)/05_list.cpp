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
    cout<<"\n";
}   


int main(){  
    list <int> l1;
    int size,element;
    cout<<"Enter size for l1 : ";
    cin>>size;
    for(int i= 0;i<size;i++){
        cout<<"Enter NO  :  ";
        cin>>element;
        l1.push_back(element);
    }
   
    show(l1);
// Removing elementes from LIST : --------->>
                                             // l1.pop_back();
                                             // l1.pop_back();
                                             // l1.pop_front();
                                             //  l1.remove(34);        
                                             //show(l1);

// Sorting of LIST --------------------->>
                                         // l1.sort();
                                         // show(l1);  


// Reverce List elements -------------->>
                                         //   l1.reverse();
                                         //   show(l1);
   


   
   
//    cout<<endl;
//    int s,N;
//    cout<<"Enter Size for l2 : ";
//    cin>>s;
//    list<int> l2(s);
//    list<int> ::iterator it;

//    for ( it = l2.begin(); it != l2.end(); it++)
//    {
//        cout<<"Enter no. : ";
//        cin>>N;
//        *it = N;
//    }
//    show(l2);
   
//Merge of 2 lists  ------------------>>
                                        //     l1.merge(l2);
                                        //    show(l1);
       


    
return 0;
}