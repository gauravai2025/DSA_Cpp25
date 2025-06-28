#include<bits/stdc++.h>
using namespace std;

int distinctsubsequence(int idx,string &str,vector<int>&lastvisit, vector<int>&dp){
        
    if(idx<=0)
    return 1;
    
    if(dp[idx]!=-1)
    return dp[idx];
    
    int ans= 2*distinctsubsequence(idx-1,str,lastvisit,dp);
    
    if(lastvisit[str[idx-1]-'a']!=-1){
    int temp= lastvisit[str[idx-1]-'a'];
    ans-=distinctsubsequence(temp-1,str,lastvisit,dp);
    }
    
     lastvisit[str[idx-1]-'a']=idx;
    
    return dp[idx]=ans;
    
    }
 
int main()
{
    string str;
    cout<<"enter string\n";
    cin>>str;

    vector<int>lastvisit(26,-1);
    vector<int>dp(str.size()+1,-1);

    cout<<"number of distinct subsequence: "<<distinctsubsequence(str.size(),str,lastvisit,dp);
 
    return 0;
}