#include<bits/stdc++.h>
using namespace std;
 
int main()
{

int vertices,edges;
cin>>vertices>>edges;

vector<vector<int>>(vertices);

int u,v;

while(edges--){
    cin>>u>>v;
    graph[u].push_back(v);
    graph[v].push_back(u);
}

    return 0;
}