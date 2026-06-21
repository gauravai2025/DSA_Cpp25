// Kth ancestor of the node
// Given an undirected connected tree with n nodes, numbered from 1 to n, and rooted at node 1, and two positive integer 
// k and v
// find the th ancestor (Ancestor atk level up Parent of a node is also an ancestor 1 level up)
// of the node v

// https://cdn.codechef.com/images/learning/graphs-trees/sample-tree.png

#include<bits/stdc++.h>
using namespace std;

int dfs(vector<int>&path,vector<vector<int>>&adj,int v,int k,vector<int>&visited,int root){

path.push_back(root);
visited[root]=1;

int size=path.size();

if(root==v){
if(size-1<k)
return -1;
else
return path[size-1-k];
}

for(int nbr:adj[root]){
 if(!visited[nbr]){
     int ans=dfs(path,adj,v,k,visited,nbr);
     
     if(ans!=-1)
     return ans;
}
}

path.pop_back();
return -1;
}

int kthAncestor(int n,vector<vector<int>> &edges, int v, int k){
   
    vector<int>path;
    vector<vector<int>>adj(n+1);
    
    for(auto edge:edges){
    int u=edge[0];
    int v=edge[1];
    adj[u].push_back(v);
    adj[v].push_back(u);
    }
    vector<int>visited(n+1,0);
    return dfs(path,adj,v,k,visited,1);
}

 
int main()
{
    int edge,v;
    cout<<"enter number of edge and vertex";
    cin>>edge>>v;
     
    cout<<"enter edges:";
    vector<vector<int>>edges;

    while(edge--){
      int u,v;
      cin>>u>>v;  
      edges.push_back({u,v});
    }

    int target,k;
    cout<<"enter target node and kth value to find ancestor: ";
    cin>>target>>k;
 
    cout<<kthAncestor(v,edges,target,k);
    return 0;
}