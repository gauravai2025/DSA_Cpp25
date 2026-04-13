#include<bits/stdc++.h>
using namespace std;

long long int solve(vector<long long int >&arr,int st,int end,bool flag,vector<vector<long long int >>&dp){
   
   // base case
   if(end<st)
    return 0;

if(dp[st][end]!=-1)
return dp[st][end];

    if(flag){
return dp[st][end]= max(arr[st]+solve(arr,st+1,end,!flag,dp),arr[end]+solve(arr,st,end-1,!flag,dp));
    }

    else{
    return dp[st][end]= min(solve(arr,st+1,end,!flag,dp),solve(arr,st,end-1,!flag,dp));
    }
}
 
int main()
{
int n;
cin>>n;
vector<long long int >arr(n);

for(int i=0;i<n;i++){
    cin>>arr[i];
}

vector<vector<long long int>>dp(n,vector<long long int >(n,-1));

cout<<solve(arr,0,n-1,1,dp);
return 0;
}