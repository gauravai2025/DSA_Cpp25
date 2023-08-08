#include<bits/stdc++.h>
using namespace std;

class Graph{
    public:
    unordered_map<int,set<int>>adj;

    void addEdge(int u,int v){
       // directed graph
        // create edge from u to v
        adj[u].insert(v);
        
    }


 void bfs(vector<int>&ans ){
//mark all nodes as unvisited
unordered_map<int,bool>visited;
        queue<int>q;
        q.push(0);
        // mark node as visited
        visited[0]=true;
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


// to store bfs traversal
vector<int>ans;

    g.bfs(ans);
    

 cout<<"bfs of given graph\n";
  for(auto &it:ans){
      cout<<it<<" ";
  }

    return 0;
}