#include<bits/stdc++.h>
using namespace std;

// tarjan's algorithm to find bridges in a graph

int timer=1;

    void dfsbridge(int src,int parent,vector<bool>&visited, vector<vector<int>>&adj,vector<int>&tin, vector<int>&low,vector<vector<int>>&bridges){
        
        visited[src]=1;
        tin[src]=low[src]=timer;
        timer++;

        for(int child:adj[src]){
        if(child==parent) continue;

        if(!visited[child]){
         dfsbridge(child,src,visited,adj,tin,low,bridges);
         low[src]=min(low[src],low[child]);

         // check edge child--src as bridge

         if(low[child]>tin[src])
         bridges.push_back({child,src});
        }

        else{
    low[src]=min( low[src],low[child]);
        }



        }

    }


void criticalConnections(int n, vector<vector<int>>& connections,vector<vector<int>>&bridges) {

    // creating adjacency list
     vector<vector<int>>adj(n);

    for(int i=0;i<connections.size();i++){
        
        int u=connections[i][0];
        int v=connections[i][1];
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    vector<bool>visited(n,0);
    vector<int>tin(n,0);
    vector<int>low(n,0);

  

    dfsbridge(0,-1,visited,adj,tin,low,bridges);

    }

 
int main()
{
    int vertex,edge;
    cout<<"enter number of vertex and edge\n";
    cin>>vertex>>edge;

    vector<vector<int>>connections;

    while(edge--){
        int u,v;
        cin>>u>>v;
     connections.push_back({u,v});
    }

     vector<vector<int>>bridges;

    criticalConnections(vertex,connections,bridges);

    cout<<"all critical connection or bridges: \n";
      
      for(auto edge:bridges){
        cout<<edge[0]<<" "<<edge[1]<<endl;
      }
 
    return 0;
}