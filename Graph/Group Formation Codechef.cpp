// You are given an undirected graph with N vertices and M edges.

// Assign every vertex to a group such that any two vertices connected by a path are assigned to the same group.

// Each group must have exactly one leader.

// Determine:

// The maximum possible number of groups.
// The number of ways to choose the group leaders.
// Since the number of ways can be large, print it modulo 
// 10^9+7

// Approach: count connected component and number of node in each component

#include <bits/stdc++.h>
using namespace std;

const int mod=1e9+7;

void bfs(int src,int &cnt,vector<vector<int>>&adj,vector<int>&visited){ 
	  
	  queue<int>q;
	  q.push(src);
	  visited[src]=1;
	  cnt++;
	  
	  while(!q.empty()){
	      
	      int node=q.front();
	      q.pop();
	      
	    for(int child:adj[node]){
	        
	        if(!visited[child]){
	        q.push(child);
	        visited[child]=1;
	        cnt++;     
	        }
	    }  
	  }
    
}

int main() {

	  int n,m;
	  cin>>n>>m;
	  
	  vector<vector<int>>adj(n+1);
	  
	  while(m--){
	  int u,v;
	  cin>>u>>v;
	  adj[u].push_back(v);
	  adj[v].push_back(u);
	  
	  }
	  
	  vector<int>visited(n+1,0);
	  long long int cntg=0,cntl=1;
	  
	  for(int i=1;i<=n;i++){
	      
      if(!visited[i]){
         int cnt=0; 
        bfs(i,cnt,adj,visited);
        cntg++;
        cntl=(cntl*cnt)%mod;
      }
      
	  cout<<cntg<<" "<<cntl<<endl;
	}

}
