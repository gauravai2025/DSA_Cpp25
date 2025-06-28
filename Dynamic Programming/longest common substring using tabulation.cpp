#include<bits/stdc++.h>
using namespace std;
 
    int longestCommonSubstr(string& s1, string& s2){
        
    int len1=s1.size();
    int len2=s2.size();
       int mxlen=0; 
    vector<vector<int>>dp(len1+1,vector<int>(len2+1,0));
    
    for(int i=1;i<=len1;i++){
        for(int j=1;j<=len2;j++){
            
        if(s1[i-1]==s2[j-1])
        dp[i][j]=1+dp[i-1][j-1];
        else
        dp[i][j]=0;
        
        mxlen=max(mxlen,dp[i][j]);
            
        }
        
       
    }

    return mxlen;
    
        
    }


int main()
{

string s1, s2;
cout<<"Enter the first string\n";
cin>>s1;
cout<<"Enter the second string\n";
cin>>s2;

cout<<"Length of Longest Common Substring: "<<longestCommonSubstr(s1, s2);
 
return 0;
}