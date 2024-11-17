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


    vector<int> findRedundantConnection(vector<vector<int>>& edges){

      int vertices=edges.size();
        
       int ansidx=-1;
      
      for(int i=1;i<=vertices;i++){
          make(i);
      }
      
 for(int i=0;i<vertices;i++){  

    int u=edges[i][0];
    int v=edges[i][1];
                
    // check cycle
        if(findpathcompression(u)==findpathcompression(v))
        ansidx=i;
        
        Unionbyrank(u,v);
      }
      
    vector<int>ans;
   
    ans.push_back(edges[ansidx][0]);
    ans.push_back(edges[ansidx][1]);
      
    return ans;
        
    }
 
int main()
{

  int vertices,edg;
    cout<<"Enter the number of vertices and edges\n";
    cin>>vertices>>edg;

    vector<vector<int>>edges; // adjacency list

    while(edg--){
        int u,v;
        cin>>u>>v;
        edges.push_back({u,v});
    }
 
 vector<int>ans=findRedundantConnection(edges);

    if(ans.size()==0)
    cout<<"No cycle found\n";
    else{
    cout<<"Cycle found  one of the edges form cycle \n";

    cout<<ans[0]<<" "<<ans[1]<<"\n";
    }
 
    return 0;
}