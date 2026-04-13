#include<bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    vector<vector<int>> adj(n + 1); // Adjacency list for the graph
    vector<int> indegree(n + 1, 0); // In-degree of each course

    // Read the prerequisite pairs and construct the graph
    for (int i = 0; i < m; i++) {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        indegree[v]++; // v has a prerequisite u
    }

    // Min-heap (priority queue) to process the smallest course first
    priority_queue<int, vector<int>, greater<int>> pq;

    // Push courses with no prerequisites (in-degree 0) into the heap
    for (int i = 1; i <= n; i++) {
        if (indegree[i] == 0) {
            pq.push(i);
        }
    }

    vector<int> result; // Store the topological order

    while (!pq.empty()) {
        int course = pq.top();
        pq.pop();
        result.push_back(course);

        // Process all the courses that depend on this course
        for (int next : adj[course]) {
            indegree[next]--;
            if (indegree[next] == 0) {
                pq.push(next); // Push the next course if all its prerequisites are completed
            }
        }
    }

    // If we were able to process all the courses, we should have exactly 'n' courses in the result
    if (result.size() == n) {
        for (int course : result) {
            cout << course << " ";
        }
        cout << endl;
    } else {
        // There was a cycle in the prerequisites, but per the problem statement, this won't happen
        cout << "Cycle detected!" << endl;
    }

    return 0;
}
