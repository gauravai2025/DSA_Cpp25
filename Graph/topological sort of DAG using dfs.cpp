#include<bits/stdc++.h>
using namespace std;

class Graph{
    public:
    unordered_map<int,list<int>>adj;

    void addEdge(int u,int v){
       // directed graph
        // create edge from u to v
        adj[u].push_back(v);
      
    }


    void dfs(unordered_map<int,bool>&visited,int node,stack<int>&toposrt
 ){
        // mark node as visited
        visited[node]=true;
      
        // hr connected node ke liye recursive call
        for (auto &child : adj[node]) {
        if (!visited[child]) {
          dfs(visited, child, toposrt);
        }
    }

    toposrt.push(node);
 }


};

 
int main()
{
    
int vertex;
cout<<"enter number of vertex\n";
cin>>vertex;

int edge;
cout<<"enter number of edge\n";
cin>>edge;
  Graph g;
    

 for(int i=0;i<edge;i++){
    int u,v;
    cin>>u>>v;
    // creating directed graph
    g.addEdge(u,v);
   
 }

//mark all nodes as unvisited
unordered_map<int,bool>visited;
// to store a valid order to study course
stack<int>toposrt;

// call dfs for each componenet
 for(int i=0;i<vertex;i++){
    if(!visited[i])
{
    g.dfs(visited,i,toposrt);
    
    
}

 }

cout<<"valid topological sort: \n";

 while(!toposrt.empty()){

    cout<<toposrt.top()<<" ";
    toposrt.pop();

 }



    return 0;
}