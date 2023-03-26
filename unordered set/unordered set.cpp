#include<bits/stdc++.h>

using namespace std;
int main(){
    unordered_set<int>s;
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
    s.insert(18);
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
    unordered_set<int>::iterator n=s.begin();   // iterator of first element
    s.erase(++n);   // remove 2nd element  // passing iterator of second elemnet
    s.erase(18);
     for(auto i:s){
        cout<<i<<" ";

    }
    cout<<endl;
cout<<"9 is present "<<s.count(9)<<endl;
auto val=s.find(6);   // val = address of 6
   cout<<*val;   // *val=value at address of 6=6
   cout<<endl;
 s.insert(23);
 s.insert(55);
 if(val!=s.end())
 cout<<"present in set\n";
 else          // check element present in set
 cout<<"not present in set\n";



 for(auto it=val;it!=s.end();it++){
    cout<<*it<<" ";
 }
 cout<<endl;
  for(auto i:s){
        cout<<i<<" ";

    }
 return 0;

}