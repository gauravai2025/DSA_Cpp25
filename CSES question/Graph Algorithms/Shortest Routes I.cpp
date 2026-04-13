#include<bits/stdc++.h>
using namespace std;


void dijkstra(vector<vector<pair<long long int,long long int>>>&adj, int src,vector<long long int>&dist) {
      
        int vertices=adj.size();
        set<pair<long long int,int>>st;
        
        st.insert({0,src});
        dist[src]=0;
        
        while(!st.empty()){
            
            auto top=*(st.begin());
          long long  int nodedistance=top.first;
            int topnode=top.second;
            
            st.erase(st.begin());
            
            for(auto nbr:adj[topnode]){
                
                if((nodedistance+nbr.second)<dist[nbr.first]){
                    
                auto findnode=st.find({dist[nbr.first],nbr.first});
                
                if(findnode!=st.end())
                st.erase(findnode);
                
                st.insert({nodedistance+nbr.second,nbr.first});
                dist[nbr.first]=nodedistance+nbr.second;
                }
            }
        }
        
        
    }
 
int main()
{
    int vertices,edges;
    cin>>vertices>>edges;

    vector<vector<pair<long long int,long long int>>>adj(vertices+1);

    while(edges--){
        int u,v,w;
        cin>>u>>v>>w;
        adj[u].push_back({v,w});
       
    }

   vector<long long int>distance(vertices+1,LONG_MAX);

    dijkstra(adj,1,distance);


    for(int i=1;i<=vertices;i++){
        cout<<distance[i]<<" ";
    }
    
    return 0;
}