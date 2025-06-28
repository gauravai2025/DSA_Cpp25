#include<bits/stdc++.h>
using namespace std;
 
long long int solve(int n,int x,vector<int>&price,vector<int>&pages,vector<vector<long long int>>&dp,int idx){
 
// base case
 
if(x<=0 || idx>=n){
    return 0;
}
 
if(dp[idx][x]!=-1){
 return dp[idx][x];
 
}
 
long long int max_page=0;
// buying the current book
 
if(x-price[idx]>=0)
max_page=solve(n,x-price[idx],price,pages,dp,idx+1)+pages[idx];
 
// not buying the current book
max_page=max(max_page,solve(n,x,price,pages,dp,idx+1));
 
return dp[idx][x]=max_page;
 
}
 
int main()
{
 
int n,x;
cin>>n>>x;
 
vector<int>price(n);
vector<int>pages(n);
 
for(int i=0;i<n;i++){
    cin>>price[i];
}
 
for(int i=0;i<n;i++){
    cin>>pages[i];
}

 
vector<vector<long long int>>dp(n+1,vector<long long int>(x+1,-1)); // dp[i][j] is the maximum number of pages that can be bought with i books and j money
cout<<solve(n,x,price,pages,dp,0);
 
return 0;
}
