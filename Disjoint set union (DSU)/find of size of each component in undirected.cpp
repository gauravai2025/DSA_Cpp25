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


 void findsize(int n, vector<vector<int>>&edges) {

        for (auto& vec : edges) {

            int u = vec[0];
            int v = vec[1];

            Unionbyrank(u, v);
        }

        unordered_map<int, int> mp;

  for (int i = 0; i < n; i++){

        int par = findpathcompression(i);
        mp[par]++;

        }


        for (auto& it : mp){

        long long size = it.second;
        cout<<"of group: "<<it.first<<" "<<size<<"\n";
            
        }

    }

 
int main()
{
    int vertices,edg;
    cout<<"Enter the number of vertices and edges\n";
    cin>>vertices>>edg;

    for(int i=0;i<vertices;i++){
        make(i);
    }

    cout<<"entre the edges\n";
    vector<vector<int>>edges; // adjacency list
   
   int u,v;
   while(edg--){
    cin>>u>>v;
    edges.push_back({u,v});
    }

   findsize(vertices,edges);

    return 0;
}