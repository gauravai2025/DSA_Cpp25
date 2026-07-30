#include<bits/stdc++.h>
using namespace std;

void dfs(int src,vector<int>&visited,vector<vector<int>>&adj,vector<int>&deg,bool&iscycle){
  
    visited[src]=1;

    if(deg[src]!=2)
    iscycle=0;

    for(int nbr:adj[src]){

    if(!visited[nbr])
    dfs(nbr,visited,adj,deg,iscycle);
    
    }
}
 
int main()
{
    int n,m;
    cout<<"enter number of vertices\n";
    cin>>n;
    cout<<"enter number of edges\n";
    cin>>m;

    vector<vector<int>>adj(n+1);

    cout<<"enter edges: \n";
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

    int cnt=0;

    for(int i=1;i<=n;i++){
      if(!visited[i]){
       bool iscycle=1; 
       dfs(i,visited,adj,deg,iscycle);
       if(iscycle)
       cnt++; 
      }  
    }

    cout<<cnt;
    return 0;
}