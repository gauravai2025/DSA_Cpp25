#include<bits/stdc++.h>
using namespace std;

// Given a weighted, undirected and connected graph where you have given adjacency list adj. You have to find the shortest distance of all the vertices from the source vertex src, and return a list of integers denoting the shortest distance between each node and source vertex src.

// Note: The Graph doesn't contain any negative weight edge.
#define p pair<long long int,int>

void dijkstra(vector<vector<pair<long long int,long long int>>>&adj, int src,vector<long long int>&dist) {
      
        int vertices=adj.size();
        priority_queue<p,vector<p>,greater<p>>pq;
        
        pq.push({0,src});
        dist[src]=0;
        
        while(!pq.empty()){
        
        auto top=pq.top();
        pq.pop();

        long long   int nodedistance=top.first;
        int topnode=top.second;
            
         if (nodedistance > dist[topnode])
         continue;
            
        for(auto nbr:adj[topnode]){
            
            if((nodedistance+nbr.second)<dist[nbr.first]){
            
            pq.push({nodedistance+nbr.second,nbr.first});
            dist[nbr.first]=nodedistance+nbr.second;
            }
        }
    }

    }
 
int main()
{
    int vertices,edges;
    cout<<"Enter the number of vertices and edges"<<endl;
    cin>>vertices>>edges;

    vector<vector<pair<long long  int,long long int>>>adj(vertices);

cout<<"Enter the edges in the format u v w"<<endl;

    while(edges--){
        int u,v,w;
        cin>>u>>v>>w;
        adj[u].push_back({v,w});
        adj[v].push_back({u,w});
    }

    int src;
    cout<<"Enter the source vertex"<<endl;
    cin>>src;

   vector<long long int>distance(vertices,LLONG_MAX);

    dijkstra(adj,src,distance);

    for(int i=0;i<vertices;i++){
    cout<<"The shortest distance between "<<src<<" and "<<i<<" is "<<distance[i]<<endl;
    }
    
    return 0;
}