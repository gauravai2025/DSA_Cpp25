#include<bits/stdc++.h>
using namespace std;

  void bfs(int src,map<int,list<int>>&adj,vector<int>&visited){
        
    queue<int> q;
    q.push(src);
    visited[src] = 1;

    while (!q.empty()){
        
        int node = q.front();
        q.pop();

        for (auto child: adj[node]){

        if (!visited[child]){
            q.push(child);
            visited[child] = 1;
        }

        }
    }
    
    }
    
    int bfsconnectedComponent(map<int,list<int>>&adj, int vertex) {

    vector<int> visited(vertex,0);
    int countComponent=0;

   
    for (int i = 0; i< vertex; i++){
        if (visited[i] == 0) {
           countComponent++;
           bfs(i,adj,visited);
        }
    }

    return countComponent;
}

 void articulationPoints(int n, vector<vector<int>>& edges,vector<int>&articulationvertex) {
    
     map<int,list<int>>adjacency;

        for(auto edge:edges){
            
           int u=edge[0];
           int v=edge[1];
                
            adjacency[u].push_back(v);
            adjacency[v].push_back(u);
        }

         int originalComponent=bfsconnectedComponent(adjacency,n);
      
        for(int i=0;i<n;i++){
            
         // Remove vertex i and its connections
        list<int> temp = adjacency[i];
        adjacency.erase(i);

        // Also remove i from neighbors' lists
        for (auto v : temp) {
            adjacency[v].remove(i);
        }

      

        if (bfsconnectedComponent(adjacency, n)-1>originalComponent){
            articulationvertex.push_back(i);
        }

        // Restore vertex i and its edges
        adjacency[i] = temp;
        
        for (auto v : temp) {
            adjacency[v].push_back(i);
        }
    
    }
     
    }
 
int main()
{

     int vertex,edge;
    cout<<"enter number of vertex and edge\n";
    cin>>vertex>>edge;

    vector<vector<int>>connections;

    while(edge--){
        int u,v;
        cin>>u>>v;
     connections.push_back({u,v});
    }

     vector<int>articulationvertex;
    articulationPoints(vertex, connections, articulationvertex);

    if(articulationvertex.size()==0){
        cout<<"no articulation point found\n";
        return 0;
    }

    cout<<"all articulation points are: \n";

    for(auto vertex:articulationvertex){
        cout<<vertex<<" ";
    }

    return 0;
}