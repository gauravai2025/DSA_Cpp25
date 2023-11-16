#include<iostream>
#include<deque>
using namespace std;
int main(){
    deque<int>d;  // declaration of deque
    d.push_front(1);  // insert element at
    d.push_back(2);
    d.push_front(4);
    d.push_back(8);    // insert element from back
    cout<<d.at(1)<<endl;   // element at random access
    cout<<d[2]<<endl;   // element at random access
    for(int i:d){    // print all element 
        cout<<i<<" ";
    }
    cout<<endl;
    d.pop_front();
    for(int i:d){    // print all element 
        cout<<i<<" ";
    }
    cout<<endl;
    d.pop_back();
     for(int i:d){    // print all element 
        cout<<i<<" ";
    }
    cout<<endl;
   cout<< d.empty()<<endl;
  cout<< d.front()<<endl;
  cout<<d.back()<<endl;
  cout<<"size before erase\n";
   cout<<d.size()<<endl;
   d.erase(d.begin(),d.begin()+1);
 cout<<"size after  erase\n";
  cout<<d.size()<<endl;
    d.push_front(7);  // insert element at
    d.push_back(9);
    d.push_front(11);
    d.push_back(13);
    d.erase(d.begin()+1,d.begin()+3);
for(int i:d){    
        cout<<i<<" ";
    }
    return 0;
}
