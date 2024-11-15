#include<bits/stdc++.h>
using namespace std;
 
// count extra number of edges in undirected graph so that all vertices are connected even if they are not connected

const int N=1e5+10;
// declare parent array

int parent[N];

// store size of each group
int Rank[N];

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

int main()
{

int vertices,edges;
cout<<"Enter the number of vertices and edges\n";
cin>>vertices>>edges;

for(int i=0;i<vertices;i++){
    make(i);
}

cout<<"Enter the edges to connect\n";
int countextraedges=0;

while(edges--){
    int u,v;
    cin>>u>>v;

    if(findpathcompression(u)!=findpathcompression(v))
    Unionbyrank(u,v);
    else
    countextraedges++;
}

cout<<"Extra number of edges : "<<countextraedges;

return 0;
}