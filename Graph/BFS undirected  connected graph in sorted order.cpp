#include<bits/stdc++.h>
using namespace std;

class Graph{
    public:
    unordered_map<int,set<int>>adj;

    void addEdge(int u,int v){
       // undirected graph
        // create edge from u to v
        adj[u].insert(v);
        // create edge from v to u
        adj[v].insert(u);
    }


    void bfs(unordered_map<int,bool>&visited,int node,vector<int>&ans ){

        queue<int>q;
        q.push(node);
        // mark node as visited
        visited[node]=true;
        while(!q.empty()){
        
            int frontnode=q.front();
            // push frontnode in ans
            ans.push_back(frontnode);
            q.pop();
            // traverse all adjacent nodes of frontnode
            for(auto &it:adj[frontnode]){
                if(!visited[it]){
                    q.push(it);
                    // mark node as visited
                    visited[it]=true;
                }
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
vector<int>ans;
// call bfs for each unvisited node
 for(int i=0;i<vertex;i++){
    if(!visited[i])
{
    g.bfs(visited,i,ans);
    
}
 }


 cout<<"bfs of given graph\n";
  for(auto &it:ans){
      cout<<it<<" ";
  }

    return 0;
}