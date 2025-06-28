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
	
	//Function to find sum of weights of edges of the Minimum Spanning Tree.
    int spanningTree(int V, vector<vector<int>>adj[]){

        vector<pair<int,pair<int,int>>>edge;
        
        for(int i=0;i<V;i++){
            make(i);
        }
        
      for (int i = 0; i < V; i++) {
            for (auto& neighbor : adj[i]) {
                int v = neighbor[0];
                int wt = neighbor[1];
                if (i < v) // to avoid duplicate edges in undirected graph
                   edge.push_back({wt, {i, v}});
            }
        }

        
        sort(edge.begin(),edge.end());
        
        int costmst=0;
       cout<<"edges in mst\n";

        for(int i=0;i<edge.size();i++){
          int u=  edge[i].second.first;
         int v= edge[i].second.second;
            
        if(findpathcompression(u)!=findpathcompression(v)){
        costmst+=edge[i].first;
        Unionbyrank(u,v);
        cout<<u<<" "<<v<<endl;
        }
        }
        
        return costmst;
    }
 
int main()
{
    int vertices,edges;
    cout<<"enter number of vertices and edges\n";

    cin>>vertices>>edges;

    vector<vector<int>>adj[vertices];

    cout<<"enter edges and weight\n";

    for(int i=0;i<edges;i++){
        int u,v,wt;
        cin>>u>>v>>wt;
        adj[u].push_back({v,wt});
        adj[v].push_back({u,wt});
    }
    
 cout<<"minimum weight of tree: "<<spanningTree(vertices,adj);
 return 0;
}