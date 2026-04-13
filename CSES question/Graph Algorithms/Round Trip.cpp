#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool dfs(int src, vector<vector<int>>& adj, vector<int>& visited, vector<int>& rndtrip, vector<int>& parent) {
    visited[src] = 1;

    for (auto child : adj[src]) {
        if (!visited[child]) {
            parent[child] = src;
            if (dfs(child, adj, visited, rndtrip, parent)) {
                return true;
            }
        } 
        else if (parent[src] != child) {
            // Cycle detected
            rndtrip.push_back(child); // Start of the cycle
            int current = src;

            // Backtrack using the parent array to construct the cycle
            while (current != child) {
                rndtrip.push_back(current);
                current = parent[current];
            }
            
            rndtrip.push_back(child); // Close the cycle
            return true;
        }
    }

    return false;
}

int main() {
    int n, m;
    cin >> n >> m; // Number of nodes and edges

    vector<vector<int>> adj(n + 1);
    for (int i = 0; i < m; ++i) {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    vector<int> visited(n + 1, 0), parent(n + 1, -1), rndtrip;
    bool cycle_found = false;

    for (int i = 1; i <= n; ++i) {
        if (!visited[i]) {
            if (dfs(i, adj, visited, rndtrip, parent)) {
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
