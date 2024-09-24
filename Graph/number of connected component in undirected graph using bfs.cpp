#include <bits/stdc++.h>
using namespace std;

 void bfs(int source, map<int,bool>&visited,  map<int,vector<int>>&adj){
         
         queue<int>q;
         q.push(source);
         
         visited[source]=1;
         
         while(!q.empty()){
             int curr=q.front();
             q.pop();
             
             for(auto neighbour:adj[curr]){
                 if(visited[neighbour]==0){
                     q.push(neighbour);
                     visited[neighbour]=1;
                 }
             }
             
         }
     }


     
int main() {

int vertex,edges;
cin>>vertex>>edges;
map<int,vector<int>>adj;


while(edges--){
	int u,v;
	cin>>u>>v;
	adj[v].push_back(u);
	adj[u].push_back(v);

}

   map<int,bool>visited;
     int ans=0;
   
     for(int i=1;i<=vertex;i++){
         if(visited[i]==0){
         bfs(i,visited,adj);
         ans++;
     } 
    }

    cout<<ans<<endl;

return 0;
}