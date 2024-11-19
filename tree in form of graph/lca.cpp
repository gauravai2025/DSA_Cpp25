#include<bits/stdc++.h>
using namespace std;

// lca method 2 without using path array
// lca method 3 using binary lifting in o(logn) time

void dfsfindparent(vector<vector<int>>&graph,int src,  vector<int>&parent,int par){
    parent[src]=par;

    for(auto child:graph[src]){
        if(child!=par){  // mark visited  use parent array
            dfsfindparent(graph,child,parent,src);
        }
    }

}

void lca(vector<vector<int>>&graph,int vertices,int x,int y){

    vector<int>parent(vertices+1,-1);
    // first node is root so parent is -1
    dfsfindparent(graph,1,parent,-1);

    vector<int>path1,path2;

    while(x!=-1){
        path1.push_back(x);
        x=parent[x];
    }

    while(y!=-1){
        path2.push_back(y);
        y=parent[y];
    }

    reverse(path1.begin(),path1.end());
    reverse(path2.begin(),path2.end());

    int sizecomm=min(path1.size(),path2.size());
    int lcaval=-1;

    for(int i=0;i<sizecomm;i++){

    if(path1[i]==path2[i]){
        lcaval=path1[i];
    }
    
    else{
        break;
    }

    }

    cout<<"The lca of the nodes is "<<lcaval<<endl;


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

int x,y;
cout<<"Enter the nodes for which you want to find the lca\n"<<endl;
cin>>x>>y;

lca(graph,vertices,x,y);

    return 0;
}