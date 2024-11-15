#include<bits/stdc++.h>
using namespace std;


 int spanningTree(int V,  vector<vector<vector<int>>>adj)
    {
        vector<int>visited(V,0);
        int mst=0;
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq;
        
        // start from any node
        pq.push({0,0});
        
        while(!pq.empty()){
            
        auto front=pq.top();
        pq.pop();
        
        if(visited[front.second]==0){
        mst+=front.first;
        
        visited[front.second]=1;
        
        for(auto nbr:adj[front.second]){
            pq.push({nbr[1],nbr[0]});
        }
        
        }
            
        }
        
        return mst;
    }
 
int main()
{
    int vertices,edges;
    cout<<"Enter the number of vertices and edges\n";
    cin>>vertices>>edges;
    vector<vector<vector<int>>> graph(vertices);

    cout<<"Enter the edges and their weights\n";

    while(edges--){
        int u,v,w;
        cin>>u>>v>>w;
        graph[u].push_back({v,w});
        graph[v].push_back({u,w});
    }

 cout<<"weight of MST:  "<<spanningTree(vertices,graph);
 
 
    return 0;
}