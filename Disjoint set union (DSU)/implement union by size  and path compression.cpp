#include<bits/stdc++.h>
using namespace std;

const int N=1e5+10;
// declare parent array

int parent[N];

// store size of each group
int Size[N];

void make(int node){
    // single node self parent
    parent[node]=node;

    // intial each group of size 1
    Size[node]=1;
}

int findpathcompression(int node){
    if(parent[node]==node)
    return node;
    // path compression
    return parent[node]= findpathcompression(parent[node]);

}

void Unionbysize(int node1,int node2){
   int par1=findpathcompression(node1);
   int par2=findpathcompression(node2);

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

 
int main()
{
    int n;
    cout<<"enter number of nodes\n";
    cin>>n;

    for(int i=1;i<=n;i++){
        make(i);
    }

    int k;
    cout<<"enter number of queries to connect nodes ";
    cin>>k;
    
    cout<<"enter node value to connect\n";
    int u,v;


    while(k--){
        cin>>u>>v;
        Unionbysize(u,v);

    }

   // number of connected components/ number of distincts group  in undirected graph
    int connected_ct=0;

    for(int i=1;i<=n;i++){
        if(findpathcompression(i)==i)
        connected_ct++;
    }
   
   cout<<"number of distinct groups after connecting nodes \n"<<connected_ct<<endl;

   unordered_map<int,vector<int>>comp;
    
     for(int i=0;i<v;i++){
      comp[findpathcompression(i)].push_back(i);
     }
     
     for(auto it:comp){

        cout<<"group "<<it.first<<" nodes are ";
        for(auto i:it.second){
            cout<<i<<" ";
        }
        cout<<endl;
     }

    return 0;
}