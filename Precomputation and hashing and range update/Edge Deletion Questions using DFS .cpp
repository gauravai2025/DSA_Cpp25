#include<bits/stdc++.h>
using namespace std;

// Given an undirected tree with N nodes labeled from 1 to N.

// Each node has a certain weight assigned to it given by an integer array A of size N.

// You need to delete an edge in such a way that the Product between the sum of weights of nodes in one subtree with the sum of weights of nodes in other subtree is maximized.

// Return this maximum possible product modulo 109 + 7.

int const mod=1e9+7;

  void precomputedfs(int src,int par, vector<vector<int>>&graph, vector<int>&subtree_sum,vector<int>&val){

        subtree_sum[src]+=val[src];
        
    for(auto child:graph[src]){
        if(child==par) continue;  // check visited

    precomputedfs(child,src,graph,subtree_sum,val);
    subtree_sum[src]+=subtree_sum[child];

    }


    }

int main()
{
    int vertexes,numedges;
    cout<<"Enter the number of vertexes and edges: ";
    cin>>vertexes;
    
    numedges=vertexes-1;
    vector<int>val(vertexes+1,0);

    cout<<"Enter the values of vertexes: \n";

    for(int i=1;i<=vertexes;i++){
        cin>>val[i];
    }

    vector<vector<int>>graph(vertexes+1); // 2D vector of size vertexes with all elements 0  // adjacency list

    cout<<"Enter the edges: \n";
    vector<vector<int>>edges;

    for(int i=0;i<numedges;i++){
        int u,v;
        cin>>u>>v;
        graph[u].push_back(v);
        graph[v].push_back(u);  // for undirected graph

        edges.push_back({u,v});
    }

    vector<int>subtree_sum(vertexes+1,0);

    precomputedfs(1,-1,graph,subtree_sum,val);

    // check all possibility of removing edge and calculate the product of subtree sum

    long long int ans=0;

    for(int i=2;i<=vertexes;i++){
      
        long long int product=0;

        long long rootsum=subtree_sum[1];
        long long nodesum=subtree_sum[i];
        rootsum-=nodesum;
        product=rootsum*nodesum;
        ans=max(ans,product);
    }

    ans%=mod;

    cout<<ans<<endl;

     
   
     
}