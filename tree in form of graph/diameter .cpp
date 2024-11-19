#include<bits/stdc++.h>
using namespace std;


void heightdfs(vector<vector<int>>&graph,int src,int hgt,int &hgtmx,vector<bool>&visited){

    hgtmx=max(hgtmx,hgt);

    visited[src]=true;

    for(auto child:graph[src]){
        
        if(!visited[child]){
            heightdfs(graph,child,hgt+1,hgtmx,visited);
        }
    }

}



void diameter(vector<vector<int>>&graph,int vertices){

    int diamt=0;
    int hgtmx=0;

    for(int i=1;i<=vertices;i++){
    vector<bool>visited(vertices+1,false);

    heightdfs(graph,i,0,hgtmx,visited);
    diamt=max(diamt,hgtmx);

    }

    cout<<"The diameter of the tree is "<<diamt<<endl;

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

diameter(graph,vertices);

    return 0;
}