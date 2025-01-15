#include<bits/stdc++.h>
using namespace std;

bool cycle_dfs(int source,vector<vector<int>>&adj,vector<int>&visited,vector<int>&parent){

        visited[source]=1;

        for(auto child:adj[source]){

            if(visited[child] && child !=parent[source])
            return 1;

            else if(!visited[child]){
                visited[child]=1;
                parent[child]=source;
                if(cycle_dfs(child,adj,visited,parent))
                return 1;
            }
        }

    return 0;
}
 
 bool cycle_detect(vector<vector<int>>&adj,int vertex){
  
    vector<int>visited(vertex,0);

   for(int i=0;i<vertex;i++){
    if(!visited[i]){
    vector<int>parent(vertex,-1);

        if(cycle_dfs(i,adj,visited,parent))
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