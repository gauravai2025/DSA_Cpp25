// Distinct colors in subtrees
// Given an undirected connected tree with N coloured nodes (colours denoted with integers 1 to 
// N), numbered from 1 to N and rooted at node 1.Your task is to determine, for each node, the number of distinct colours present in its subtree.


// Note:a subtree rooted at a specific node might contain several nodes with duplicate colors. You must count only the unique colors present in that entire subtree (including the root of that subtree).
// https://cdn.codechef.com/images/learning/graphs-trees/colored-tree.png

#include<bits/stdc++.h>
using namespace std;

void countcolor(int src,vector<int>&visited,vector<vector<int>>&adj,set<int>&st,vector<int>&color){
    
    visited[src]=1;
    st.insert(color[src-1]);
    
    for(int nbr:adj[src]){
        if(!visited[nbr])
        countcolor(nbr,visited,adj,st,color);
    }
}

vector<int> distinctColorsInSubtrees(int N, vector<int>& C, vector<vector<int>>& edges) {
   
    vector<vector<int>>adj(N+1);
    
    for(auto edge:edges){
    int u=edge[0];
    int v=edge[1];
    adj[u].push_back(v);
    }
   
   vector<int>count;
   
   for(int i=1;i<=N;i++){
    vector<int>visited(N+1,0);
    set<int>st;
    countcolor(i,visited,adj,st,C);
    count.push_back(st.size());
   }
   return count;
}

int main()
{
    int edge,v;
    cout<<"enter number of edge and vertex";
    cin>>edge>>v;
     
    cout<<"enter edges:";
    vector<vector<int>>edges;

    while(edge--){
      int u,v;
      cin>>u>>v;  
      edges.push_back({u,v});
    }

    vector<int>color(v);
    cout<<"enter color code for every node: ";
    for(int i=0;i<v;i++){
       cin>>color[i]; 
    }

vector<int>ans=distinctColorsInSubtrees(v,color,edges);
cout<<"number of distinct color for every node in its subtree: ";

for(int cnt:ans){
cout<<cnt<<" ";
}
return 0;
}