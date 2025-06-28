#include<bits/stdc++.h>
using namespace std;

void transposeedge(vector<vector<int>>&edges){

    for(auto &edge:edges){
        swap(edge[0],edge[1]);
    }
}

void transposelist(vector<vector<int>>&graph,int vertices){
  
  vector<vector<int>>revgraph(vertices);

  for(int i=0;i<vertices;i++){

 for(auto node:graph[i]){
   revgraph[node].push_back(i);
 }
 
  }

  cout<<"transpose adjacency list\n";

for(int i=0;i<vertices;i++){
 cout<<i<<": ";

 for(auto node:revgraph[i]){
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

vector<vector<int>>edges;

vector<vector<int>>graph(vertices);

while(edge--){
   int u,v;
   cin>>u>>v;

   edges.push_back({u,v}); 
   graph[u].push_back(v);
}

cout<<"original adjacency list\n";

for(int i=0;i<vertices;i++){
 cout<<i<<": ";

 for(auto node:graph[i]){
    cout<<node<<" ";
 }
 cout<<endl;
}

transposelist(graph,vertices);


cout<<"original edge direction\n";

for(auto edge:edges){
    cout<<edge[0]<<" "<<edge[1]<<endl;
}

transposeedge(edges);
 
cout<<"transpose edge direction\n";

for(auto edge:edges){
    cout<<edge[0]<<" "<<edge[1]<<endl;
}
 
return 0;
}