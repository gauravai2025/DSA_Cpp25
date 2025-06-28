#include<bits/stdc++.h>
using namespace std;

// kosaraju's algorithm to find strongly connected components in a directed graph
// A strongly connected component (SCC) is a maximal subgraph where every vertex is reachable from every other vertex in the subgraph.

void dfs(vector<vector<int>>&adj,int src,vector<int>&visited, vector<int>&comp){
        
        visited[src]=1;
        comp.push_back(src);
        
        for(int  nbr:adj[src]){
         if(!visited[nbr])
         dfs(adj,nbr,visited,comp);
        }  
    }
    
    void dfstoposort(vector<vector<int>> &adj,int src,stack<int>&st,vector<int>&visited){
        
        visited[src]=1;
        
        for(int  nbr:adj[src]){
         if(!visited[nbr])
         dfstoposort(adj,nbr,st,visited);
        }
        
        st.push(src);
    }
    
void kosaraju(vector<vector<int>> &adj,vector<vector<int>>&component){
        
        int vertex=adj.size();
        
        stack<int>st;
        vector<int>visited(vertex,0);
        
        for(int i=0;i<vertex;i++){
        if(!visited[i])
        dfstoposort(adj,i,st,visited);
        }
        
        // transpose reverse graph of graph
        
        vector<vector<int>>adjrev(vertex);
        
        for(int i=0;i<vertex;i++){
            for(int node:adj[i]){
              adjrev[node].push_back(i);  
            }
        }
        
        vector<int>visited2(vertex,0);
        
        while(!st.empty()){
            
        int node=st.top();
        st.pop();
        vector<int> comp;
        if(!visited2[node]){
            dfs(adjrev,node,visited2,comp);
        }

        if(!comp.empty())
        component.push_back(comp);

        }
    }
 
int main()
{
int vertex,edge;
cin>>vertex>>edge;

vector<vector<int>>adj(vertex);

while(edge--){

int u,v;
cin>>u>>v;
adj[u].push_back(v);
}

vector<vector<int>>component;

kosaraju(adj,component);

cout<<"number of stringly connected component\n";
cout<<component.size()<<endl;

for(auto comp:component){
    for(auto node:comp){
    cout<<node<<" ";
    }
    cout<<endl;
}
return 0;
}