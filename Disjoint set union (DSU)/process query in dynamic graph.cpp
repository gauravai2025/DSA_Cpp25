#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 10;
int parent[N];
int rankArr[N];

void make(int node) {
    parent[node] = node;
    rankArr[node] = 0;  // Initial rank or group size as zero
}

int findPathCompression(int node) {
    if (parent[node] == node)
        return node;
    return parent[node] = findPathCompression(parent[node]);  // Path compression
}

void unionByRank(int node1, int node2) {
    int par1 = findPathCompression(node1);
    int par2 = findPathCompression(node2);

    if (par1 != par2) {
        // Attach smaller tree under root of larger tree by rank
        if (rankArr[par2] > rankArr[par1])
            swap(par1, par2);
        parent[par2] = par1;
        if (rankArr[par1] == rankArr[par2])
            rankArr[par1]++;
    }
}

int main() {
    int n, q, type, u, v;
    cout << "Enter the number of nodes:\n";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        make(i);
    }

    cout << "Enter the number of queries:\n";
    cin >> q;

    while (q--) {
        cin >> type >> u >> v;

        if (type == 1) {
            unionByRank(u, v);
        } 
        
        else if (type == 2) {
            int par1 = findPathCompression(u);
            int par2 = findPathCompression(v);
            if (par1 == par2)
                cout << u << " and " << v << " lie in the same connected component.\n";
            else
                cout << u << " and " << v << " do not lie in the same connected component.\n";
        } 
        
        else {
            cout << "Invalid query type!\n";
        }
    }

    return 0;
}
