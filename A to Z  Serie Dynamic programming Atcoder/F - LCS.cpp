#include<bits/stdc++.h>
using namespace std;


    string longestCommonSubsequence(string text1, string text2){
  
    int len1=text1.size();
    int len2=text2.size();


     vector<vector<int>>dp(len1+1,vector<int>(len2+1,0));

    for(int i = 1; i <= len1; i++){
        for(int j = 1; j <= len2; j++){

            if(text1[i - 1] == text2[j - 1]){
                dp[i][j] =1+dp[i - 1][j - 1];
            }
            else{
            dp[i][j] = fmax(dp[i - 1][j], dp[i][j - 1]);
            }
        }
    }
    
    string lcs="";
    int i=len1,j=len2;

    while(i>0 && j>0){

    if(text1[i-1]==text2[j-1]){
      lcs+=text1[i-1];
      i--;
      j--;
    }
     else if(dp[i][j-1]<dp[i-1][j])
     i--;
     else
     j--;

}
reverse(lcs.begin(),lcs.end());

    return lcs;
    }

 
int main()
{
    string text1,text2;
    cin>>text1>>text2;

    cout<<longestCommonSubsequence(text1,text2);

    return 0;
}