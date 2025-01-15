#include<bits/stdc++.h>
using namespace std;

// not work for negative edge weight cycle but work for negative edge weight

    void flyodwashallshortestDistance(vector<vector<int>>&mat){
      
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
            if(mat[i][k]!=1e9 && mat[k][j]!=1e9)  //handle negative edge weight
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
              if(mat[i][j]==1e9)
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

vector<vector<int>>dist(vertices,vector<int>(vertices,-1));

cout<<"Enter the edges and their weights\n";

while(edges--){
    int u,v,w;
    cin>>u>>v>>w;
    dist[u][v]=w;
}
 
flyodwashallshortestDistance(dist);

return 0;
}