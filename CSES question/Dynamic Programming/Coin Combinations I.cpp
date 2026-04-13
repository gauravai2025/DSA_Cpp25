#include<bits/stdc++.h>
using namespace std;

const int mod=1e9+7;

int solve(int n,int x,vector<int>&coins,vector<int>&dp){

    // dp[i] is the number of ways to make sum i
    // base case: dp[0]=1

    if(x==0)
    return 1;

    if(dp[x]!=-1)
    return dp[x];

    int num_ways=0;

    for(int i=0;i<n;i++){

    if(x-coins[i]>=0)
   num_ways+=solve(n,x-coins[i],coins,dp);
    num_ways%=mod;

    }

    return dp[x]=num_ways;

}
 
int main()
{

int n,x;
cin>>n>>x;

vector<int>coins(n);

for(int i=0;i<n;i++){
    cin>>coins[i];
}

vector<int>dp(x+1,-1);
cout<<solve(n,x,coins,dp);
 
 return 0;
}