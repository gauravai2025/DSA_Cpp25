#include<bits/stdc++.h>
using namespace std;

bool dfs(int src,vector<int>&visited,vector<vector<int>>&adj,int par){
  
    visited[src]=1;

    for(int nbr:adj[src]){

    if(!visited[nbr]){
     if(dfs(nbr,visited,adj,src))
     return 1;   
    }
    else{
     if(par!=nbr)
     return 1;   
    }
    }

    return false;
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

    while(m--){
      int u,v;
      cin>>u>>v;
      adj[u].push_back(v);
      adj[v].push_back(u);
    }

    vector<int>visited(n+1,0);


    int cnt=0;

    for(int i=1;i<=n;i++){
      if(!visited[i]){
       if(dfs(i,visited,adj,-1))
       cnt++; 
      }  
    }

    cout<<"number of component having cycle: "<<cnt;
 
    return 0;
}