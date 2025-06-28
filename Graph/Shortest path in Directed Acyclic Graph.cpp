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

void shortestPath(int V, int E, vector<vector<int>>& edges){

        // creating adjacency list
        
        vector<vector<pair<int,int>>>adj(V);
        
        for(int i=0;i<E;i++){
            int u=edges[i][0];
            int v=edges[i][1];
            int wt=edges[i][2];
            adj[u].push_back({v,wt});
        }
        
    vector<int>visited(V,0);
    stack<int>st;
    
    for(int i=0;i<V;i++){
      if(!visited[i])    
        topodfs(adj,st,i,visited);
    }
    
    vector<int>dist(V,INT_MAX);
    
    // update distance
    dist[0]=0;
    
    while(!st.empty()){
     int src=st.top();
     
     if(dist[src]!=INT_MAX){
        
     for(auto nbr:adj[src]){
     if(dist[nbr.first]>dist[src]+nbr.second)
       dist[nbr.first]=dist[src]+nbr.second;
     
    }
    
     }
     
     st.pop();
    }
    
     for(int i=0;i<V;i++){
         if(dist[i]==INT_MAX)
         dist[i]=-1;
     }
     
    for(auto ele:dist){
        cout<<ele<<" ";

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

shortestPath(vertex,edges,graph);
 return 0;
}