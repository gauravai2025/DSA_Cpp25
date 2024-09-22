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

    
    void calculate_indegree(vector<int>&indegree,int vertex){
// calculte inorder of each node

for(int i=1;i<=vertex;i++){
    for(auto it:adj[i]){
    indegree[it]++;
    }
}
   
  }

void bfs(vector<int>&toposrt, vector<int>&indegree
 ){

    queue<int>q;

    for(int i=1;i<indegree.size();i++){

        if(indegree[i]==0)
        q.push(i);

    }

    while(!q.empty()){

        int node=q.front();
        q.pop();
         toposrt.push_back(node);
        
        for (auto &child : adj[node]) {
          indegree[child]--;
          
          if(indegree[child]==0){
            q.push(child);
           
          }
        }
    }

 }

};

 
int main()
{
    
int vertex;
cin>>vertex;

int edge;
cin>>edge;
  Graph g;
    

 for(int i=0;i<edge;i++){
    int u,v;
    cin>>u>>v;
    // creating directed graph
    g.addEdge(u,v);
   
 }

// store inorder of each node
vector<int>indegree(vertex+1,0);
// to store a valid topological sort
vector<int>toposrt;


g.calculate_indegree(indegree,vertex);

g.bfs(toposrt,indegree);

if(toposrt.size()==vertex){
    
for(int i=0;i<vertex;i++){
    cout<<toposrt[i]<<' ';
}
}

else
cout<<"IMPOSSIBLE";

    return 0;
}