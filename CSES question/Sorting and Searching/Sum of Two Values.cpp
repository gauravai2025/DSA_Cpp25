#include<bits/stdc++.h>
using namespace std;
 
int main()
{
int n,x;
cin>>n>>x;
vector<int>arr(n);
map<int,int>mp;

for(int i=0;i<n;i++){
    cin>>arr[i];
}

for(int i=0;i<n;i++){
    int find=x-arr[i];

    if(mp[find]!=0){
        cout<<mp[find]<<" "<<i+1;
        return 0;
    }   
 mp[arr[i]]=i+1;
}

cout<<"IMPOSSIBLE";
 
 
    return 0;
}