#include<bits/stdc++.h>
using namespace std;

bool cycle_dfs(int source,vector<vector<int>>&adj,vector<int>&visited,vector<int>&visiteddfs){  
  
        visited[source]=1;
        visiteddfs[source]=1;

        for(auto child:adj[source]){

            if(visited[child] && visiteddfs[child])
            return 1;

            else if(!visited[child]){
                if(cycle_dfs(child,adj,visited,visiteddfs))
                return 1;
            }
        }
     
       // backtracking
        visiteddfs[source]=0;

    return 0;
}
 
 bool cycle_detect(vector<vector<int>>&adj,int vertex){
  
    vector<int>visited(vertex,0);

   for(int i=0;i<vertex;i++){
    if(!visited[i]){
    vector<int>visiteddfs(vertex,0);

    if(cycle_dfs(i,adj,visited,visiteddfs))
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
}

if(cycle_detect(adj,vertex))
cout<<"cycle exist\n";
else
cout<<"cycle not exist\n";

return 0;
}