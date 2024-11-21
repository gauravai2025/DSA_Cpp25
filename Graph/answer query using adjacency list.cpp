#include<bits/stdc++.h>
using namespace std;


// q query answer type 1 : check edge between u and v
    //type 2 find edge weight b/w u and v 
    // time -O(n) for both type query
 
int main()
{

int vertices,edges;
cout<<"Enter the number of vertices and edges: ";
cin>>vertices>>edges;
vector<vector<pair<int,int>>>graph(vertices); // 2D vector of size vertices with all elements 0  // adjacency list

cout<<"Enter the edges with weight: \n";

for(int i=0;i<edges;i++){
    int u,v,wt;
    cin>>u>>v>>wt;
    graph[u].push_back({v,wt});
    graph[v].push_back({u,wt});  // for undirected graph
}


int q;
cout<<"enter number of query\n";
cin>>q;

cout<<"enter query in format type u, v\n";
while(q--){

int type,u,v;
cin>>type>>u>>v;

    if(type==1){
    bool isedgeexist=0;  

    for(auto child:graph[u]){
    if(child.first==v)
    isedgeexist=1;
    }

    if(isedgeexist)
    cout<<"edge betwwen "<<u<<" and "<<v<<endl;
    else
    cout<<"not edge betwwen "<<u<<" and "<<v<<endl;


    }

    else {

    int wt=0;
for(auto child:graph[u]){
    if(child.first==v)
    wt=child.second;
    }
    
 cout<<"weight of edge between"<<u<<" and "<<v<<" "<<wt<<endl;
}

}

return 0;
}