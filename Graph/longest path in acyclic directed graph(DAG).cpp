#include<bits/stdc++.h>
using namespace std;

void topodfs(vector<vector<pair<int,int>>>&adj, stack<int>&st,int src,vector<int>&visited
){
    visited[src]=1;
    
    for(auto nbr:adj[src]){
      if(!visited[nbr.first])
      topodfs(adj,st,nbr.first,visited);
    }
    
    st.push(src);

    }

void longestPath(int V, int E, vector<vector<int>>& edges,int src){

        // creating adjacency list
        
        vector<vector<pair<int,int>>>adj(V);
        
        for(int i=0;i<E;i++){
            int u=edges[i][0];
            int v=edges[i][1];
            int wt=edges[i][2];
            adj[u].push_back({v,-wt}); // negative weight
        }
        
    vector<int>visited(V,0);
    stack<int>st;
    
    for(int i=0;i<V;i++){
      if(!visited[i])    
        topodfs(adj,st,i,visited);
    }
    
    vector<long long int>dist(V,LONG_MAX);
    
    // update distance
    dist[src]=0;
    
    while(!st.empty()){
     int src=st.top();
     
     if(dist[src]!=LONG_MAX){
        
     for(auto nbr:adj[src]){
     if(dist[nbr.first]>dist[src]+nbr.second)
       dist[nbr.first]=dist[src]+nbr.second;
     
    }
    
     }
     
     st.pop();
    }
    
     for(int i=0;i<V;i++){
         if(dist[i]==LONG_MAX)
         dist[i]=-1;
     }

     cout<<"longest path from 0 to all vertices\n";
     
    for(auto ele:dist){
        cout<<-ele<<" ";

     }

     }

int main()
{

int vertex,edges;
cout<<"enter number of vertices and edges\n";
cin>>vertex>>edges;

vector<vector<int>>graph(edges,vector<int>(3));

cout<<"enter edges\n";

for(int i=0;i<edges;i++){
    int u,v,wt;
    cin>>u>>v>>wt;
    graph[i][0]=u;
    graph[i][1]=v;
    graph[i][2]=wt; 
}

int src;
cout<<"enter source\n";
cin>>src;

longestPath(vertex,edges,graph,src);
 return 0;
}