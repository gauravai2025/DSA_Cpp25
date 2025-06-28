#include<bits/stdc++.h>
using namespace std;

// Given an undirected graph, find how many triangles it can have where a triangle is a cyclic path of length three which begins and end at the same vertex.

// #### An undirected graph is a graph in which if you can go from a vertex, say, ‘A’ to ‘B,’ you can come back to ‘A’ from ‘B.’

int triangleInGraph(vector<vector<int>> &graph, int v) {
    
    int ans=0;

    for(int i=0;i<v;i++){
    for(int j=0;j<v;j++){
        
    for(int k=0;k<v;k++){
    if(graph[i][k]==1 && graph[j][k]==1  && graph[i][j]==1)  
     ans++;

    }

    }
    }

    int num_triangle=ans/6;

    return num_triangle;
}
 
int main()
{

    int vertices,edges;
    cout<<"Enter the number of vertices and edges: ";
    cin>>vertices>>edges;

    vector<vector<int>>graph(vertices,vector<int>(vertices,0)); // 2D vector of size vertices with all elements 0  // adjacency matrix

    cout<<"Enter the edges: \n";

    for(int i=0;i<edges;i++){
        int u,v;
        cin>>u>>v;
        graph[u][v]=1;
        graph[v][u]=1;  // for undirected graph
    }

    cout<<"Number of triangles in the graph are: "<<triangleInGraph(graph,vertices)<<endl;
 

 
    return 0;
}