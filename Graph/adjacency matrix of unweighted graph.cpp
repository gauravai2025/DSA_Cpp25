#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int node,edge;
    cout<<"enter number of nodes and edges in graph: \n";
    cin>>node>>edge;

    vector<vector<int>>edgelist;
    vector<vector<int>>mat(node,vector<int>(node,0));
    cout<<"enter edges: \n";

    while(edge--){
    int u,v;
    cin>>u>>v;
    edgelist.push_back({u,v});
    mat[u][v]=1;
    // mat[v][u]=1; // for undirected graph
    }
    
     vector<vector<int>>adj(node);
     // converting adjacency matrix to adjacency list

      for(int i=0;i<node;i++){
        for(int j=0;j<node;j++){
          if(mat[i][j]==1 && i!=j)
              adj[i].push_back(j);
         
      }
      }

      // printing adjacency matrix

      for(int i=0;i<node;i++){
        for(int j=0;j<node;j++){
           cout<<mat[i][j]<<" ";
      }
      cout<<endl;
    }

    // printing adjacency list

    for(int i=0;i<node;i++){
        cout<<i<<" : ";

     for(int ele:adj[i]){
        cout<<ele<<" ";
     }
     cout<<endl;
    }

    return 0;
}