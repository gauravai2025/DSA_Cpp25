#include<bits/stdc++.h>
using namespace std;
 
long long int solve(int n,vector<int>&wt,vector<int>&val,int idx,int amount,vector<vector<long long int>>&dp){
 
// base case
 
if(amount==0)
return 0;

if(idx>=n )
return INT_MAX;

 
if(dp[idx][amount]!=INT_MAX)
 return dp[idx][amount];
 
 
long long int mnwt=INT_MAX;

if(amount>=val[idx])
mnwt=solve(n,wt,val,idx+1,amount-val[idx],dp)+wt[idx];
 
mnwt=min(mnwt,solve(n,wt,val,idx+1,amount,dp));
 
return dp[idx][amount]=mnwt;
 
}
 
int main()
{
 
 int n,w;
cin>>n>>w;
 
vector<int>wt(n);
vector<int>val(n);
 
 int sumval=0;

for(int i=0;i<n;i++){
    cin>>wt[i]>>val[i];
    sumval+=val[i];
}
  
vector<vector<long long int>>dp(n+1,vector<long long int>(sumval+1,INT_MAX)); // dp[i][j] is the minimum weight that can be achieved with i items and j value


for(int i=sumval;i>=0;i--){

 if(solve(n,wt,val,0,i,dp)<=w){
    cout<<i<<endl;
    break;
    }
}

return 0;
}
