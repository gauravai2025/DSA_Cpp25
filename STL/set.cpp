#include<iostream>
#include<set>
using namespace std;
int main(){
    set<int>s;
    s.insert(2);
    s.insert(6);
    s.insert(5);
   s.insert(9);
    s.insert(1);
    cout<<"all element unique"<<endl;
    for(auto i:s){
        cout<<i<<" ";
    }
    cout<<endl;
    s.insert(5);
    s.insert(9);
    s.insert(5);
    cout<<"containing same element\n";
     for(auto i:s){
        cout<<i<<" ";

    }
    cout<<endl;
    s.erase(s.begin());   // remove 1st element
     for(auto i:s){
        cout<<i<<" ";

    }
    cout<<endl;
    set<int>::iterator n=s.begin();   
    s.erase(++n);   // remove 2nd element
     for(auto i:s){
        cout<<i<<" ";

    }
    cout<<endl;
cout<<"9 is present "<<s.count(9)<<endl;
set<int>::iterator val=s.find(6);   // val = address of 6
   cout<<*val;   // *val=value at address of 6=6
   cout<<endl;
 s.insert(23);
 s.insert(55);
 for(auto it=val;it!=s.end();it++){
    cout<<*it<<" ";
 }
 cout<<endl;
  for(auto i:s){
        cout<<i<<" ";

    }
 return 0;

}