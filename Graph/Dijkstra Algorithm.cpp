#include<bits/stdc++.h>
using namespace std;

// Given a weighted, undirected and connected graph where you have given adjacency list adj. You have to find the shortest distance of all the vertices from the source vertex src, and return a list of integers denoting the shortest distance between each node and source vertex src.

// Note: The Graph doesn't contain any negative weight edge.

vector<int> dijkstra(vector<vector<pair<long long int,long long int>>>&adj, int src,vector<long long int>&dist) {
      
        int vertices=adj.size();
        set<pair<long long int,long long int>>st;
        
        st.insert({0,src});
        dist[src]=0;
        
        while(!st.empty()){
            
            auto top=*(st.begin());
          long long   int nodedistance=top.first;
            int topnode=top.second;
            
            st.erase(st.begin());
            
            for(auto nbr:adj[topnode]){
                
                if((nodedistance+nbr.second)<dist[nbr.first]){
                    
                auto findnode=st.find({dist[nbr.first],nbr.first});
                
                if(findnode!=st.end())
                st.erase(findnode);
                
                st.insert({nodedistance+nbr.second,nbr.first});
                dist[nbr.first]=nodedistance+nbr.second;
                }
            }
        }
        
        return dist;
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
   
   vector<long long int>distance( vertices,LONG_MAX);

    dijkstra(adj,src,distance);


    for(int i=0;i<vertices;i++){
        cout<<"The shortest distance between "<<src<<" and "<<i<<" is "<<distance[i]<<endl;
    }
    
    return 0;
}