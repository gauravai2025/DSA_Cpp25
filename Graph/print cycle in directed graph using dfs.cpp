#include<bits/stdc++.h>
using namespace std;
 
bool cycle_dfs(int source,vector<vector<int>>&adj,vector<int>&visited,vector<int>&rndtrip,vector<int>&parent,vector<int>&pathvisited){  
  
        visited[source]=1;
        pathvisited[source]=1;
 
        for(auto child:adj[source]){
 
            if(visited[child] && pathvisited[child]){
            rndtrip.push_back(child); // Start of the cycle
            int current =source;
 
            // Backtrack using the parent array to construct the cycle
            while (current != child) {
                rndtrip.push_back(current);
                current = parent[current];
            }
 
            rndtrip.push_back(child); // Close the cycle
            return 1;
        }
 
            else if(!visited[child]){
                 parent[child]=source; 
                if(cycle_dfs(child,adj,visited,rndtrip,parent,pathvisited)){
                return 1;
            }
        }
     
        }
 
          // backtracking
        pathvisited[source]=0;
 
    return 0;
}
 
 
int main()
{
     int vertices, edges;
    cin>>vertices>>edges; // Number of nodes and edges
 
    vector<vector<int>> adj(vertices);
 
    for (int i = 0; i<edges; ++i) {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
       
    }
 
    vector<int> visited(vertices, 0), parent(vertices, -1), rndtrip;
    bool cycle_found = false;
    vector<int>pathvisited(vertices,0);
 
    for (int i = 0; i <vertices; ++i) {
        if (!visited[i]) {
            if (cycle_dfs(i, adj, visited, rndtrip, parent,pathvisited)) {
                cycle_found = true;
                break;
            }
        }
    }
 
    if (cycle_found) {
        cout << rndtrip.size() << endl;
        reverse(rndtrip.begin(), rndtrip.end()); // Reverse to get the correct cycle order
        for (auto node : rndtrip) {
            cout << node << " ";
        }
        cout << endl;
    }
     
    else{
        cout << "IMPOSSIBLE" << endl;
    }
 
    return 0;
}