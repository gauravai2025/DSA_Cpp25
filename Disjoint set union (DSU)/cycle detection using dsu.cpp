#include<bits/stdc++.h>
using namespace std;

// declare parent array

int parent[100001];

// store size of each group
int Rank[100001];

void make(int node){
    // single node self parent
    parent[node]=node;

    // intial each group of size 1
    Rank[node]=0;
}

int findpathcompression(int node){
    if(parent[node]==node)
    return node;
    // path compression
    return parent[node]= findpathcompression(parent[node]);

}

void Unionbyrank(int node1,int node2){
   int par1=findpathcompression(node1);
   int par2=findpathcompression(node2);

   // parent of both node not same then merge group else lies in same group

if(par1!=par2){

// find size of group 
if(Rank[par2]>Rank[par1])
// ensure always link small group to large group
  swap(par1,par2);

   parent[par2]=par1;
   
   if(Rank[par1]==Rank[par2])
   Rank[par1]++;
   }
}

 bool isCycle(vector<vector<int>>& adj) {
        
     int vertices=adj.size();
      
      for(int i=0;i<vertices;i++){
          make(i);
      }
      
      for(int i=0;i<vertices;i++){
        
              int u=adj[i][0];
              int v=adj[i][1];
              
              if(u>v){
          // check cycle
          if(findpathcompression(u)==findpathcompression(v))
          return 1;
          
          Unionbyrank(i,adj[i][j]);
          
      }
      
      }
        return 0;
      
      }
      

 
int main()
{
    int vertices,edges;
    cout<<"Enter the number of vertices and edges\n";
    cin>>vertices>>edges;

    vector<vector<int>>edge(vertices); // adjacency list

    while(edges--){
        int u,v;
        cin>>u>>v;
        edge[u].push_back(v);
        edge[v].push_back(u);
    }

    if(isCycle(edge))
    cout<<"Cycle is present\n";
    else
    cout<<"Cycle is not present\n";

    return 0;
}