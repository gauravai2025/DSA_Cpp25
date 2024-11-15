#include<bits/stdc++.h>
using namespace std;

   int solve(int idx,vector<int>& height,int k,vector<int>&dp){
        // base case
        
        if(idx==0)
        return 0;
        
          
        if(dp[idx]!=-1)  // already calculated
        return dp[idx];
        
        // k way
        int cost=INT_MAX;
        
        for(int j=1;j<=k;j++){
            if(idx-j>=0)
            
        cost=min(cost, abs(height[idx]-height[idx-j])+solve(idx-j,height,k,dp));
        }
        
      return dp[idx]=cost;
        
    }
    
    int minimizeCost(int k, vector<int>& arr) {
        int n=arr.size();
         vector<int>dp(n,-1);// memeset
        return solve(n-1, arr,k,dp);
    }
 
int main()
{

int n,k;
cin>>n>>k;

vector<int>height(n);

for(int i=0;i<n;i++){
    cin>>height[i];
}

cout<<minimizeCost(k,height);
 
 
 
    return 0;
}