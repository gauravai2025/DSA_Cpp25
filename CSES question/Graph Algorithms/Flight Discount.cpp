#include<bits/stdc++.h>
using namespace std;
#define ll long long 
 
int main()
{

int n,m;
cin>>n>>m;

vector<vector<pair<int,int>>>adj(n+1);

while(m--){
int a,b,wt;
cin>>a>>b>>wt;
adj[a].push_back({b,wt}); 
}

vector<pair<ll,ll>>dist(n+1,{LLONG_MAX,INT_MIN}); 

set<pair<ll,ll>>st;

st.insert({0,1});
dist[1]={0,0};

while(!st.empty()){

auto top=*(st.begin());
st.erase(st.begin());

int node=top.second;
ll wtcurr=top.first;

for(auto child:adj[node]){

ll mxwt=max(dist[child.first].second,wtcurr);

if(wtcurr+dist[node].first-(mxwt/2)<dist[child.first].first){
if(st.find({dist[child.first].first,child.first})!=st.end())
st.erase({dist[child.first].first,child.first});
st.insert({wtcurr+dist[node].first,child.first});
dist[child.first].first=wtcurr+dist[node].first;
dist[child.first].second=mxwt;

}

}

}

cout<<dist[n].first;

return 0;
}