#include<bits/stdc++.h>
using namespace std;

const int mod=1e9+7;

void bfs(int src,vector<vector<int>>&adj,int &dest,vector<int>&visited,vector<int>&distance,vector<int>&numway){

    queue<pair<int,int>>q;
    q.push({src,0});

    visited[src]=1;
    distance[src]=0;
    numway[src]=1;

     while(!q.empty()){

      int node=q.front().first;
      int lvl=q.front().second;
      q.pop();

      for(int child:adj[node]){

        if(distance[child]>lvl+1){
        distance[child]=lvl+1;
        numway[child]=numway[node];
        }

        else if(distance[child]==lvl+1)
        numway[child]+=numway[node];

        numway[child]%=mod;

        if(!visited[child]){
         q.push({child,lvl+1});
         visited[child]=1;   
      }
    }
}
}
 
int main()
{
 int n,m;
 cout<<"enter number of vertices and edges \n";
 cin>>n>>m;

 vector<vector<int>>adj(n+1);

 while(m--){
  int u,v;
  cin>>u>>v;
  adj[u].push_back(v);
  adj[v].push_back(u);  
 }

vector<int>visited(n+1,0);
vector<int>distance(n+1,INT_MAX);
vector<int>numway(n+1,0);

bfs(1,adj,n,visited,distance,numway);
cout<<numway[n]<<endl;
return 0;
}