#include<bits/stdc++.h>
using namespace std;

 void  spanningTree(int V,  vector<vector<vector<int>>>adj)
    {
        vector<int>visited(V,0);
        vector<int>parent(V,-1);
        cout<<"Edges of MST are:\n";
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

        if(parent[front.second]!=-1)
        cout<<parent[front.second]<<" "<<front.second<<endl;

        for(auto nbr:adj[front.second]){
            pq.push({nbr[1],nbr[0]});
            parent[nbr[0]]=front.second;
            
        }
        
        }
            
        }
        
       cout<<"weight of MST: "<< mst;
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

    spanningTree(vertices,graph);
    return 0;
}