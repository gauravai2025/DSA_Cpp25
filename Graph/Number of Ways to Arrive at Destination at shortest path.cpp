#include<bits/stdc++.h>
using namespace std;

// You are in a city that consists of n intersections numbered from 0 to n - 1 with bi-directional roads between some intersections. The inputs are generated such that you can reach any intersection from any other intersection and that there is at most one road between any two intersections.

// You are given an integer n and a 2D integer array roads where roads[i] = [ui, vi, timei] means that there is a road between intersections ui and vi that takes timei minutes to travel. You want to know in how many ways you can travel from intersection 0 to intersection n - 1 in the shortest amount of time.

// Return the number of ways you can arrive at your destination in the shortest amount of time. Since the answer may be large, return it modulo 109 + 7.

    int const mod=1e9+7;

    int countPaths(int n, vector<vector<int>>& roads){

        vector<vector<pair<int,int>>>adj(n);

        for(auto edge:roads){

          int u=edge[0];
          int v=edge[1];
          int wt=edge[2];

          // undirected graph
          adj[u].push_back({v,wt});
          adj[v].push_back({u,wt});

        }

        vector<long long int>dist(n,LONG_MAX);
        vector<int>numways(n,0);

        set<pair<long long int,int>>st;

        st.insert({0,0});
        dist[0]=0;
        numways[0]=1;

        while(!st.empty()){
         
        auto top=*st.begin();
        st.erase(st.begin());

     long long  int wt=top.first;
        int u=top.second;

        for(auto nbr:adj[u]){

        if(dist[nbr.first]==wt+nbr.second){   
        numways[nbr.first]+=numways[u];
        numways[nbr.first]%=mod;
        }

       else if(dist[nbr.first]>wt+nbr.second){

        // check already exist
        auto find=st.find({dist[nbr.first],nbr.first});

        if(find!=st.end()){
        st.erase({dist[nbr.first],nbr.first}) ;   
        }

        st.insert({nbr.second+wt,nbr.first});
        dist[nbr.first]= nbr.second+wt;

        numways[nbr.first]=numways[u];
       }

       }
        }

     int tlways=numways[n-1];

     return tlways;   
        
    }
 
int main()
{

    int vertices,edges;
    cin>>vertices>>edges;
   
    vector<vector<int>>roads;

    for(int i=0;i<edges;i++){
        int u,v,wt;
        cin>>u>>v>>wt;
        roads.push_back({u,v,wt});
    }

    cout<<countPaths(vertices,roads)<<endl;
 
    return 0;
}