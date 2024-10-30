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
    int n;
    cout<<"enter number of nodes\n";
    cin>>n;

    for(int i=0;i<n;i++){
        make(i);
    }

    int numedge;
    cout<<"enter number of queries to connect nodes ";
    cin>>numedge;
    
    cout<<"enter node value to connect\n";
    int u,v;


    while(numedge--){
        cin>>u>>v;
        Unionbyrank(u,v);

    }
     
     int src,dest;
     cout<<"enter source and destination node \n";
     cin>>src>>dest;   

     int par1=findpathcompression(src);
    int par2=findpathcompression(dest);
      

      if(par1==par2)
      cout<<" path exist\n";
      else
      cout<<"path not exist\n";

    return 0;
}