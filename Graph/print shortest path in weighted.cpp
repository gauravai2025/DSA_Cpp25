#include<bits/stdc++.h>
using namespace std;

// Dijkstra Function
void dijkstra(vector<vector<pair<long long,long long>>>& adj, int src,
              vector<long long>& dist, vector<int>& parent){
                     
    int n = adj.size();
    set<pair<long long,int>> st;
        
    dist[src] = 0;
    st.insert({0, src});
        
    while(!st.empty()){
        auto top = *st.begin();
        st.erase(st.begin());
            
        long long nodeDist = top.first;
        int u = top.second;

        // Important optimization
        if(nodeDist > dist[u]) continue;
            
        for(auto nbr : adj[u]){
            int v = nbr.first;
            long long w = nbr.second;
                
            if(nodeDist + w < dist[v]){
                    
                if(dist[v] != LLONG_MAX){
                    st.erase({dist[v], v});
                }
                
                dist[v] = nodeDist + w;
                parent[v] = u;
                st.insert({dist[v], v});
            }
        }
    }
}


// Path printing
void printPath(int dest, vector<int>& parent, vector<long long>& dist) {

    if(dist[dest] == LLONG_MAX){
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

    
    vector<vector<pair<long long,long long>>> adj(vertices+1);
    cout<<"enter edges with weight:\n";

    while(edges--){
        int u, v, w;
        cin >> u >> v >> w;

        adj[u].push_back({v, w});
        adj[v].push_back({u, w});

        // adj[u].push_back({v, w}); for directed graph
    }

    int src;
    cout<<"enter source:\n";
    cin>>src;

    
    int dest;
    cout<<"enter destination:\n";
    cin>>dest;


    vector<long long> dist(vertices+1, LLONG_MAX);
    vector<int> parent(vertices+1, -1);

    dijkstra(adj, src, dist, parent);

    printPath(dest, parent, dist);

    return 0;
}