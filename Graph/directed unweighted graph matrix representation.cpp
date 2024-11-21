#include<bits/stdc++.h>
using namespace std;
 
int main()
{

int vertices,edges;
cout<<"Enter the number of vertices and edges: ";
cin>>vertices>>edges;
vector<vector<int>>graph(vertices,vector<int>(vertices,0)); // 2D vector of size vertices*vertices with all elements 0  // adjacency matrix

cout<<"Enter the edges: \n";

for(int i=0;i<edges;i++){
    int u,v;
    cin>>u>>v;
    graph[u][v]=1;
   
}

// print the adjacency matrix

for(int i=0;i<vertices;i++){
    for(int j=0;j<vertices;j++){
        cout<<graph[i][j]<<" ";
    }
    cout<<endl;
}
 
 
 
    return 0;
}