#include<bits/stdc++.h>

using namespace std;
int main(){
    multiset<int>s;
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
    auto it=s.find(5);  // find iterator of element 5 at first ocurring
    s.erase(it);  // erase element 5 at first ocurring
cout<<"after erase of 5\n";
     for(auto i:s){
        cout<<i<<" ";

    }
    cout<<endl;
   // s.insert();
    s.erase(9);  // erase element all ocurring of 9
cout<<"after erase of 9\n";
      for(auto i:s){
        cout<<i<<" ";

    }

    return 0;
}