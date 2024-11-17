#include<bits/stdc++.h>
using namespace std;

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

bool detectcyle(vector<vector<int>>&graph){

    for(auto edges:graph){
        int u=edges[0];
        int v=edges[1];

        int par1=findpathcompression(u);
        int par2=findpathcompression(v);

        if(par1==par2)
        return true;

        Unionbyrank(u,v);
    }
    return false;

}

//check all node lies in same group/ component or not

bool allnodepathexists(int vertices){ 
    int cnt=0;
    for(int i=0;i<vertices;i++){
        if(parent[i]==i)
        cnt++;
    }

    return cnt==1;
}

 
int main()
{

int vertices,edges;
cout<<"Enter the number of vertices and edges: "<<endl;
cin>>vertices>>edges;

vector<vector<int>>graph;

while(edges--){
    int u,v;
    cin>>u>>v;
    graph.push_back({u,v});
}

for(int i=1;i<=vertices;i++){
    make(i);
}

if(detectcyle(graph))
cout<<"Graph is not tree\n";

else if(!allnodepathexists(vertices))
 cout<<"Graph is not tree\n";

else
cout<<"Graph is tree\n";
 
return 0;
}