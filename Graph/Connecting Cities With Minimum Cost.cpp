#include<bits/stdc++.h>
using namespace std;

// There are N cities numbered from 1 to N.

// You are given connections, where each connections[i] = [city1, city2, cost] represents the cost to connect city1 and city2 together.  (A connection is bidirectional: connecting city1 and city2 is the same as connecting city2 and city1.)

// Return the minimum cost so that for every pair of cities, there exists a path of connections (possibly of length 1) that connects those two cities together.  The cost is the sum of the connection costs used. If the task is impossible, return -1.


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


void connnect_city(vector<vector<int>>&edges,int vertex){

    sort(edges.begin(),edges.end());

    for(int i=1;i<=1e4;i++){
        make(i);
    }

    int mst=0;
    int edgecnt =0;

    for(auto edge:edges){

      int wt=edge[0];
      int u=edge[1];
      int v=edge[2]; 

    if(findpathcompression(u)!=findpathcompression(v)){
    mst+=wt;
    Unionbyrank(u,v);
    edgecnt++;

    }

    }

    if(edgecnt!=vertex-1)
    cout<<"not possible to connect\n";
    else
    cout<<"minimum cost to connect:  "<<mst;
}
 
int main()
{

int vertex,edge;
cout<<"enter number of vertex and edge\n";
cin>>vertex>>edge;

vector<vector<int>>edges;

while(edge--){
    int u,v,wt;
    cin>>u>>v>>wt;
    edges.push_back({wt,u,v});
}

connnect_city(edges,vertex);

    return 0;
}