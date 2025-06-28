#include<bits/stdc++.h>
using namespace std;

    vector<int>parent;
    vector<int>Size;

void make(int node){
    // single node self parent
    parent[node]=node;

    // intial each group of size 1
    Size[node]=1;
}

int findparent(int node){
    if(parent[node]==node)
    return node;
    // path compression
    return parent[node]= findparent(parent[node]);

}


void unionvertex(int node1,int node2){
   int par1=findparent(node1);
   int par2=findparent(node2);

   // parent of both node not same then merge group else lies in same group

if(par1!=par2){

// find size of group 
if(Size[par2]>Size[par1])
// ensure always link small group to large group
  swap(par1,par2);

   parent[par2]=par1;

   Size[par1]+=Size[par2];
   }
}


    int countCompleteComponents(int n, vector<vector<int>>& edges) {
        
      Size.resize(n);
      parent.resize(n);

     for(int i=0;i<n;i++){
        make(i);
     }  

    vector<int>edgescnt(n); 

    for(auto edge:edges){

     int u=edge[0];
     int v=edge[1];

    unionvertex(u,v); 
    }  
   
    for(auto edge:edges){

     int u=edge[0];
     int v=edge[1];

    int par=findparent(u);
    edgescnt[par]++;

    }  

    int ans=0;

    for(int i=0;i<n;i++){

     if(findparent(i)==i){

     int par=findparent(i);
     int edge=edgescnt[par];
     int cntnode=Size[par];

    if(cntnode*(cntnode-1)==2*edge)
    ans++; 
    }

    }

    return ans;

    }
 
int main()
{

int vertices,numedge;
cout<<"enter number of vertices and edges\n";
cin>>vertices>>numedge;

cout<<"enter edges\n";

vector<vector<int>>edges;

while(numedge--){
  int u,v;
  cin>>u>>v;
  edges.push_back({u,v});  
}

cout<<"number of complete connected component: "<<countCompleteComponents(vertices,edges);
return 0;
}