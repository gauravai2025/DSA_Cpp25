#include<bits/stdc++.h>
using namespace std;

// Given a matrix cost of size n where cost[i][j] denotes the cost of moving from city i to city j. Your task is to complete a tour from city 0 (0-based index) to all other cities such that you visit each city exactly once and then at the end come back to city 0 at minimum cost

 void dfsbacktrack(vector<vector<int>>&cost, vector<int>&visited,int src,int wt,int &ans,int numcity){
    
    bool complete=1;
    
    for(int i=0;i<numcity;i++){
        
    if(visited[i]==0)
    complete=0;
    }
    
    if(complete){
    ans=min(ans,wt+cost[src][0]);
    return ;
    }
    
    for(int i=0;i<numcity;i++){
        
     if(visited[i]==0){
      visited[i]=1;
       dfsbacktrack(cost,visited,i,wt+cost[src][i],ans,numcity);
        // backtrack
       visited[i]=0;
    }
    
    }
    
    }
    

    int tsp(vector<vector<int>>& cost) {
     
     int ans=INT_MAX;
     int numcity=cost.size();
     
     vector<int>visited(numcity,0);
     
     visited[0]=1;
     
     dfsbacktrack(cost,visited,0,0,ans,numcity);
     
     return ans;
    }
 
int main(){

    int numcity;
    cout<<"enter of city\n";
    cin>>numcity;

    vector<vector<int>>cost(numcity,vector<int>(numcity,0));

    cout<<"enter distance in form of matrix\n";

    for(int i=0;i<numcity;i++){
        for(int j=0;j<numcity;j++){
          cin>>cost[i][j];  
    }

 }
cout<<tsp(cost);
return 0;
}