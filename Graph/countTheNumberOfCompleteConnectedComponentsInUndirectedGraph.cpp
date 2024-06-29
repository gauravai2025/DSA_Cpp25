   #include <bits/stdc++.h>
using namespace std;

void bfs( int source ,map<int,vector<int>>&adj, map<int,bool>&visited,vector<int>&node ){
     queue<int>q;
     q.push(source);
     visited[source]=1;
     node.push_back(source);

     while(!q.empty()){
        int curr=q.front();
        q.pop();

        for(auto neighbour:adj[curr]){
            if(visited[neighbour]==0){
                visited[neighbour]=1;
                q.push(neighbour);
                node.push_back(neighbour);
            }
        }
     }

    }



int countCompleteComponents(int n, vector<vector<int>>&edges) {
         
       int size=edges.size();
       map<int,vector<int>>adj;
         
         for(int i=0;i<size;i++){
            adj[edges[i][0]].push_back(edges[i][1]);
            adj[edges[i][1]].push_back(edges[i][0]);
         }

         map<int,bool>visited;

         int ans=0;

         for(int i=0;i<n;i++){

            if(visited[i]==0){
                vector<int>node;
                bfs(i,adj,visited,node);
                  
             if(node.size()==1){
                  ans++;
                  continue;
            }
                int cnt=node.size();
                int prev=0;
                  bool flag=1;
                for(auto it:node){
                    if(prev==0){
                        prev=adj[it].size();
                    }

                    else{
                      if(prev!=adj[it].size()){
                        flag=0;
                        break;
                      }  
                    }
                }

                if(flag  && prev==cnt-1)
                ans++;
            }
         }

         return ans;
}



int main() {

int vertex,num_edges;
cin>>vertex>>num_edges;
vector<vector<int>>edges;

while(num_edges--){
	int u,v;
	cin>>u>>v;
	edges.push_back({u,v});

}

  cout<<countCompleteComponents(vertex,edges)<<endl;

}
   