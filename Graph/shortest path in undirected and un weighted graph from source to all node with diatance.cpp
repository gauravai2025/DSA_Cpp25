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

void bfs(unordered_map<int,bool>&visited,int source, vector<int>&distance){

        queue<pair<int,int>>q;
        q.push({source,0});
        // mark node as visited
        visited[source]=true;
        // int dist=0;
        distance[source]=0;

        while(!q.empty()){
        
            pair<int,int> frontnode=q.front();
            q.pop();
            
            // dist++;

            // traverse all adjacent nodes of frontnode
            for(auto &nbr:adj[frontnode.first]){
                if(!visited[nbr]){
                    // mark node as visited
                    visited[nbr]=true;
                    q.push({nbr,frontnode.second+1});
                    distance[nbr]=frontnode.second+1;
            }

        }

    }

     }

};


 
int main()
{

int n;
cin>>n;

int m;
cin>>m;

  Graph g;


 for(int i=0;i<m;i++){
    int u,v;
    cin>>u>>v;
    // creating undirected graph
    g.addEdge(u,v);
   
 }

int src;
cout<<"enter source\n";
cin>>src;

   unordered_map<int,bool>visited;

   vector<int>distance(n,-1);


    g.bfs(visited,src,distance);

    cout<<"node: "<<"          "<<"distance: \n";

    for(int i=0;i<n;i++){
        cout<<i<<"   "<<distance[i]<<endl;

    }



    return 0;
}