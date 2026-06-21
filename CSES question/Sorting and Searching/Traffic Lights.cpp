#include<bits/stdc++.h>
using namespace std;
 
int main()
{
int x;
cin>>x;
map<int,int>mp;
int n;
cin>>n;
while(n--){
int p;
cin>>p;
mp[p]=1;
int mxdist=INT_MIN;
int prev=-1;

for(auto it:mp){
    if(prev==-1)
    prev=it.first;
    else
    mxdist=max(mxdist,it.first-prev);
    prev=it.first;
}

mxdist=max(mxdist,mp.begin()->first);
mxdist=max(mxdist,x-(--mp.end())->first);

cout<<mxdist<<" ";
}
return 0;
}