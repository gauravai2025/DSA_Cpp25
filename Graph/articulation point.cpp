#include<bits/stdc++.h>
using namespace std;

int timer=0;

  void dfsarticulation(int src,int parent,vector<int>&visited, vector<int>&tin,vector<int>&low,vector<vector<int>>&adj,vector<int>&ans){
       
       low[src]=timer;
        visited[src]=1;
        tin[src]=timer;
        timer++;
        int child=0;

        for(int nbr:adj[src]){
        if(nbr==parent) continue;

        if(!visited[nbr]){

         dfsarticulation(nbr,src,visited,tin,low,adj,ans);
         low[src]=min(low[src],low[nbr]);

         if(parent!=-1 && low[nbr]>=tin[src])
         ans[src]=1;
         child++;
        }

        else
    low[src]=min( low[src],low[nbr]);
        }

    if(child>1 && parent==-1)
    ans[src]=1;

    }

void articulationPoints(int n, vector<vector<int>>&connections,vector<int>&articulationvertex){
vector<vector<int>>adj(n);
vector<int>visited(n,0);
vector<int>ans(n,0);


for(auto edge:connections){
int u=edge[0];
int v=edge[1]; 
adj[u].push_back(v);
adj[v].push_back(u);
}

vector<int>tin(n,0);
vector<int>low(n,0);

for(int i=0;i<n;i++){
    if(!visited[i])
    dfsarticulation(i,-1,visited,tin,low,adj,ans);
}

for(int i=0;i<n;i++){
if(ans[i])
articulationvertex.push_back(i);  
}
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

    vector<int>articulationvertex;
    articulationPoints(vertex, connections, articulationvertex);

    if(articulationvertex.size()==0){
        cout<<"no articulation point found\n";
        return 0;
    }

    cout<<"all articulation points are: \n";

    for(auto vertex:articulationvertex){
        cout<<vertex<<" ";
    }
 
    return 0;
}