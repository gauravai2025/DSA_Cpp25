#include<bits/stdc++.h>
using namespace std;

// q query answer type 1 : check edge between u and v
    //type 2 find edge weight b/w u and v 
    // time -O(1) for both type query
 
int main()
{

int vertices,edges;
cout<<"Enter the number of vertices and edges: ";
cin>>vertices>>edges;
vector<vector<int>>graph(vertices,vector<int>(vertices,0)); // 2D vector of size vertices*vertices with all elements 0  // adjacency matrix

cout<<"Enter the edges with weight: \n";

for(int i=0;i<edges;i++){
    int u,v,wt;
    cin>>u>>v>>wt;
    graph[u][v]=wt;
    graph[v][u]=wt;  // for undirected graph
}

int q;
cout<<"enter number of query\n";
cin>>q;

cout<<"enter query in format type u, v\n";
while(q--){

int type,u,v;
cin>>type>>u>>v;

    if(type==1){
    if(graph[u][v]>0)
    cout<<"edge betwwen "<<u<<" and "<<v<<endl;
    else
    cout<<"not edge betwwen "<<u<<" and "<<v<<endl;


    }

    else 
    cout<<"weight of edge between"<<u<<" and "<<v<<" "<<graph[u][v]<<endl;
}


return 0;
}