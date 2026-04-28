#include<bits/stdc++.h>
using namespace std;
 
int main()
{

int n;
cin>>n;
vector<pair<int,int>>time;
int ans=0;
int curr=0;

while(n--){
int a,b;
cin>>a>>b;
time.push_back({a,0});
time.push_back({b,1});
}

sort(time.begin(),time.end());

for(auto pr:time){

    if(pr.second==0)
    curr++;
    else
    curr--;
    ans=max(ans,curr);
}

cout<<ans;
return 0;
}