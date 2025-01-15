#include<bits/stdc++.h>
using namespace std;

int const mod=1e9+7;

   int solve(int n,int k, vector<int>&dp){
        
    if(n==1)
    return k;
    
    if(n==2)
    return k+k*(k-1);
    
    if(dp[n]!=-1)
    return dp[n];
    
    return dp[n]=((solve(n-1,k,dp)*(k-1))%mod+(solve(n-2,k,dp)*(k-1)%mod))%mod;
        
        
    }

int countWays(int n,int k)
{
     vector<int>dp(n+1,-1);
     return solve(n,k,dp);
}
 
int main()
{

int n,k;
cout<<"enter value of number of post and number of colors"<<endl;
cin>>n>>k;
 
cout<<countWays(n,k);
 
 return 0;
}