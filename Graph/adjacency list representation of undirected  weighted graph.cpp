#include<bits/stdc++.h>
using namespace std;
 
int main()
{

int vertices,edges;
cout<<"Enter the number of vertices and edges: ";
cin>>vertices>>edges;
vector<vector<pair<int,int>>>graph(vertices); // 2D vector of size vertices with all elements 0  // adjacency list

cout<<"Enter the edges with weight: \n";

for(int i=0;i<edges;i++){
    int u,v,wt;
    cin>>u>>v>>wt;
    graph[u].push_back({v,wt});
    graph[v].push_back({u,wt});  // for undirected graph
}

// print the adjacency list

for(int i=0;i<vertices;i++){
    cout<<i<<" :";
    for(int j=0;j<graph[i].size();j++){
        cout<<"("<<graph[i][j].first<<","<<graph[i][j].second<<") ";
    }
    cout<<endl;
}
 
return 0;
}