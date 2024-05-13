#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    set<int>s;
    s.insert(2);
    s.insert(6);
    s.insert(5);
    s.insert(9);
   

    set<int>::iterator it=s.find(6); // it points to 6
    s.insert(it,8);  // insert 8 before 6
    for(auto i:s){
        cout<<i<<" ";
    }
  cout<<endl;
  
 pair<set<int>::iterator, bool> pr;
    pr = s.insert(1);
    auto it1=pr.first;
    cout<<endl;
    cout <<"inserted or not " <<pr.second <<endl;
    cout<<*it1<<" is inserted "<<endl;
    
     for(auto i:s){
        cout<<i<<" ";
    }
  cout<<endl;
  
    
  pair<set<int>::iterator, bool>pr1;
  pr1=s.insert(6);
    auto it2=pr1.first;
    cout<<endl;
     cout <<"inserted or not " <<pr1.second <<endl;

    cout<<*it2<<endl;

   // *it2=15; give error because it2 is const iterator not modified iterator 
 
    return 0;
}