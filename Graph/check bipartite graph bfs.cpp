#include <bits/stdc++.h>
using namespace std;
 
bool bfs(int source, vector<int>& team, vector<vector<int>>& adj) {
    queue<int> q;
    q.push(source);
    team[source] = 1;  // Start with team 1
 
    while (!q.empty()) {
        int node = q.front();
        q.pop();
 
        for (auto &child : adj[node]) {

            if (team[child] == -1) {  // If child is not yet visited
                // Assign the opposite team to the child
                team[child] = 3 - team[node];
                q.push(child);
            }
             else if (team[child] == team[node]) {
                // If child is already visited and on the same team, return false
                return false;
            }
        }
    }
 
    return true;
}
 
int main() {
    int vertex, edges;
    cin >> vertex >> edges;
 
    vector<vector<int>> adj(vertex);  // Adjacency list
 
    for (int i = 0; i < edges; i++) {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v)  // Storing 1-based index, adjusting to 0-based
        adj[v].push_back(u);
    }
 
    vector<int> team(vertex, -1);  // Team assignment array, -1 means unvisited
    bool isBipartite = true;
 
    for (int i = 0; i < vertex; i++) {
        if (team[i] == -1) {  // Start BFS for each component
            if (!bfs(i, team, adj)) {
                isBipartite = false;
                break;
            }
        }
    }
 
    if (isBipartite) {
        cout<<"bipartite:\n";
        cout<<"correct partition as group1 and group2: "<<endl;

        for (auto it : team) {
            cout << it << " ";  // Output the team assignment
        }
    } 
    
    else {
        cout << "not bipartite" << endl;
    }
}
 
    return 0;
