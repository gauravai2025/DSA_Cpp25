#include<bits/stdc++.h>
using namespace std;

void dfs(vector<vector<int>>&adj,int src,vector<int>&visited,int par){
   cout<<src<<" ";

   visited[src]=1;

   for(int child:adj[src]){
    if(!visited[child])
    dfs(adj,child,visited,src);
   }
   
   if(par!=-1)
   cout<<par<<" ";
}
 
int main()
{
    int n;
    cin>>n;

    int edge=n-1;
    vector<vector<int>>adj(n+1);
    vector<int>visited(n+1,0);

    while(edge--){
    int u,v;
     cin>>u>>v;  
     adj[u].push_back(v);
     adj[v].push_back(u); 
    }
    dfs(adj,1,visited,-1);
    return 0;
}