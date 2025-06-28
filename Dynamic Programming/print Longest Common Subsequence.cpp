#include<bits/stdc++.h>
using namespace std;

void solvetab(string &s, string &t,vector<vector<int>>&dp){
        
    for(int i=s.size()-1;i>=0;i--){
         for(int j=t.size()-1;j>=0;j--){
             
         if(s[i]==t[j]){
             dp[i][j]=1+dp[i+1][j+1];
         }
         
         else{
           dp[i][j]=max(dp[i+1][j],dp[i][j+1]);  
         }
    }
    }

 int i=0;
 int j=0;

 string lcstr="";

 while(i<s.size() && j<t.size()){

    if(s[i]==t[j]){
        lcstr.push_back(s[i]);
        i++;
        j++;
    }

    else{
    if(dp[i+1][j]>dp[i][j+1])
     i++;
     else
     j++;
 }

 }

 cout<<"longest common subsequence:\n"<<lcstr;
}

void longestCommonSubsequence(string text1, string text2) {
      
    int len1=text1.size();
   int len2=text2.size();
   
   vector<vector<int>>dp(len1+1,vector<int>(len2+1,0));

   solvetab(text1,text2,dp);
}
 
int main()
{

 string str1,str2;
 cout<<"enter both string\n";
 cin>>str1>>str2;   

 longestCommonSubsequence(str1,str2);
 
    return 0;
}