#include<bits/stdc++.h>
using namespace std;

int dfsxor( vector<vector<int>>&graph,vector<int>&xorSubtreeValue,int src,vector<bool>visited){
  
    visited[src]=1;
    int xorval=src;

    for(auto child:graph[src]){

        if(!visited[child]){
         xorval^=dfsxor(graph,xorSubtreeValue,child,visited);
            
    }
}

xorSubtreeValue[src]=xorval;
return xorval;
}


void xorSubtreeQuery(int vertexes,vector<vector<int>>&edgeslist,vector<int>&xorSubtreeValue){

    vector<vector<int>>graph(vertexes);

    for(auto edge:edgeslist){

        int u=edge[0];
        int v=edge[1];
        graph[u].push_back(v);
        graph[v].push_back(u);
    }

    
    vector<bool>visited(vertexes,0);

    dfsxor(graph,xorSubtreeValue,0,visited);
}
 
int main()
{
    int vertexes, edges;
    cout << "Enter the number of vertexes and edges: ";
    cin >> vertexes >> edges;
  
    cout<< "Enter the edges: \n";

    vector<vector<int>>edgeslist;

    while(edges--){
        int u, v;
        cin >> u >> v;
        edgeslist.push_back({u, v});
       
    }

    vector<int>xorSubtreeValue(vertexes,0);

    xorSubtreeQuery(vertexes, edgeslist,xorSubtreeValue);

    int q;
    cout << "Enter the number of queries: ";
    cin >> q;

    cout << "Enter the vertexes for which you want to find the XOR of subtree: \n";

    while (q--) {
        int vertex;
        cin >> vertex;
        cout << "XOR of subtree rooted at vertex " << vertex << " is: " << xorSubtreeValue[vertex] << endl;
    }
   
    return 0;
}