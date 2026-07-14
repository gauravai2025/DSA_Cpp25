#include<bits/stdc++.h>
using namespace std;

void dfs(int src,vector<vector<int>>&adj,vector<int>&size,vector<int>&vis){

vis[src]=1;
size[src]=1;

for(int child:adj[src]){

if(!vis[child]){
dfs(child,adj,size,vis);
size[src]+=size[child];
}
}
 
}

int main()
{

int n;
cout<<"Enter the number of vertexes: ";
cin>>n;

vector<vector<int>>adj(n+1);

int m=n-1;
vector<int>size(n+1,0);
vector<int>vis(n+1,0);

cout<<"Enter the edges: \n";

while(m--){
int u,v;
cin>>u>>v;
adj[u].push_back(v);
adj[v].push_back(u);
}

dfs(1,adj,size,vis);

int q;
cin>>q;
cout<<"Enter the queries: \n";
while(q--){
cout<<"Enter the vertex: ";
int v;
cin>>v;
cout<<"Size of subtree of vertex "<<v<<" is: "<<size[v]<<endl;
}    
return 0;
}