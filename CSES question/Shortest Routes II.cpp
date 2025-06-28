#include<bits/stdc++.h>
using namespace std;

// not work for negative edge weight cycle but work for negative edge weight

    void flyodwashallshortestDistance(vector<vector<long long int>>&mat){
      
       int v=mat.size();

      for(int i=0;i<v;i++){
          for(int j=0;j<v;j++){

            if(mat[i][j]==-1)
             mat[i][j]=LONG_MAX; 

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

        for(int i=0;i<v;i++){
          for(int j=0;j<v;j++){
              if(mat[i][j]==LONG_MAX)
          mat[i][j]=-1;; 
          }
       
      }

    }
 
int main()
{

int vertices,edges,query;
cin>>vertices>>edges>>query;

vector<vector<long long int>>dist(vertices+1,vector<long long int>(vertices+1,-1));

while(edges--){

long long int u,v,w;
cin>>u>>v>>w;

if(dist[u][v]==-1){
dist[u][v]=w;
dist[v][u]=w;
}

else{
dist[u][v]=min(dist[u][v],w);
dist[v][u]=min(dist[v][u],w);
}

}
 
flyodwashallshortestDistance(dist);

while(query--){
int u,v;
cin>>u>>v;
cout<<dist[u][v]<<endl;
}

return 0;
}