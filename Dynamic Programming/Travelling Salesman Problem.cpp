#include<bits/stdc++.h>
using namespace std;

// Given a matrix cost of size n where cost[i][j] denotes the cost of moving from city i to city j. Your task is to complete a tour from city 0 (0-based index) to all other cities such that you visit each city exactly once and then at the end come back to city 0 at minimum cost

  int solve(vector<vector<int>>&cost,vector<vector<int>>&dp,int src,int numcity,int allpossible,int mask){
    
    // base case
    if(mask==allpossible){
      return cost[src][0];   
    }

    if(dp[src][mask]!=-1)  // already calculated
    return dp[src][mask];
    
    int costmx=INT_MAX;
    
   for(int i=0;i<numcity;i++){

    if((mask&(1<<i))==0) // not visited
    {
        
     mask^=(1<<i);

    costmx=min(costmx,cost[src][i]+solve(cost,dp,i,numcity,allpossible,mask));   
    // backtrack
    mask^=(1<<i);
    }

   }
   
   return dp[src][mask]=costmx;
    

    }
    
    int tsp(vector<vector<int>>& cost){
     
    int numcity=cost.size();
    int allpossbl=(1<<numcity)-1;
     
    vector<vector<int>>dp(numcity,vector<int>(allpossbl,-1));
    
    return solve(cost,dp,0,numcity,allpossbl,1);
    
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