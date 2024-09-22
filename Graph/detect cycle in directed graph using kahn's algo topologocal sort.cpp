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

for(int i=0;i<vertex;i++){

for(auto it:adj[i]){
  
    indegree[it]++;
    }
}
   
  }

void bfs(int &cnt, vector<int>&indegree
 ){

    queue<int>q;

    for(int i=0;i<indegree.size();i++){

    if(indegree[i]==0)
    q.push(i);
    }

    while(!q.empty()){

        int node=q.front();
        q.pop();
        cnt++;        
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
cout<<"enter number of vertex\n";
cin>>vertex;

int edge;
cout<<"enter number of edges\n";
cin>>edge;

  Graph g;
    
 for(int i=0;i<edge;i++){
    int u,v;
    cin>>u>>v;
    // creating directed graph
    g.addEdge(u,v);
   
 }

// store inorder of each node
vector<int>indegree(vertex,0);
// to store a valid topological sort

g.calculate_indegree(indegree,vertex);

int cnt=0;

g.bfs(cnt,indegree);

if(cnt==vertex)
cout<<"no cycle";
else
cout<<"cycle is present\n";

    return 0;
}