#include <bits/stdc++.h>
using namespace std;

bool bfs(int src, vector<vector<int>>& adj, vector<int>& visited, vector<int>& rndtrip, vector<int>& parent) {
    visited[src] = 1;
    queue<int> q;
    q.push(src);

    while (!q.empty()) {
        int front = q.front();
        q.pop();

        for (auto child : adj[front]) {
            if (!visited[child]) {
                visited[child] = 1;
                parent[child] = front;
                q.push(child);
            } else if (child != parent[front]) { // Cycle detected
                rndtrip.push_back(child); // Start of the cycle
                int current =child;

                // Backtrack using the parent array to construct the cycle
                while (current != front) {
                    rndtrip.push_back(current);
                    current = parent[current];
                }

                rndtrip.push_back(child); // Close the cycle
                return true;
            }
        }
    }

    return false;
}

int main() {
    int vertices, edges;
    cin >> vertices >> edges; // Number of nodes and edges

    // Adjusted adjacency list for 0-based indexing
    vector<vector<int>> adj(vertices);

    for (int i = 0; i < edges; ++i) {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    vector<int> visited(vertices, 0), parent(vertices, -1), rndtrip;
    bool cycle_found = false;

    // Traverse all components of the graph
    for (int i = 0; i < vertices; ++i) {
        if (!visited[i]) {
            if (bfs(i, adj, visited, rndtrip, parent)) {
                cycle_found = true;
                break;
            }
        }
    }

    if (cycle_found) {
        reverse(rndtrip.begin(), rndtrip.end()); // Reverse to get the correct cycle order
        cout << rndtrip.size() << endl;
        for (auto node : rndtrip) {
            cout << node << " ";
        }
        cout << endl;
    } else {
        cout << "IMPOSSIBLE" << endl;
    }

    return 0;
}
