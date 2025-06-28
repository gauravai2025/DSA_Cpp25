#include<bits/stdc++.h>
using namespace std;

int solve(string &word1, string &word2,int i,int j, vector<vector<int>>&dp){
        
    // base case
    if(i==word1.length())
    return word2.length()-j;

     if(j==word2.length())
    return word1.length()-i;

    if(dp[i][j]!=-1)
    return dp[i][j];

int ans=INT_MAX;

    if(word1[i]==word2[j])
    ans= solve(word1,word2,i+1,j+1,dp);

    else{
      int replace=1+solve(word1,word2,i+1,j+1,dp);
      int delet=1+solve(word1,word2,i+1,j,dp);
      int insert=1+solve(word1,word2,i,j+1,dp);

      ans=min(replace,min(delet,insert));

    }

return dp[i][j]=ans;

    }
    
 int minDistance(string word1, string word2) {

    int len1=word1.length();
    int len2=word2.length();
    vector<vector<int>>dp(len1,vector<int>(len2,-1));

    return solve(word1,word2,0,0,dp);
        
    }
 
int main()
{
    string s1,s2;
    cin>>s1>>s2;
 
 cout<<minDistance(s1,s2);
 
 
    return 0;
}