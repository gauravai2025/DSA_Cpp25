#include<bits/stdc++.h>
using namespace std;

void dfs(int src,vector<int>&visitedrev,vector<vector<int>>&adjrev,map<int,int>&mp,int lvl){

    visitedrev[src]=1;
    mp[src]=lvl;

    for(int child:adjrev[src]){
    if(!visitedrev[child])
    dfs(child,visitedrev,adjrev,mp,lvl);
    }
}

void toposortdfs(stack<int>&st,int src,vector<int>&visited,vector<vector<int>>&adj){

    visited[src]=1;

    for(auto child:adj[src]){
        if(!visited[child])
        toposortdfs(st,child,visited,adj);
    }
    st.push(src);
}
 
int main()
{
    int n,m;
    cin>>n>>m;

    vector<vector<int>>adj(n+1);

    while(m--){
      int a,b;
      cin>>a>>b;
      adj[a].push_back(b);  
    }
    
    // topological sort
    vector<int>visited(n+1,0);
    stack<int>st;

    for(int i=1;i<=n;i++){
    if(!visited[i])  
    toposortdfs(st,i,visited,adj);
    }

    // transpose/reverse graph
     
    vector<vector<int>>adjrev(n+1);

    for(int i=1;i<=n;i++){
        for(int node:adj[i]){
          adjrev[node].push_back(i);  
        }
    }

    int cntcompo=0;
    vector<int>visitedrev(n+1,0);
    map<int,int>mp;

    while(!st.empty()){
    int src=st.top();
    st.pop();  
    if(!visitedrev[src]){  
    cntcompo++;
    dfs(src,visitedrev,adjrev,mp,cntcompo);
    }
}

cout<<cntcompo<<endl;

for(auto it:mp){
cout<<it.second<<" ";
}

return 0;
}