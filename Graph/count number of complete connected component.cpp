#include <bits/stdc++.h>
using namespace std;

void dfs( int source ,map<int,vector<int>>&adj, map<int,bool>&visited,vector<int>&node ){
    
    visited[source]=1;
    node.push_back(source);

   for(auto neighbour:adj[source]){

   if(visited[neighbour]==0){
   dfs(neighbour,adj,visited,node);  
   }

   }

    }

int countCompleteComponents(int n, vector<vector<int>>&edges) {
         
       int size=edges.size();
       map<int,vector<int>>adj;
         
         for(int i=0;i<size;i++){
            adj[edges[i][0]].push_back(edges[i][1]);
            adj[edges[i][1]].push_back(edges[i][0]);
         }

         map<int,bool>visited;

         int ans=0;

         for(int i=0;i<n;i++){

            if(visited[i]==0){
            vector<int>node;
            dfs(i,adj,visited,node);
                  
             if(node.size()==1){
                ans++;
                continue;
            }

            int cnt=node.size();
            int cnt_edge=0;

                for(auto it:node){
                cnt_edge+=adj[it].size();
                }

                if(cnt*(cnt-1)==cnt_edge)
                ans++;
            }

         }
        return ans;
}

int main() {

int vertex,num_edges;
cin>>vertex>>num_edges;
vector<vector<int>>edges;

while(num_edges--){
	int u,v;
	cin>>u>>v;
	edges.push_back({u,v});

}

cout<<countCompleteComponents(vertex,edges)<<endl;

}
   