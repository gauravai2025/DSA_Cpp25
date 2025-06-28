#include<bits/stdc++.h>
using namespace std;

void bfs(vector<vector<int>>&adj,vector<int>&dist,vector<int>&visited){

    queue<pair<int,int>>q;
    q.push({1,0});

    visited[1]=1;

    while(!q.empty()){

    int node=q.front().first;
    int lvl=q.front().second;
    q.pop();
     
     dist[node]=lvl;

     for(auto child:adj[node]){
        if(!visited[child]){
            q.push({child,lvl+1});
            visited[child]=1;
        }
     }

    }

}
 
int main()
{

int n;
cin>>n;

vector<int>dist(n+1,INT_MAX);
vector<int>visited(n+1,0);

vector<vector<int>>adj(n+1);

while(n>1){
int u,v;
cin>>u>>v;
adj[u].push_back(v);
adj[v].push_back(u);
n--;
}

 
bfs(adj,dist,visited);

int q;
cin>>q;

while(q--){

int type,x,y;
cin>>type>>x>>y;

int disty=dist[y];
int distx=dist[x];

if(distx==INT_MAX || disty==INT_MAX){
cout<<"NO\n";
continue;
}

if(type==1){
if(distx>disty)
cout<<"YES\n";
else
cout<<"NO\n";
}

else{
if(distx<disty)
cout<<"YES\n";
else
cout<<"NO\n";
}
}

return 0;
}