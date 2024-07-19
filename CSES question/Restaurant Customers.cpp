#include<bits/stdc++.h>
using namespace std;
 
int main()
{

int n;
cin>>n;
map<int,int>mp;
int ans=0;
int curr=0;
while(n--){
int a,b;
cin>>a>>b;
mp[a]++;
mp[b]--;
}

for(auto it:mp){
    curr+=it.second;
    ans=max(ans,curr);
}

cout<<ans;
 
 
 
    return 0;
}