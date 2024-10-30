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

    int connectingcities(vector<vector<int>>&edges, int vertices)
    {
        vector<pair<int,pair<int,int>>>edge;

        if(edges.size()<vertices-1)
        return -1;

        
        for(int i=1;i<=vertices;i++){
            make(i);
        }
        
      for (int i = 0; i <edges.size(); i++) {

        int u = edges[i][0];
        int v = edges[i][1];
        int wt = edges[i][2];
        
        if (u< v) // to avoid duplicate edges in undirected graph
            edge.push_back({wt, {u, v}});
            
        }

        sort(edge.begin(),edge.end());
        
        int costmst=0;
        
        for(int i=0;i<edge.size();i++){
          int u=  edge[i].second.first;
         int v= edge[i].second.second;
            
        if(findpathcompression(u)!=findpathcompression(v)){
        costmst+=edge[i].first;
        Unionbyrank(u,v);
        }
        }
        
        return costmst;
    }
 
int main()
{
    int vertices,numedge;
    cout<<"enter number of vertices and edges\n";

    cin>>vertices>>numedge;

    vector<vector<int>>edges;

    cout<<"enter edges and weight\n";

    for(int i=0;i<numedge;i++){
        int u,v,wt;
        cin>>u>>v>>wt;
       edges.push_back({u,v,wt});
    }
    
    cout<<connectingcities(edges,vertices);
 
    return 0;
}