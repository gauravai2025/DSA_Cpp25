#include<bits/stdc++.h>
using namespace std;
 
 void complementof_graph(vector<vector<int>>&graph,int vertices){

  vector<vector<int>>graphcomple(vertices);
   
   for(int i=0;i<vertices;i++){

    vector<int>visited(vertices,0);
    for(auto node:graph[i]){
        visited[node]=1;
    }

    for(int node=0;node<vertices;node++){
        if(visited[node]==0 && node!=i)
        graphcomple[i].push_back(node);
    }

   }

    cout<<"complement of graph\n";

   for(int i=0;i<vertices;i++){
    cout<<i<<": ";
    for(auto node:graphcomple[i]){
        cout<<node<<" ";
    }
    cout<<endl;
}

 }


int main()
{
int vertices,edge;
cout<<"Enter the number of vertices and edges: \n";
cin>>vertices>>edge;

vector<vector<int>>graphund(vertices);
vector<vector<int>>graphdir(vertices);

while(edge--){
   int u,v;
   cin>>u>>v;
   // undirected
   graphund[u].push_back(v);
   graphund[v].push_back(u);
  // directed
   graphdir[u].push_back(v);
}

cout<<"undirected garph\n";

for(int i=0;i<vertices;i++){
    cout<<i<<": ";
    for(auto node:graphund[i]){
        cout<<node<<" ";
    }
    cout<<endl;
}

complementof_graph(graphund,vertices);

cout<<"directed garph\n";

for(int i=0;i<vertices;i++){
    cout<<i<<": ";
    for(auto node:graphdir[i]){
        cout<<node<<" ";
    }
    cout<<endl;
}

complementof_graph(graphdir,vertices);

 return 0;
}