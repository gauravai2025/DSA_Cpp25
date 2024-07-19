#include<bits/stdc++.h>
using namespace std;
 
int main()
{

int n,m;
cin>>n>>m;

vector<int>pt(n,0);
vector<int>pc(n,0);
map<int,int>mp;

for(int i=0;i<n;i++){
    cin>>pt[i];
    mp[pt[i]]++;
}

for(int i=0;i<m;i++){
    cin>>pc[i];
}

sort(pt.begin(),pt.end());

vector<int>ans;

for(int i=0;i<m;i++){
int idx=upper_bound(pt.begin(),pt.end(),pc[i])-pt.begin();
idx--;

if(idx<0)
ans.push_back(-1);
else{
 if(mp[pt[idx]]==0) 
 ans.push_back(-1);
else{
ans.push_back(pt[idx]);
mp[pt[idx]]--;
}
}

}

for(auto it:ans){
    cout<<it<<endl;
}
 
 
 
    return 0;
}