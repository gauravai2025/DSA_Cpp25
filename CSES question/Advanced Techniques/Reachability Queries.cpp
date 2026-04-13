#include <bits/stdc++.h>
using namespace std;

// Function to perform BFS and check if destination is reachable from source
bool bfs(map<int, vector<int>>& adj, int src, int dest, int n) {
    vector<bool> visited(n + 1, false);
    queue<int> q;
    q.push(src);
    visited[src] = true;

    while (!q.empty()) {
        int node = q.front();
        q.pop();

        if (node == dest) {
            return true;
        }

        for (int neighbor : adj[node]) {
            if (!visited[neighbor]) {
                visited[neighbor] = true;
                q.push(neighbor);
            }
        }
    }

    return false;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n, m, q;
    cin >> n >> m >> q;
    map<int, vector<int>> adj;

    // Reading the edges
    for (int i = 0; i < m; ++i) {
        int a, b;
        cin >> a >> b;
        adj[a].push_back(b);
    }

    // Processing each query
    while (q--) {
        int src, dest;
        cin >> src >> dest;
        if (bfs(adj, src, dest, n)) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}
