#include<bits/stdc++.h>
using namespace std;

int const mod=1e9+7;
int solve(int idx,int amount,vector<int>&coins,vector<vector<int>>&dp){

    // dp[i][amount] is the number of ways to make sum amount using the coin upto i index
    // base case: 

    if(amount==0)
    return 1;

    if(idx<0)
    return 0;

    if(dp[idx][amount]!=-1)
    return dp[idx][amount];

    int num_ways=0;
      
    // all possible number coins can take of denominations of idx index
    for(int take_amount=0;take_amount<=amount;take_amount+=coins[idx]){

    if(amount-take_amount>=0)
   num_ways+=solve(idx-1,amount-take_amount,coins,dp);
   num_ways%=mod;

    }

    return dp[idx][amount]=num_ways;

}

int coinchange(int amount,vector<int>& coins) {
    int size=coins.size();

    vector<vector<int>>dp(size+1,vector<int>(amount+1,-1)); //memset

    int mincoin= solve(size-1,amount,coins,dp);

    return mincoin;
}
 
int main()
{

int n,x;
cin>>n>>x;

vector<int>coins(n);

for(int i=0;i<n;i++){
    cin>>coins[i];
}

cout<<coinchange(x,coins);
 
 
    return 0;
}