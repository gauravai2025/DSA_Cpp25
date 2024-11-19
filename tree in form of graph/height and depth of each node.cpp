#include<bits/stdc++.h>
using namespace std;

void heightdfs(vector<vector<int>>&graph,int src,int hgt,int &hgtmx,vector<bool>&visited){

    hgtmx=max(hgtmx,hgt);
    visited[src]=true;

    for(auto child:graph[src]){
        
        if(!visited[child]){
            dfs(graph,child,hgt+1,hgtmx,visited);
        }
    }

}

int main()
{

int vertices,edges;
cin>>vertices>>edges;

vector<vector<int>>graph(vertices+1);

int u,v;

while(edges--){
    cin>>u>>v;
    graph[u].push_back(v);
    graph[v].push_back(u);
}

vector<bool>visited(vertices+1,false);
int hgtmx=0;

heightdfs(graph,vertices,1,0,hgtmx,visited);

cout<<"The height of the tree is "<<hgtmx<<endl;

    return 0;
}