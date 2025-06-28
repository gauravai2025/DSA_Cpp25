#include<bits/stdc++.h>
using namespace std;

// You are given an undirected graph consisting of v vertices and a list of edges, along with an integer m. Your task is to determine whether it is possible to color the graph using at most m different colors such that no two adjacent vertices share the same color. Return true if the graph can be colored with at most m colors, otherwise return false.

// Note: The graph is indexed with 0-based indexing.

 bool checkcolor(vector<vector<int>>&adj,int idx,int currcolor, vector<int>&color){
        
        // color[idx]=currcolor;
        
            for(auto nbr:adj[idx]){
                if(color[nbr]==currcolor)
                return 0;
            }
        
        return 1;
    }
    
    bool solve(vector<vector<int>>&adj,int currvrtx,int v,int m,vector<int>&color){
    
    if(currvrtx>=v)
    return 1;
    
    for(int i=1;i<=m;i++){
        
    if(checkcolor(adj,currvrtx,i,color)){    
    color[currvrtx]=i; 
    if(solve(adj,currvrtx+1,v,m,color))
    return 1;
    // backtrack
     color[currvrtx]=-1; 
    }
        
    }
    
    return 0;
    }

 
    bool graphColoring(int v, vector<pair<int, int>>& edges, int m) {
       
        vector<int>color(v,-1);
        vector<vector<int>>adj(v);
        
        for(auto edge:edges){
            
        int u=edge.first;
        int v=edge.second;
        adj[u].push_back(v);
        adj[v].push_back(u);
        
        }
        
        return solve(adj,0,v,m,color);
    }
 
int main()
{

int vertex,edge;
cin>>vertex>>edge;

vector<pair<int, int>>edges;

while(edge--){
    int u,v;
    cin>>u>>v;
    edges.push_back({u,v});
}

int m;
cin>>m;

if(graphColoring(vertex,edges,m))
cout<<"possible to color graph\n";
else
cout<<"not possible\n";
    return 0;
}