#include<bits/stdc++.h>
using namespace std;

void dfssubtreeprecompute(int src,int par,vector<unordered_set<int>>&subtree,vector<vector<int>>&adj){
 
    subtree[src].insert(src);

    for(auto child:adj[src]){
        if(child!=par){  // to avoid going back to parent node viseted previously
            dfssubtreeprecompute(child,src,subtree,adj);
            subtree[src].insert(subtree[child].begin(),subtree[child].end());
        }
    }

}
 
int main()
{

int n;
cin>>n;

vector<unordered_set<int>>subtree(n+1);

vector<vector<int>>adj(n+1);

while(n>1){
int u,v;
cin>>u>>v;
adj[u].push_back(v);
adj[v].push_back(u);
n--;
}

dfssubtreeprecompute(1,-1,subtree,adj);

int q;
cin>>q;

while(q--){

int type,x,y;
cin>>type>>x>>y;

if(type==1){
if(subtree[y].count(x))
cout<<"YES\n";
else
cout<<"NO\n";
}

else{
if(subtree[x].count(y))
cout<<"YES\n";
else
cout<<"NO\n";
}
}

return 0;
}