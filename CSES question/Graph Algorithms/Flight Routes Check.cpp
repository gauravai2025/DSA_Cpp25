#include<bits/stdc++.h>
using namespace std;

void dfs(int src,vector<int>&visitedrev,vector<vector<int>>&adjrev){

    visitedrev[src]=1;

    for(int child:adjrev[src]){
    if(!visitedrev[child])
    dfs(child,visitedrev,adjrev);
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
    int node1=-1,node2=-1;

    while(!st.empty()){
    int src=st.top();
    st.pop();  
    if(!visitedrev[src]){  
    dfs(src,visitedrev,adjrev);
    cntcompo++;
    if(node1==-1)
    node1=src;
    else if(node2==-1)
    node2=src;
    }
}

if(cntcompo==1)
cout<<"YES\n";
else{
cout<<"NO\n";
cout<<node2<<" "<<node1;
}

return 0;
}