// You are given a simple connected undirected graph with 
// N vertices numbered 1 through N and M edges numbered 1 through M. Edge 
// i connects vertices u and v and has a label w

// Among all simple paths (paths that do not pass through the same vertex more than once)
// from 1 to vertex N, find the minimum XOR of the labels of the edges on the path.

#include<bits/stdc++.h>
using namespace std;

void dfs(int src,long long int xorval,vector<vector<pair<int,long long int>>>&adj,long long int &mnval,int target,vector<int>&path
){
    path[src]=1;

   if(src==target)
    {
    mnval=min(mnval,xorval);
    path[src]=0;
    return;
    }

   for(auto it:adj[src]){
    if(path[it.first])
    continue;
    path[it.first]=1;
    dfs(it.first,xorval^it.second,adj,mnval,target,path);
   }

   path[src]=0;
}

int main(){
int n,m;
cin>>n>>m;
vector<vector<pair<int,long long int>>>adj(n+1);

while(m--){
long long int a,b,w;
cin>>a>>b>>w;
adj[a].push_back({b,w});
adj[b].push_back({a,w});
}

long long int mnval=LONG_LONG_MAX;
vector<int>path(n+1,0);

dfs(1,0,adj,mnval,n,path);

cout<<mnval<<endl;
}