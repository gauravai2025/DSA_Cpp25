#include<bits/stdc++.h>
using namespace std;

class Graph{
    public:
    unordered_map<int,list<int>>adj;

    void addEdge(int u,int v){
       // undirected graph
        // create edge from u to v
        adj[u].push_back(v);
        // create edge from v to u
        adj[v].push_back(u);
    }


    void dfs(unordered_map<int,bool>&visited,int node,vector<int>&componenet ){
  componenet.push_back(node);
        // mark node as visited
        visited[node]=true;
      
        // hr connected node ke liye recursive call
        for (auto &it : adj[node]) {
        if (!visited[it]) {
          dfs(visited, it, componenet);
         // componenet.push_back(it);
        }
    }
 }


};

 
int main()
{
cout<<"enter number of nodes\n";
int vertex;
cin>>vertex;

cout<<"enter number of edges \n";
int edge;
cin>>edge;
  Graph g;
    

 for(int i=0;i<edge;i++){
    int u,v;
    cin>>u>>v;
    // creating undirected graph
    g.addEdge(u,v);
   
 }

//mark all nodes as unvisited
unordered_map<int,bool>visited;
// to store bfs traversal
vector<vector<int>>ans;
// call bfs for each unvisited node
 for(int i=0;i<vertex;i++){
    if(!visited[i])
{
    vector<int>compo;
    g.dfs(visited,i,compo);
    ans.push_back(compo);
    
}
 }


 cout<<"bfs of given graph\n";
  for(auto &it:ans){
    for(int &it2:it){
        cout<<it2<<" ";
    }
      cout<<endl;
  }

    return 0;
}