
#include <bits/stdc++.h>
using namespace std;

int main() {
    set<string>s;
    cout<<"enter number of string\n";
    int n;
    cin>>n;
    string str;
    cout<<"enter string\n";
    for(int i=1;i<=n;i++){
       cin>>str;
       s.insert(str);
    }
    for(auto it:s){
        cout<<it<<" ";
    }

    return 0;
}