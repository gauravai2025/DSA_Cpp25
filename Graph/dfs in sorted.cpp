#include<bits/stdc++.h>
using namespace std;

void dfs(vector<set<int>>&adj,int src,vector<int>&visited){
   cout<<src<<" ";

   visited[src]=1;

   for(int child:adj[src]){
    if(!visited[child])
    dfs(adj,child,visited);
   }
}
int main()
{
    int n;
    cin>>n;

    int edge=n-1;
    vector<set<int>>adj(n+1);
    vector<int>visited(n+1,0);

    while(edge--){
    int u,v;
     cin>>u>>v;  
     adj[u].insert(v);
     adj[v].insert(u); 
    }
    dfs(adj,1,visited);
    return 0;
}