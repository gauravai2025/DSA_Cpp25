#include<bits/stdc++.h>
using namespace std;

// You are given an undirected graph of ‘N’ nodes and ‘M’ edges. Your task is to print 1 if this graph can be divided into exactly two disjoint cliques. Else, you need to print 0.

// Note :
// Let G be a subgraph of the given graph. Then, G is said to be a clique if G is a complete graph.

// Two cliques are said to be disjoint if they don’t have a common node.

bool check_bipartite_bfs(vector<vector<int>>&graph,int vertices,vector<int>&color){
   
    queue<int>q;
    
    q.push(0);

    color[0]=0;

    while(!q.empty()){
    
    auto node=q.front();
    q.pop();

    for(auto child:graph[node]){

    if(color[child]==color[node])
    return 0;

    if(color[child]==-1)  // unvisited
    {
     color[child]=1-color[node];
     q.push(child);   
    }

    }

    }

    return 1;
}

 void complementof_graph(vector<vector<int>>&graph,int vertices,vector<vector<int>>&graphcomple){

   for(int i=0;i<vertices;i++){

    vector<int>visited(vertices,0);
    
    for(auto node:graph[i]){
        visited[node]=1;
    }

    for(int node=0;node<vertices;node++){
        if(visited[node]==0 && node!=i)
        graphcomple[i].push_back(node);
    }

   }

 }
 
int main()
{

int vertices,edge;
// cout<<"Enter the number of vertices and edges: \n";
cin>>vertices>>edge;

vector<vector<int>>graph(vertices);

while(edge--){
   int u,v;
   cin>>u>>v;
   // undirected
   graph[u].push_back(v);
   graph[v].push_back(u);
 
}

vector<vector<int>>graphcomple(vertices);

complementof_graph(graph,vertices,graphcomple);

bool bipartite=1;

vector<int>color(vertices,-1);

for(int i=0;i<vertices;i++){

if(color[i]==-1 && check_bipartite_bfs(graphcomple,vertices,color)==0){
cout<<"not possible\n";
bipartite=0;
break;
}

}

if(bipartite)
cout<<"can be divided into two click\n";

return 0;
}