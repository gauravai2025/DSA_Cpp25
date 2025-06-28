#include<bits/stdc++.h>
using namespace std;

bool cycle_bfs(int source,vector<vector<int>>&adj, vector<int>&visited ,int vertex){

    visited[source]=1;
    vector<int>parent(vertex,-1);
    queue<int>q;

    q.push(source);

    while(!q.empty()){

        int front=q.front();
        q.pop();

        for(auto child:adj[front]){

            if(visited[child] && child !=parent[front])
            return 1;

            else if(!visited[child]){
                visited[child]=1;
                q.push(child);
                parent[child]=front;
            }
        }

    }

    return 0;
}
 
 bool cycle_detect(vector<vector<int>>&adj,int vertex){
  
    vector<int>visited(vertex,0);

   
   for(int i=0;i<vertex;i++){
    if(!visited[i]){
        if(cycle_bfs(i,adj,visited))
        return 1;
    }

   }

   return 0;

 }

int main()
{

int vertex,edge;
cout<<"enter number of vertex and edge\n";
cin>vertex>>edge

vector<vector<int>>adj(vertx);

while(edge--){
    int u,v;
    cin>>>u>>v;
    adj[u].push_back(v);
    adj[v].push_back(u);
}


if(cycle_detect(adj,vertex))
cout<<"cycle exist\n";
else
cout<<"cycle not exist\n";

return 0;
}