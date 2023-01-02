#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
 string str;
cout<<"enter string\n";
cin>>str;
map<char,int>m;
int n=str.size();
for(int i=0;i<n;i++){
m[str[i]]++;
}
for(auto it:m){
    if((it.second)>1)
    cout<<it.first<<": "<<it.second<<endl;
}
    return 0;
}