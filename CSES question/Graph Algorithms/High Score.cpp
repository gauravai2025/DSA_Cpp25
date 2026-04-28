#include<bits/stdc++.h>
using namespace std;

  long long int  bellmanFord(int Vertices, vector<vector<int>>& edges) {

        vector<long long int>dist(Vertices+1,LONG_MAX);
        
        dist[1]=0;
        
        // relax each edge v times 
        
        for(int i=1;i<=Vertices;i++){
            for(int j=0;j<edges.size();j++){
              int u=edges[j][0];
               int v=edges[j][1];
              int w=edges[j][2];
               
                if(dist[u]!=LONG_MAX && (dist[u]+w)<dist[v])
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
        return -1;
        
       cout<<dist[Vertices];
    }
 
int main()
{
    int vertices,numedge;
    cin>>vertices>>numedge;

    vector<vector<int>>edges;


    while(numedge--){
        int u,v,w;
        cin>>u>>v>>w;
        edges.push_back({u,v,-w});
    }

cout<<bellmanFord(vertices,edges);
    return 0;
}