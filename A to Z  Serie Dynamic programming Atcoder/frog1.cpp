#include<bits/stdc++.h>
using namespace std;

 int solve(int idx,vector<int>& height,vector<int>&dp){
        // base case
        
        if(idx==0)
        return 0;
        
        if(dp[idx]!=-1)  // already calculated
        return dp[idx];
        
        // way1
      int cost1= abs(height[idx]-height[idx-1])+solve(idx-1,height,dp);
      
           // way2
           int cost2=INT_MAX;
           
          if(idx-2>=0)
        cost2= abs(height[idx]-height[idx-2])+solve(idx-2,height,dp);
      
      return dp[idx]=min(cost1,cost2);  // memoisation
        
    }
    
    int minimumcost(vector<int>& height, int n) {
        
          vector<int>dp(n,-1);// memeset

        return solve(n-1, height,dp);
    }
 
int main()
{

int n;
cin>>n;

vector<int>height(n);

for(int i=0;i<n;i++){
    cin>>height[i];
}

cout<<minimumcost(height,n);
 
 
 
    return 0;
}