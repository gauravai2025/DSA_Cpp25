#include<bits/stdc++.h>
using namespace std;

const int mod=1e9+7;

int solve(string &s1,string &s2){
    
    int len1=s1.size();
    int len2=s2.size();
    
    vector<vector<int>>dp(len1+1,vector<int>(len2+1,0));

    for(int i=1;i<=len1;i++){
        for(int j=1;j<=len2;j++){
      if(s1[i-1]==s2[j-1])
     dp[i][j]=(1+dp[i-1][j]+dp[i][j-1])%mod;
    else
dp[i][j]=(dp[i-1][j] + dp[i][j-1] - dp[i-1][j-1] + mod) % mod;
    }

}

return dp[len1][len2];
}
 
int main()
{
    string s1,s2;
    cin>>s1>>s2;
    cout<<solve(s1,s2);
    return 0;
}