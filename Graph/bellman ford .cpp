#include<bits/stdc++.h>
using namespace std;

  void bellmanFord(int Vertices, vector<vector<int>>& edges,int src) {

        vector<int>dist(Vertices,1e9);
        
        dist[src]=0;
        
        // relax each edge v times 
        
        for(int i=1;i<=Vertices;i++){
            for(int j=0;j<edges.size();j++){
              int u=edges[j][0];
               int v=edges[j][1];
              int w=edges[j][2];
               
                if(dist[u]!=1e9 && (dist[u]+w)<dist[v])
               dist[v]=dist[u]+w;
            }
        }
        
        bool flag=0;
        // check for negative cycle
        for(int j=0;j<edges.size();j++){
          int u=edges[j][0];
          int v=edges[j][1];
           int w=edges[j][2];
           
           if(dist[u]!=1e9 && (dist[u]+w)<dist[v]){
           dist[v]=dist[u]+w;
           flag=1;
        }
            
        }
        
        if(flag)
        cout<<"Negative cycle exists\n";
        else{
        for(int i=0;i<Vertices;i++){
            cout<<"shortest distance between "<<src<<" and "<<i<<dist[i]<<" ";
        }

        }  
    }
 
int main()
{
    int vertices,numedge;
    cout<<"Enter the number of vertices and edges\n";
    cin>>vertices>>numedge;

    vector<vector<int>>edges;

    cout<<"Enter the edges and their weights\n";

    while(numedge--){
        int u,v,w;
        cin>>u>>v>>w;
        edges.push_back({u,v,w});
    }

int src;
cout<<"Enter the source vertex\n";
cin>>src;

bellmanFord(vertices,edges,src);
    return 0;
}