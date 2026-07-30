#include<bits/stdc++.h>
using namespace std;

void dfs(int src,vector<vector<int>>&adj,vector<int>&cntsub){

    cntsub[src]++;

    for(int child:adj[src]){
        dfs(child,adj,cntsub);
        cntsub[src]+=cntsub[child];
    }
}

 
int main()
{
int n;
cin>>n;
vector<vector<int>>adj(n+1);

for(int i=2;i<=n;i++){
   int node;
   cin>>node;
   adj[node].push_back(i); 
}

vector<int>cntsub(n+1,0);
dfs(1,adj,cntsub);

for(int i=1;i<=n;i++){
cout<<cntsub[i]-1<<" ";
}
return 0;
}