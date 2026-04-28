#include<bits/stdc++.h>
using namespace std;


void heightdfs(vector<vector<int>>&graph,int src,int hgt,int &hgtsum,vector<bool>&visited){

     hgtsum+=hgt;

    visited[src]=true;

    for(auto child:graph[src]){
        
        if(!visited[child]){
            heightdfs(graph,child,hgt+1,hgtsum,visited);
        }
    }

}



void distance(vector<vector<int>>&graph,int vertices){
    
    if(vertices<=1){
        cout<<0<<endl;
        return;
    }

   vector<int>dist(vertices+1,0);
    int hgtsum=0;

    for(int i=1;i<=vertices;i++){
    vector<bool>visited(vertices+1,false);
    hgtsum=0;

    heightdfs(graph,i,0,hgtsum,visited);
    dist[i]=hgtsum;

    }

    for(int i=1;i<=vertices;i++){
        cout<<dist[i]<<" ";
    }

}

int main()
{

int vertices,edges;
cin>>vertices;
edges=vertices-1;

vector<vector<int>>graph(vertices+1);

int u,v;

while(edges--){
    cin>>u>>v;
    graph[u].push_back(v);
    graph[v].push_back(u);
}

distance(graph,vertices);

    return 0;
}