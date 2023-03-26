

#include <bits/stdc++.h>
using namespace std;

int main() {
    unordered_set<string>s;
    cout<<"enter number of string\n";
    int n;
    cin>>n;
    string str;
    cout<<"enter string\n";
    for(int i=1;i<=n;i++){
       cin>>str;   
       s.insert(str);
    }
    cout<<"enter number of query\n";
    int q;
    cin>>q;
    string st;
    while(q--){
        cin>>st;
        if(s.find(st)!=s.end())
        cout<<"present\n";
        else
        cout<<"not present \n";


    }
    return 0;
}