#include<bits/stdc++.h>
using namespace std;

void dfs(vector<vector<int>>& isConnected,int src, vector<bool>&visited){

        visited[src]=1;

        for(int child=0;child<isConnected.size();child++){
            if(isConnected[src][child]==1 && visited[child]==0)
              dfs(isConnected,child,visited);
    } 
}

int findCircleNum(vector<vector<int>>& isConnected) {
    
    int numnode=isConnected.size();
    vector<bool>visited(numnode,0);
    int cntprovince=0;

    for(int i=0;i<numnode;i++){
        if(!visited[i]){
            cntprovince++;
            dfs(isConnected,i,visited);  
        }
    }

    return cntprovince;
}

int main()
{
    int node,edge;
    cout<<"enter number of nodes and edges:\n";
    cin>>node>>edge;

    // FIX: use node x node matrix (0-based)
    vector<vector<int>>mat(node,vector<int>(node,0));

    cout<<"enter edges (0-based indexing):\n";

    while(edge--){
        int u,v;
        cin>>u>>v;
        mat[u][v]=1;
        mat[v][u]=1; 
    }

    // self connection (important for this problem)
    for(int i=0;i<node;i++){
        mat[i][i]=1;
    }

    
    cout<<"number of provinces: "<<findCircleNum(mat);
    return 0;
}