#include<bits/stdc++.h>
using namespace std;
 
int main()
{

int vertices,edges;
cout<<"Enter the number of vertices and edges: ";
cin>>vertices>>edges;
vector<vector<int>>graph(vertices); // 2D vector of size vertices with all elements 0  // adjacency list

cout<<"Enter the edges: \n";

for(int i=0;i<edges;i++){
    int u,v;
    cin>>u>>v;
    graph[u].push_back(v);
    graph[v].push_back(u);  // for undirected graph
}

// print the adjacency list

for(int i=0;i<vertices;i++){
    cout<<i<<" :";
    for(int j=0;j<graph[i].size();j++){
        cout<<graph[i][j]<<" ";
    }
    cout<<endl;
}
 
 
 
    return 0;
}