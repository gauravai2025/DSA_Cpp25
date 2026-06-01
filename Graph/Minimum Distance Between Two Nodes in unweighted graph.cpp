#include<bits/stdc++.h>
using namespace std;

int bfs(int src,int dest,vector<vector<int>>&adj){
        
        vector<int>visited(adj.size()+1,0);
        
        queue<pair<int,int>>q;
        q.push({src,0});
        visited[src]=1;
        
        while(!q.empty()){
            
        int node=q.front().first;
        int lvl=q.front().second;
        q.pop();
        
        if(node==dest)
        return lvl;
        
        for(int nbr:adj[node]){
        if(!visited[nbr]){
         visited[nbr]=1;
         q.push({nbr,lvl+1});
        }    
        }
        }
        return -1;
    }
    
    int getMinimumDistance(int n, vector<pair<int, int>>&edges, int x, int y){
    
    vector<vector<int>>adj(n+1);
    for(auto edge:edges){
        int u=edge.first;
        int v=edge.second;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    return bfs(x,y,adj);
    }
 
int main()
{
    int vertices,src,dest,numedge;
    cout<<"enter number of vertices: ";
    cin>>vertices;
 
    cout<<"enter of edges:";
    cin>>numedge;
    vector<pair<int,int>>edges;
    cout<<"enter edges: ";

    while(numedge--){
     int u,v;
     cin>>u>>v;
     edges.push_back({u,v});   
    }

    cout<<"source and destination:";
    cin>>src>>dest;
 
 cout<<"minimum distance: "<<getMinimumDistance(vertices,edges,src,dest);
return 0;
}