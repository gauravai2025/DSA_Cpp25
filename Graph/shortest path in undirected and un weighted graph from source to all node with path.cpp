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

   

void bfs(unordered_map<int,bool>&visited,int source, vector<int>&parent ){

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
                    parent[nbr]=frontnode;
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
   // mark parent of each node
   vector<int>parent(n,-1);


    g.bfs(visited,src,parent);

    cout<<"shortest distance: "<<"                   "<<"one of possible path: \n";


for(int i=0;i<n;i++){
   
  int source=src;
  int destination=i;
 
 stack<int>path;
bool ispossible=1;

  while(destination!=source){
    path.push(destination);
    destination=parent[destination];

    if(destination ==-1){
      ispossible =0;
        break;
    }

  }

  if(ispossible){
    path.push(src);

    cout<<path.size()-1<<"      ";


    while(!path.empty()){
        cout<<path.top()<<" ";
        path.pop();
    }

    cout<<endl;

  }

  else{
   cout<<-1<<"   ";
  cout<<"IMPOSSIBLE to reach\n"<<endl;
  }

}


    return 0;
}