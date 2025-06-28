#include<bits/stdc++.h>
using namespace std;

 bool bfsconnected(vector<set<int>>& adj, int vertex, int src) {

    vector<int> visited(vertex,0);
    queue<int> q;
    q.push(src);
    visited[src] = 1;

    while (!q.empty()) {
        int node = q.front();
        q.pop();

        for (auto child: adj[node]) {

        if (!visited[child]) {
            q.push(child);
            visited[child] = 1;
        }

        }
    }

    for (int i = 0; i< vertex; i++){
        if (visited[i] == 0) {
           return 1;
        }
    }

    return 0;
}

    vector<vector<int>> criticalConnections(int n, vector<vector<int>>& connections, vector<vector<int>>&ans){
       
        int edge=connections.size();
        vector<set<int>>adj(n+1);

        for(auto edge:connections){
            int u=edge[0];
            int v=edge[1];
            adj[u].insert(v);
            adj[v].insert(u);
        }

        for(int i=0;i<edge;i++){
            int u=connections[i][0];
            int v=connections[i][1];

           auto it = adj[u].find(v);
           bool back1=0,back2=0;

        if (it != adj[u].end()) {
            adj[u].erase(it);
            back1=1;
        }

        it = adj[v].find(u);

        if (it != adj[v].end()) {
            adj[v].erase(it);
            back2=1;
        }


    if(bfsconnected(adj,n,0))
    ans.push_back({u,v});
    
    if(back1)
    adj[u].insert(v);

    if(back2)
    adj[v].insert(u);

    }
     
    return ans;
    }
 
int main()
{

    int vertex,edge;
    cout<<"enter number of vertex and edge\n";
    cin>>vertex>>edge;

    vector<vector<int>>connections;

    while(edge--){
        int u,v;
        cin>>u>>v;
     connections.push_back({u,v});
    }

     vector<vector<int>>ans;

    criticalConnections(vertex,connections,ans);

    cout<<"all critical connection or bridges\n";
      
      for(auto edge:ans){
        cout<<edge[0]<<" "<<edge[1]<<endl;
      }
 
    return 0;
}