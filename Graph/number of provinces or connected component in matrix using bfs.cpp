#include<bits/stdc++.h>
using namespace std;

  void bfs(int source, vector<bool>&visited,  vector<vector<int>>&adjn){
         
         queue<int>q;
         q.push(source);
         
         visited[source]=1;
         
         while(!q.empty()){
             int curr=q.front();
             q.pop();
             
             for(auto neighbour:adjn[curr]){
                 if(visited[neighbour]==0){
                     q.push(neighbour);
                     visited[neighbour]=1;
                 }
             }
             
         }
     }

 
int main()
{

int vertex;
cout<<"enter number of vertex\n";
cin>>vertex;

vector<vector<int>>grid(vertex,vector<int>(vertex,0));

cout<<"enter input in matrix form such that for each cell o or 1\n";

// adj[i][j] = 1, if nodes i and j are connected and adj[i][j] = 0, if not connected.

for(int i=0;i<vertex;i++){
    for(int j=0;j<vertex;j++){
        cin>>grid[i][j];
    }
}

vector<vector<int>>adj(vertex);

for(int i=0;i<vertex;i++){
    for(int j=0;j<vertex;j++){

        if(grid[i][j]==1 && i!=j){
            adj[i].push_back(j);
           
        }
    }
}

vector<bool>visited(vertex,0);

   
     int ans=0;
   // calling bfs for each connected component

     for(int i=0;i<vertex;i++){
         if(visited[i]==0){
         bfs(i,visited,adj);
         ans++;
     } 
    }

    
    cout<<"number of provinces or connnected component: "<<ans<<endl;

 
 
 
    return 0;
}