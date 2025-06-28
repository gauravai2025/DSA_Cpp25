#include<bits/stdc++.h>
using namespace std;

  void dfsbacktrack(vector<vector<int>>& graph,vector<vector<int>>&ans,int src,int dst,vector<int>&path){

        if(src==dst){
        //  path.push_back(dst);
         ans.push_back(path);
         return ;
        }

        // explore all paths

        for(auto nbr:graph[src]){
            path.push_back(nbr);
            dfsbacktrack(graph,ans,nbr,dst,path);
            // backtrack
            path.pop_back();
        }


    }

    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>&graph, vector<vector<int>>&ans){
        
        int n=graph.size();
        vector<int>path;

         path.push_back(0);
        dfsbacktrack(graph,ans,0,n-1,path);

        cout<<"all shortest path:\n";

        for(auto path:ans){
            for(auto node:path){
            cout<<node<<" ";
            }
            cout<<endl;
        }  
    }
 
int main()
{

int vertex,edge;
cin>>vertex>>edge;

vector<vector<int>>graph(vertex);

while(edge--){
    int u,v;
    cin>>u>>v;
    graph[u].push_back(v);
}

 vector<vector<int>>ans;

allPathsSourceTarget(graph,ans);
    return 0;
}