#include<bits/stdc++.h>
using namespace std;

// not work for negative edge weight cycle but work for negative edge weight
// work for both directed and undirected graph

    void flyodwashallshortestDistance(vector<vector<long long int>>&mat){
      
      int v=mat.size();
      for(int i=0;i<v;i++){
          for(int j=0;j<v;j++){

              if(mat[i][j]==-1)
             mat[i][j]=1e9; 

             if(i==j)  // distance of node to itself is 0
            mat[i][j]=0;
          }
      }
      
      for(int k=0;k<v;k++){
            for(int i=0;i<v;i++){
          for(int j=0;j<v;j++){
            if(mat[i][k]!=LONG_MAX && mat[k][j]!=LONG_MAX)  //handle negative edge weight
            mat[i][j]=min(mat[i][j],mat[i][k]+mat[k][j]);  
      }
    }
    
      }

    // check for negative cycle
      for(int i=0;i<v;i++){
            if(mat[i][i]<0){
                cout<<"Negative cycle exist\n";
                return;
            }
        }
      
      cout<<"All pair shortest distance\n";

        for(int i=0;i<v;i++){
          for(int j=0;j<v;j++){
              if(mat[i][j]==LONG_MAX)
              cout<<"INF ";
              else
             cout<<mat[i][j]<<" "; 
          }
        cout<<endl;
      }

    }
 
int main()
{

int vertices,edges;
cout<<"Enter the number of vertices and edges\n";
cin>>vertices>>edges;

vector<vector<long long int>>dist(vertices,vector<long long int>(vertices,-1));

cout<<"Enter the edges and their weights\n";

while(edges--){
    int u,v,w;
    cin>>u>>v>>w;
    dist[u][v]=w;

    // handle undirected graph
    // dist[v][u]=w;

    // handle multiple/parellel edges between two nodes
    // if(dist[u][v]==-1){
    //     dist[u][v]=w;
    //     dist[v][u]=w;
//   }

// else{
//     dist[u][v]=min(dist[u][v],w);
//     dist[v][u]=min(dist[v][u],w);
// }
}
 
flyodwashallshortestDistance(dist);

return 0;
}