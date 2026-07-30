#include<bits/stdc++.h>
using namespace std;

bool dfs(int src,vector<int>&visited,vector<vector<int>>&adj,vector<int>&deg){
  
    visited[src]=1;

    if(deg[src]!=2)
    return 0;

    for(int nbr:adj[src]){

    if(!visited[nbr]){
     if(!dfs(nbr,visited,adj,deg))
     return 0;   
    }
    
    }

    return 1;
}
 
int main()
{
    int n,m;
    cin>>n>>m;

    vector<vector<int>>adj(n+1);
    vector<int>deg(n+1,0);

    while(m--){
    int u,v;
    cin>>u>>v;
    adj[u].push_back(v);
    adj[v].push_back(u);
    deg[u]++;
    deg[v]++;
    }

    vector<int>visited(n+1,0);

    int iscycle=0;

    for(int i=1;i<=n;i++){
      if(!visited[i]){
       if(dfs(i,visited,adj,deg))
       iscycle=1; 
      }  
    }

    if(iscycle)
    cout<<"cyclic graph";
    cout<<"not cyclic graph";
    
    return 0;
}