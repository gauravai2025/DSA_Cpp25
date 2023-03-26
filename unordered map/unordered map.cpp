#include<bits/stdc++.h>
using namespace std;
#include<map>
int main(){
   unordered_map<int ,string>m; 
    // input
    m[2]="gaurav";
    m[7]="rohit";
    m[4]="abhishekh";
//input using  insert  function
    m.insert({1,"adarsh"}); // make then insert 
    // print
    unordered_map<int,string>::iterator ite;
 // defining iterator 
    for(ite=m.begin();ite!=m.end();ite++){ // print map using iterator
        // cout<<(*it).first<<" "<<(*it).second<<endl;
        cout<<ite->first<<" "<<ite->second<<endl;
    }
    cout<<endl;

    for(auto &i:m){
        cout<<i.second<<endl;
    }
    
    cout<<"before erase\n";
     for(auto &i:m){
        cout<<i.first<<" "<<i.second<<endl;
    }
    //search
    cout<<"2 is present ->"<<m.count(2)<<endl;
    // erase
    m.erase(7); // erase element by key
    cout<<"after erase\n";
    for(auto &i:m){
        cout<<i.first<<" "<<i.second<<endl;
    }
    // find iterator of particular key
    auto it=m.find(2);
    // print after a prticular iterator
    for(auto i=it;i!=m.end();i++){
         cout<<(*i).first<<" "<<(*i).second<<endl;

    }
    m[7]="ankit";  // same key new value
     for(auto &i:m){
        cout<<i.first<<" "<<i.second<<endl;
    }
    auto pt=m.find(9); // find element by iterator
    if(pt==m.end())
    cout<<"not found \n";
    else
    cout<<pt->first<<" "<<pt->second<<endl;
    
    if(pt!=m.end())  // erase element by iterator
    m.erase(pt);
    else
    cout<<"not present in map\n";

    return 0;
}