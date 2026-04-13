#include<bits/stdc++.h>
using namespace std;

void dfsmaxhgtnode(vector<vector<int>>&graph,int src,int hgt,int &hgtmx,vector<bool>&visited,int &maxhgtnode){
     
    if(hgt>hgtmx){

        hgtmx=hgt;
        maxhgtnode=src;
    }

    visited[src]=true;

    for(auto child:graph[src]){
        
        if(!visited[child]){
            dfsmaxhgtnode(graph,child,hgt+1,hgtmx,visited,maxhgtnode);
        }
    }

}

void dfsdiameter(vector<vector<int>>&graph,int src,int hgt,int &diamt,vector<bool>&visited){

    visited[src]=true;
    diamt=max(diamt,hgt);

    for(auto child:graph[src]){
        
        if(!visited[child]){
            dfsdiameter(graph,child,hgt+1,diamt,visited);
        }
    }

}

void diameter(vector<vector<int>>&graph,int vertices){

if(vertices<=1){
    cout<<0<<endl;
    return;
}

    int diamt=0;
    int hgtmx=0;

 vector<bool>visited(vertices+1,false);
  int maxhgtnode=-1;

// node 1 is root
  dfsmaxhgtnode(graph,1,0,hgtmx,visited,maxhgtnode);

 vector<bool>visited1(vertices+1,false);
//    // node maxhgtnode is root

    dfsdiameter(graph,maxhgtnode,0,diamt,visited1);

    cout<<diamt<<endl;

}

int main()
{

int vertices;
cin>>vertices;

vector<vector<int>>graph(vertices+1);

int u,v;
int edges=vertices-1;

while(edges--){
    cin>>u>>v;
    graph[u].push_back(v);
    graph[v].push_back(u);
}


diameter(graph,vertices);

    return 0;
}