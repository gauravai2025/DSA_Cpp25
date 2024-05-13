#include<bits/stdc++.h>
using namespace std;

const int N=1e5+10;
// declare parent array

int parent[N];

// store size of each group
int size[N];

void make(int node){
    // single node self parent
    parent[node]=node;

    // intial each group of size 1
    size[node]=1;
}

int find(int node){
    if(parent[node]==node)
    return node;
    // path compression
    return parent[node]= find(parent[node]);

}

void Union(int node1,int node2){
   int par1=find(node1);
   int par2=find(node2);

   // parent of both node not same then merge group else lies in same group

if(par1!=par2){

// find size of group 
if(size[node2]>size[node1])
// ensure always link small group to large group
  swap(par1,par2);


   parent[par2]=par1;

   size[par1]+=size[par2];
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
        Union(u,v);

    }

   // number of connected components/ number of distincts group
    int connected_ct=0;

    for(int i=1;i<=n;i++){
        if(find(i)==i)
        connected_ct++;
    }
   
   cout<<"number of distinct groups after connecting nodes \n"<<connected_ct<<endl;

    return 0;
}