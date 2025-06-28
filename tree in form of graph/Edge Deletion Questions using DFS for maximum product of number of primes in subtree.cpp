#include <bits/stdc++.h>
using namespace std;

// Given an undirected tree with N nodes labeled from 1 to N.

// Each node has a certain weight assigned to it given by an integer array A of size N.

// You need to delete an edge in such a way that the Product between the count of prime number of weights of nodes in one subtree with the count of prime number  of weights of nodes in other subtree is maximized.


const int MOD = 1e9 + 7;

// Function to compute prime numbers using the Sieve of Eratosthenes
void seiveprime(vector<bool>& primelist, int n) {
    for (int i = 2; i * i <= n; i++) {
        if (primelist[i]) {
            for (int j = i * i; j <= n; j += i) {
                primelist[j] = false;
            }
        }
    }
}

// DFS to compute subtree prime counts
void precomputedfs(int src, int par, vector<vector<int>>& graph, vector<int>& subtree_primecount, vector<int>& val, vector<bool>& primelist) {
    subtree_primecount[src] += primelist[val[src]];  // Check if the current node's value is prime
    for (auto child : graph[src]) {
        if (child == par) continue;  // Skip the parent
        precomputedfs(child, src, graph, subtree_primecount, val, primelist);
        subtree_primecount[src] += subtree_primecount[child];  // Add the child's subtree prime count
    }
}

int main() {
    int vertices;
    cout << "Enter the number of vertices: ";
    cin >> vertices;

    int edges = vertices - 1;
    vector<int> val(vertices + 1, 0);

    cout << "Enter the values of vertices: \n";
    int mxval = 0;

    for (int i = 1; i <= vertices; i++) {
        cin >> val[i];
        mxval = max(mxval, val[i]);
    }

    vector<vector<int>> graph(vertices + 1);  // Adjacency list

    cout << "Enter the edges: \n";
    vector<pair<int, int>> edge_list;

    for (int i = 0; i < edges; i++) {
        int u, v;
        cin >> u >> v;
        graph[u].push_back(v);
        graph[v].push_back(u);  // For undirected graph
        edge_list.push_back({u, v});
    }

    vector<int> subtree_primecount(vertices + 1, 0);
    vector<bool> primelist(mxval + 1, true);
    primelist[0] = primelist[1] = false;  // 0 and 1 are not prime

    seiveprime(primelist, mxval);
    precomputedfs(1, -1, graph, subtree_primecount, val, primelist);

    // Check all possibilities of removing edges and calculate the product of subtree prime counts
    long long ans = 0;

    // for (auto& edge : edge_list) {
    //     int u = edge.first, v = edge.second;

    //     // Assume the edge (u, v) is removed, and calculate the product
    //     long long prime_count_u = subtree_primecount[u];
    //     long long prime_count_v = subtree_primecount[v];

    //     // Ensure the smaller subtree is correctly identified
    //     if (prime_count_u > prime_count_v) swap(u, v);

    //     long long subtree1 = subtree_primecount[v];
    //     long long subtree2 = subtree_primecount[1] - subtree1;

    //     long long product = (subtree1 * subtree2) % MOD;
    //     ans = max(ans, product);
    // }
    
    for(int i=2;i<=vertices;i++){
      
        long long subtree1 = subtree_primecount[i];
        long long subtree2 = subtree_primecount[1] - subtree1;

        long long product = (subtree1 * subtree2) % MOD;
        ans = max(ans, product);
      
    }

    cout << "Maximum product: " << ans << "\n";

    return 0;
}
