#include<bits/stdc++.h>
using namespace std;

class Graph{
    public:
    unordered_map<int,list<int>>adj;
    void addEdge(int u,int v,bool direction){
        // direction->0  undirected
        //  direction->1  directed
        // create edge from u to v
          adj[u].push_back(v);
          // undirected 
          if(direction==0){
            adj[v].push_back(u);
            
          }

    }

    void printAdjlist(){
        for(auto it:adj){
            cout<<it.first<<"->";
            for(auto j:it.second){
                cout<<j<<" ";

            }
            cout<<endl;
        }
    }

};

 
int main()
{
cout<<"enter number of nodes\n";
int n;
cin>>n;

cout<<"enter number of edges \n";
int m;
cin>>m;
  Graph g;
 for(int i=0;i<m;i++){
    int u,v;
    cin>>u>>v;
    // creating undirected graph
    g.addEdge(u,v,0);
 }

 // printing graph
 g.printAdjlist();

    return 0;
}