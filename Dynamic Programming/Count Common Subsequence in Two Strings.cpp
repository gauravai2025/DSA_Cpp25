#include<bits/stdc++.h>
using namespace std;

const int mod=1e9+7;

int solve(string &s1,string &s2,int i,int j,vector<vector<int>>&dp){

    if(i>=s1.size() || j>=s2.size())
    return 0;

    if(dp[i][j]!=-1)
    return dp[i][j];

    if(s1[i]==s2[j])
    return dp[i][j]=(1+solve(s1,s2,i+1,j,dp)+solve(s1,s2,i,j+1,dp))%mod;
    else
    return dp[i][j]=(solve(s1,s2,i+1,j,dp)+solve(s1,s2,i,j+1,dp)-solve(s1,s2,i+1,j+1,dp))%mod;

}
 
int main()
{
    string s1,s2;
    cin>>s1>>s2;
    int len1=s1.size();
    int len2=s2.size();
    
    vector<vector<int>>dp(len1,vector<int>(len2,-1));


    cout<<solve(s1,s2,0,0,dp);
 
    return 0;
}