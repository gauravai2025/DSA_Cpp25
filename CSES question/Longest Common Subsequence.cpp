#include<bits/stdc++.h>
using namespace std;

void solve(vector<int>&arra,vector<int>&arrb,int n,int m,vector<vector<int>>&dp){
   
    for(int i=n-1;i>=0;i--){
        for(int j=m-1;j>=0;j--){

        if(arra[i]==arrb[j])
        dp[i][j]=1+dp[i+1][j+1];
        else{
        dp[i][j]=max(dp[i+1][j],dp[i][j+1]);    
        }

        }
    }
}
 
int main()
{

    int n,m;
    cin>>n>>m;

    vector<int>arra(n);
    vector<int>arrb(m);

    for(int i=0;i<n;i++){
        cin>>arra[i];
    }

      for(int i=0;i<n;i++){
        cin>>arrb[i];
    }

    vector<vector<int>>dp(n+1,vector<int>(m+1,0));
    solve(arra,arrb,n,m,dp);

    vector<int>ans;

    int i=0,j=0;

    while(i<n && j<m){
       
        if(arra[i]==arrb[j]){
        ans.push_back(arra[i]);
        i++;
        j++;
        }

        else if(dp[i+1][j]>dp[i][j+1])
        i++;
        else
        j++;
    }

    int lcslength=ans.size();
    cout<<lcslength<<endl;

    for(int ele:ans){
        cout<<ele<<" ";
    }
 
    return 0;
}