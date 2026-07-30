#include <bits/stdc++.h>
using namespace std;
 
bool dfs(int source, vector<int>& color, int col, vector<vector<int>>& adj) {
 
   
    color[source] =col;
 
    for (auto &child : adj[source]) {

        if (color[child] == -1) {  // If child is not yet visited
            if(!dfs(child, color, !col, adj))
            return 0;
        }

        else if (color[child] == color[source]) {  // If child is visited and has same team as parent
           return 0;
        }

    }

    return 1;
    
}
 
int main() {

    int vertex, edges;
    cin >> vertex >> edges;
 
    vector<vector<int>> adj(vertex);  // Adjacency list
 
    for (int i = 0; i < edges; i++) {
        int u, v;
        cin >> u >> v;
        adj[u ].push_back(v);  
        adj[v ].push_back(u);
    }
 
    vector<int>color(vertex, -1);
     bool oddcycle=0;

       for(int i=0;i<vertex;i++){

         if (color[i] == -1) {  
            if(!dfs(i, color, 0, adj))
            {
               cout<<"have odd length cycle:";
               oddcycle=1;
               break; 
            }
        }

       }

       if(!oddcycle)
       cout<<"not have odd length cycle:";

 
    return 0;
}