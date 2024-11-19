#include<bits/stdc++.h>
using namespace std;

  void bfs(vector<vector<pair<int,int>>>&adj,int src, vector<int>&lvl){
        
        deque<int>dq;
        dq.push_back(src);
        lvl[src]=0;
        
        while(!dq.empty()){
            
        int node=dq.front();
         dq.pop_front();
        
        for(auto nbr:adj[node]){
            
            int child=nbr.first;
            int wt=nbr.second;
            
            if(lvl[node]+wt<lvl[child]){
            lvl[child]=lvl[node]+wt;
            
            if(wt==0)
            dq.push_front(child);
            else
            dq.push_back(child);
           
            }
            
        }
         
        }
    }

 int minimumEdgeReversal(vector<vector<int>> &edges,int n,int src,int dst)
{
              
        vector<vector<pair<int,int>>>adj(n+1);  
        
        for(auto edge:edges){
            int u=edge[0];
            int v=edge[1];
            
            if(u==v)  continue; // avoid self loop
            
            adj[u].push_back({v,0});
            adj[v].push_back({u,1});  // reverse edge
            
        }
        
        vector<int>lvl(n+1,INT_MAX);
        
        bfs(adj,src,lvl);
         
        int minedgerev=lvl[dst];
        
        if(minedgerev==INT_MAX)
        minedgerev=-1;
         
        return minedgerev;
        
        }
 
int main()
{

int vertices,edges;
cout<<"Enter the number of vertices and edges: \n";
cin>>vertices>>edges;

vector<vector<int>>directedgraph;

cout<<"Enter the edges of directed graph:\n ";
int u,v;

while(edges--){
    cin>>u>>v;
    directedgraph.push_back({u,v});
}

int source,destination;
cout<<"Enter the source and destination: \n";
cin>>source>>destination;


cout<<"minimum edge reversal: "<< minimumEdgeReversal(directedgraph,vertices,source,destination);

    return 0;
}