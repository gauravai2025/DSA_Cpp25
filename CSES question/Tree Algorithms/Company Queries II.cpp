#include<bits/stdc++.h>
using namespace std;

// lca method 3 using binary lifting in o(logn) time

vector<vector<int>>dp;

    void TreeAncestor(int n,vector<int>& parent){
      int col=log2(n)+1;
      dp.resize(n+1,vector<int>(col,-1));

      for(int i=1;i<=n;i++){
      dp[i][0]=parent[i];
      }

      for(int j=1;j<col;j++){
        for(int i=1;i<=n;i++){
            if(dp[i][j-1]!=-1)
          dp[i][j]=dp[dp[i][j-1]][j-1];  
        }
      }  
    }

void dfsdepth(int src,vector<vector<int>>&adj,vector<int>&depth,int lvl,int par)
{
  depth[src]=lvl;
  for(int child:adj[src]){
    if(par!=child)
    dfsdepth(child,adj,depth,lvl+1,src);
  }
}
    
    int lca(int u,int v,vector<int>&depth,int n){
    
    int maxdepth=log2(n);

    if(depth[v]>depth[u])
    swap(u,v);

    int diff=depth[u]-depth[v];

    for(int i=0;i<=maxdepth;i++){
      if(diff&(1<<i))
      u=dp[u][i];
    }

    if(u==v)
    return u;

      for(int i=maxdepth;i>=0;i--){
      
      if(dp[u][i]==-1 || dp[v][i]==-1)
      continue;

      if(dp[u][i]!=dp[v][i]){
       u=dp[u][i];
       v=dp[v][i]; 
      }
      }  
    
      int lcanode=dp[u][0];
      return lcanode;
    }

int main()
{

int vertices,q;
cin>>vertices>>q;

vector<int>parent(vertices+1);
vector<vector<int>>adj(vertices+1);


for(int i=2;i<=vertices;i++){
  cin>>parent[i];
  adj[parent[i]].push_back(i);
}

vector<int>depth(vertices+1,0);

dfsdepth(1,adj,depth,0,-1);
TreeAncestor(vertices,parent);

while(q--){
int x,y;
cin>>x>>y;
cout<<lca(x,y,depth,vertices)<<endl;
}
return 0;
}