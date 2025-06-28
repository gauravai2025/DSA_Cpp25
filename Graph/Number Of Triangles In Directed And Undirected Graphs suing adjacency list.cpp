#include<bits/stdc++.h>
using namespace std;

#include <bits/stdc++.h>
using namespace std;

void triangleInDirectedGraph(int v, const vector<vector<int>>& edgeListOfDirectedGraph, vector<int>& ans) {
    int cnt = 0;
    vector<unordered_set<int>> adjList(v);  // Adjacency list

    // Build adjacency list
    for (auto edge : edgeListOfDirectedGraph) {
        int u = edge[0], v = edge[1];
        adjList[u].insert(v);
    }

    // Count triangles in the directed graph
    for (int i = 0; i < v; i++) {
        for (int j : adjList[i]) {
            for (int k : adjList[j]) {
                if (adjList[k].count(i)) {  // Check if there's a triangle
                    cnt++;
                }
            }
        }
    }

    ans.push_back(cnt / 3);  // Each triangle is counted 3 times
}

void triangleInUndirectedGraph(const vector<vector<int>>& edgeListOfUnDirectedGraph, int v, vector<int>& ans) {
    vector<unordered_set<int>> adjList(v);
    int cnt = 0;

    // Build adjacency list
    for (auto edge : edgeListOfUnDirectedGraph) {
        int u = edge[0], v = edge[1];
        adjList[u].insert(v);
        adjList[v].insert(u);
    }

    // Count triangles in the undirected graph
    for (int i = 0; i < v; i++) {
        for (int j : adjList[i]) {
                for (int k : adjList[j]) {
                    if (adjList[k].count(i))
                        cnt++;
                    
                }
            }
        }
    

    ans.push_back(cnt/6);  // Each triangle is counted once
}

vector<int> countTriangles(int v1, vector<vector<int>>& edgeListOfDirectedGraph, int v2,
                            vector<vector<int>>& edgeListOfUnDirectedGraph) {
    vector<int> ans;
    triangleInDirectedGraph(v1, edgeListOfDirectedGraph, ans);
    triangleInUndirectedGraph(edgeListOfUnDirectedGraph, v2, ans);
    return ans;
}



 
int main()
{
    int v1, v2;
    cout<<"Enter the number of vertices in directed and undirected graph: ";

    cin>>v1>>v2;

    vector<vector<int>> edgeListOfDirectedGraph;
    vector<vector<int>> edgeListOfUnDirectedGraph;

    cout<<"Enter the number of edges in directed graph: ";
    int edges1;
    cin>>edges1;

    cout<<"Enter the edges of directed graph: \n";

    for(int i=0;i<edges1;i++){
        int u,v;
        cin>>u>>v;
        edgeListOfDirectedGraph.push_back({u,v});
    }

    cout<<"Enter the number of edges in undirected graph: ";
    int edges2;
    cin>>edges2;

    cout<<"Enter the edges of undirected graph: \n";

    for(int i=0;i<edges2;i++){
        int u,v;
        cin>>u>>v;
        edgeListOfUnDirectedGraph.push_back({u,v});
    }

    vector<int> ans = countTriangles(v1, edgeListOfDirectedGraph, v2, edgeListOfUnDirectedGraph);

    cout<<"Number of triangles in directed graph are: "<<ans[0]<<endl;
    cout<<"Number of triangles in undirected graph are: "<<ans[1]<<endl;
    return 0;
 
 
    return 0;
}