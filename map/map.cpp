#include<iostream>
using namespace std;
#include<map>
int main(){
    map<int ,string>m; 
    // input
    m[2]="gaurav";
    m[7]="rohit";
    m[4]="abhishekh";
//input using  insert  function
    m.insert({1,"adarsh"});  
    // print
    for(auto i:m){
        cout<<i.second<<endl;
    }
    cout<<"before erase\n";
     for(auto i:m){
        cout<<i.first<<" "<<i.second<<endl;
    }
    //search
    cout<<"2 is present ->"<<m.count(2)<<endl;
    // erase
    m.erase(7);
    cout<<"after erase\n";
    for(auto i:m){
        cout<<i.first<<" "<<i.second<<endl;
    }
    // find iterator of particular key
    auto it=m.find(2);
    // print after a prticular iterator
    for(auto i=it;i!=m.end();i++){
         cout<<(*i).first<<" "<<(*i).second<<endl;

    }
    return 0;
}