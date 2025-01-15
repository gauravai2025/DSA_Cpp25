#include<bits/stdc++.h>
using namespace std;

 int solve(int n,vector<int>&dp){

  // base case
    if(n<=1)
    return 1;

    if(dp[n]!=-1)
    return dp[n];
    
    // treat every node as root node calculate number of bst as root i
     
     int ans=0;

    for(int i=1;i<=n;i++){
     ans+=solve(i-1,dp)*solve(n-i,dp);
    }

    return dp[n]=ans;
    }
    
 int numberof_waysto_formtriangle(int n){
    vector<int>dp(n+1,-1);
    return solve(n,dp);
    }
 
int main()
{
int n;
cout<<"enter number of vertices in polygon\n"<<endl;
cin>>n;

cout<<numberof_waysto_formtriangle(n-2); // (n-2)th catlan number
return 0;
}