#include<bits/stdc++.h>
using namespace std;
 
 // given Q queries Q<=10^5
 // in each query given vertex v
 // find the sum of subtree of vertex v and number of even number in subtree of vertex v
    // time -O(1) for each query

    void precomputedfs(int src,int par, vector<vector<int>>&graph, vector<int>&subtree_sum,  vector<int>&even_count,vector<int>&val){

        subtree_sum[src]+=val[src];
        //  subtree_sum[src]+=src;

        if(val[src]%2==0)
        even_count[src]+=1;

        // if(src%2==0)
        // even_count[src]+=1;

    for(auto child:graph[src]){
        if(child==par) continue;  // check visited

    precomputedfs(child,src,graph,subtree_sum,even_count,val);
    subtree_sum[src]+=subtree_sum[child];
    even_count[src]+=even_count[child];

    }


    }

int main()
{
    int vertexes,edges;
    cout<<"Enter the number of vertexes and edges: ";
    cin>>vertexes>>edges;

    vector<vector<int>>graph(vertexes+1); // 2D vector of size vertexes with all elements 0  // adjacency list

    cout<<"Enter the edges: \n";

    for(int i=0;i<edges;i++){
        int u,v;
        cin>>u>>v;
        graph[u].push_back(v);
        graph[v].push_back(u);  // for undirected graph
    }

    vector<int>subtree_sum(vertexes+1,0);
    vector<int>even_count(vertexes+1,0);
    vector<int>val(vertexes+1,0);

    cout<<"Enter the values of vertexes: \n";

    for(int i=1;i<=vertexes;i++){
        cin>>val[i];
    }

    precomputedfs(1,-1,graph,subtree_sum,even_count,val);

    int q;
    cout<<"Enter the number of queries: ";
    cin>>q;

    cout<<"Enter the vertexes : \n";

    while(q--){
        int v;
        cin>>v;
        cout<<"Subtree sum of vertex "<<v<<" is: "<<subtree_sum[v]<<endl;
        cout<<"Number of even numbers in subtree of vertex "<<v<<" is: "<<even_count[v]<<endl;
    }     
     
    //  for(int i=1;i<=vertexes;i++){
    //     cout<<"Subtree sum of vertex "<<i<<" is: "<<subtree_sum[i]<<endl;
    //     cout<<"Number of even numbers in subtree of vertex "<<i<<" is: "<<even_count[i]<<endl;
    // }
     
    //  cout<<subtree_sum[i]<<" "<<even_count[i]<<endl;
     
 
    return 0;
}