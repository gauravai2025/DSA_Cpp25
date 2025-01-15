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

 
int main()
{
    int n,q;
    cin>>n>>q;

    for(int i=1;i<=n;i++){
        make(i);
    }

   string type;

    int u,v;

    while(q--){

      cin>>type;
      cin>>u>>v;
      
        if(type=="union")
        Unionbyrank(u,v);

        else{
        
        if(findpathcompression(u)==findpathcompression(v))
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
        }

    }

    return 0;
}