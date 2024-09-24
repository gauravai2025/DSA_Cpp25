#include <bits/stdc++.h>
using namespace std;
 
void dfs(int source, vector<int>& team, int mark, vector<vector<int>>& adj) {
 
   
    team[source] =mark;
  
 
    mark = 3 - mark;  // Toggle between 0 and 1 for bipartition
 
    for (auto &child : adj[source]) {

        if (team[child] == -1) {  // If child is not yet visited
            dfs(child, team, mark, adj);
        }
        else if (team[child] == team[source]) {  // If child is visited and has same team as parent
            cout << "IMPOSSIBLE";
            exit(0);
        }
    }
}
 
int main() {
    int vertex, edges;
    cin >> vertex >> edges;
 
    vector<vector<int>> adj(vertex);  // Adjacency list
 
    for (int i = 0; i < edges; i++) {
        int u, v;
        cin >> u >> v;
        adj[u - 1].push_back(v-1);  // Storing 1-based index, adjusting to 0-based
        adj[v - 1].push_back(u-1);
    }
 
    vector<int> team(vertex, -1);  // Team assignment array, -1 means unvisited
    int mark = 1;
       
       for(int i=0;i<vertex;i++){
         if (team[i] == -1) {  
            dfs(i, team, mark, adj);
        }
       }
   
 
    for (auto it : team) {
        cout << it << " ";
    }
 
    return 0;
}