#include <bits/stdc++.h>
using namespace std;

 void dfs(int source, vector<bool>&visited,  unordered_map<int,vector<int>>&adj){

    visited[source]=1;

    for(auto child:adj[source]){
        if(visited[child]==0)
        dfs(child,visited,adj);
    }

 }
         
        


     
int main() {

int vertex,edges;
cin>>vertex>>edges;
unordered_map<int,vector<int>>adj;


while(edges--){
	int u,v;
	cin>>u>>v;
	adj[v].push_back(u);
	adj[u].push_back(v);

}

   vector<bool>visited(vertex,0);
     int ans=0;
   
     for(int i=0;i<vertex;i++){
         if(visited[i]==0){
         dfs(i,visited,adj);
         ans++;
     } 
    }

    cout<<ans<<endl;

return 0;
}