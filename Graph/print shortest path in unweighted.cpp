#include<bits/stdc++.h>
using namespace std;

void shortestPath(vector<vector<int>> &adj, vector<int>& dist, vector<int>& parent, int n, int src){
    
    vector<int> visited(n+1, 0);
    queue<int> q;

    q.push(src);
    visited[src] = 1;
    dist[src] = 0;

    while(!q.empty()){
        
        int curr = q.front();
        q.pop();

        for(int child : adj[curr]){
            if(!visited[child]){
                visited[child] = 1;
                dist[child] = dist[curr] + 1;
                parent[child] = curr;
                q.push(child);
            }
        }
    }
}


// Path printing
void printPath(int dest, vector<int>& parent, vector<int>& dist) {

    if(dist[dest] == INT_MAX){
        cout << -1 << "\n";
        return;
    }

    cout<<"shortest path: "<<dist[dest]<<endl;

    vector<int> path;
    while(dest != -1){
        path.push_back(dest);
        dest = parent[dest];
    }

    reverse(path.begin(), path.end());

    for(auto node : path)
        cout << node << " ";
    cout << "\n";
}
 

int main()
{
    int vertices, edges;
    cout<<"enter number of vertices and edges:\n";
    cin >> vertices >> edges;

    
    vector<vector<int>> adj(vertices+1);
    cout<<"enter edges:\n";

    while(edges--){

        int u, v;
        cin >> u >> v;

        adj[u].push_back(v);
        adj[v].push_back(u);

        // [u].push_back({v, w}); for directed graph
    }

    int src;
    cout<<"enter source:\n";
    cin>>src;

    
    int dest;
    cout<<"enter destination:\n";
    cin>>dest;


    vector<int> dist(vertices+1, INT_MAX);
    vector<int> parent(vertices+1, -1);

    shortestPath(adj,dist,parent,vertices,src);

    printPath(dest, parent, dist);

    return 0;
}