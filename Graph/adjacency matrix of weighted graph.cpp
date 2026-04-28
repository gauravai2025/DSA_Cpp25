#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int node,edge;
    cout<<"enter number of nodes and edges in graph: \n";
    cin>>node>>edge;

    vector<vector<int>>edgelist;
    vector<vector<int>>mat(node,vector<int>(node,0));
    cout<<"enter edges with weight: \n";

    while(edge--){
    int u,v,w;
    cin>>u>>v>>w;
    edgelist.push_back({u,v,w});
    mat[u][v]=w;
    // mat[v][u]=w; // for undirected graph
    }
    
     vector<vector<pair<int,int>>>adj(node);
     // converting adjacency matrix to adjacency list

      for(int i=0;i<node;i++){
        for(int j=0;j<node;j++){
          if(mat[i][j]>0 && i!=j)
              adj[i].push_back({j,mat[i][j]});
         
      }
      }

      // printing adjacency matrix
        cout<<"adjacency matrix:\n";

      for(int i=0;i<node;i++){
        for(int j=0;j<node;j++){
           cout<<mat[i][j]<<" ";
      }
      cout<<endl;
    }

    cout<<"adjacency list:\n";

    // printing adjacency list

    for(int i=0;i<node;i++){
        cout<<i<<" : ";

     for(auto ele:adj[i]){
        cout<<ele.first<<","<<ele.second<<" ";
     }
     cout<<endl;
    }

    return 0;
}