#include<bits/stdc++.h>
using namespace std;

// 802. Find Eventual Safe States

// There is a directed graph of n nodes with each node labeled from 0 to n - 1. The graph is represented by a 0-indexed 2D integer array graph where graph[i] is an integer array of nodes adjacent to node i, meaning there is an edge from node i to each node in graph[i].

// A node is a terminal node if there are no outgoing edges. A node is a safe node if every possible path starting from that node leads to a terminal node (or another safe node).

// Return an array containing all the safe nodes of the graph. The answer should be sorted in ascending order.

 void bfskahnsoutdegree(vector<int>&ans,vector<int>&outdegree, vector<vector<int>>&adjrev){

        queue<int>q;

        for(int i=0;i<outdegree.size();i++){
            if(outdegree[i]==0)
            q.push(i);

        }

        while(!q.empty()){

           int top=q.front();
           q.pop();
           ans.push_back(top); 

           for(auto nbr:adjrev[top]){
            outdegree[nbr]--;

            if(outdegree[nbr]==0){
                q.push(nbr);
            }

           }

        }


    }

    void eventualSafeNodes(vector<vector<int>>& graph) {

        int vertice=graph.size();
        vector<int>outdegree(vertice,0);

        vector<vector<int>>adjrev(vertice);

        for(int i=0;i<vertice;i++){
            outdegree[i]=graph[i].size();
            for(auto edge:graph[i]){
                adjrev[edge].push_back(i);
            }
          
        }

        vector<int>ans;

        bfskahnsoutdegree(ans,outdegree,adjrev);
        
      sort(ans.begin(),ans.end());

    cout<<"reverse topological sorting\n";

    for(auto ele:ans){
        cout<<ele<<" ";
    }

     }
 
int main()
{
int vertice,edges;
cout<<"enter number of vertices and edges\n";
cin>>vertice>>edges;

vector<vector<int>>graph(vertice);

cout<<"enter edges\n";

for(int i=0;i<edges;i++){
    int u,v;
    cin>>u>>v;
    graph[u].push_back(v);
}

eventualSafeNodes(graph);

    return 0;
}