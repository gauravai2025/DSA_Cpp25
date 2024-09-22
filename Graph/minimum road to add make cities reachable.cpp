#include<bits/stdc++.h>
using namespace std;

class Graph{
    public:
    unordered_map<int,list<int>>adj;

    void addEdge(int u,int v){
      
        // create edge from u to v
          adj[u].push_back(v);
    
             // create edge from v to u
            adj[v].push_back(u);

    }

   

     void bfs(unordered_map<int,bool>&visited,int source ){

        queue<int>q;
        q.push(source);
        // mark node as visited
        visited[source]=true;
        while(!q.empty()){
        
            int frontnode=q.front();
            
            q.pop();
            // traverse all adjacent nodes of frontnode
            for(auto &nbr:adj[frontnode]){
                if(!visited[nbr]){
                    // mark node as visited
                    visited[nbr]=true;
                    q.push(nbr);
            }

        }

    }

     }

};


 
int main()
{
cout<<"enter number of nodes / cities\n";
int n;
cin>>n;

cout<<"enter number of edges/ roads \n";
int m;
cin>>m;
  Graph g;

cout<<"enter roads\n";

 for(int i=0;i<m;i++){
    int u,v;
    cin>>u>>v;
    // creating undirected graph
    g.addEdge(u,v);
   
 }


   vector<int>new_road;
   unordered_map<int,bool>visited;

   for(int i=1;i<=n;i++){

    if(visited[i]!=1){
    g.bfs(visited,i);
    new_road.push_back(i);
   }

   }

int count_new_road=new_road.size();

if(count_new_road!=0)
count_new_road--;

   cout<<"new required roads: "<<count_new_road<<endl;

cout<<"required roads between cities\n";

   for(int i=0;i<new_road.size()-1;i++){
    cout<<new_road[i]<<" "<<new_road[i+1]<<endl;
   }

    return 0;
}