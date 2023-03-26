#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    cout<<"enter number of string\n";
int n;
cin>>n;
string str;
unordered_map<string,int>mp;  //defining unordered map
cout<<"enter string\n";
while(n--){
    cin>>str;
    mp[str]++;
}
cout<<"unique string"<<" "<<"frequency\n";
for(auto it:mp){
    cout<<it.first<<":           "<<it.second<<endl;
}
    return 0;
}