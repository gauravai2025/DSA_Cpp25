#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int countShortestPaths(vector<vector<int>>& graph, int source, int destination) {
    int n = graph.size();

    // Initialize visited array and distance array
    vector<bool> visited(n + 1, false);  
    vector<int> distance(n + 1, -1);   
    vector<int> paths(n + 1, 0);         

    // BFS Queue
    queue<int> bfsQueue;

    // Initialize source node
    bfsQueue.push(source);
    visited[source] = true;
    distance[source] = 0;
    paths[source] = 1;

    // BFS traversal
    while (!bfsQueue.empty()) {
        int current = bfsQueue.front();
        bfsQueue.pop();

        for (int neighbor : graph[current]) {
            if (!visited[neighbor]) {
                visited[neighbor] = true;
                distance[neighbor] = distance[current] + 1;
                paths[neighbor] = paths[current];
                bfsQueue.push(neighbor);
            } else if (distance[neighbor] == distance[current] + 1) {
                // If there is another shortest path to the neighbor
                paths[neighbor] += paths[current];
            }
        }
    }

    return paths[destination];
}

int main() {
    int numNodes, numEdges;
    cout << "Enter the number of nodes: ";
    cin >> numNodes;

    // Initialize the graph with numNodes + 1
    vector<vector<int>> graph(numNodes + 1);  // Adjust size to numNodes + 1

    cout << "Enter the number of edges: ";
    cin >> numEdges;

    // Input edges
    cout << "Enter the edges (node1 node2):" << endl;
    for (int i = 0; i < numEdges; ++i) {
        int node1, node2;
        cin >> node1 >> node2;
        graph[node1].push_back(node2);
        graph[node2].push_back(node1);
    }

    int source, destination;
    cout << "Enter the source node: ";
    cin >> source;

    cout << "Enter the destination node: ";
    cin >> destination;

    int numShortestPaths = countShortestPaths(graph, source, destination);

    cout << "Number of Shortest Paths from Node " << source << " to Node " << destination << ": " << numShortestPaths << endl;

    return 0;
}
