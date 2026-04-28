#include<bits/stdc++.h>
using namespace std;
 
 int const mod=1e9+7;

vector<vector<long long int>>dp;

 long long solve(vector<string>&grid,int i,int j,int n){

    // base case

    if(i==n-1 && j==n-1)
    return 1;

    if(dp[i][j]!=-1)
    return dp[i][j]%mod;

    if(i==n-1){

        if(grid[i][j+1]=='*')
        return 0;
        else
        return dp[i][j]=solve(grid,i,j+1,n)%mod;
    }

     else if(j==n-1){

        if(grid[i+1][j]=='*')
        return 0;
        else
        return dp[i][j]=solve(grid,i+1,j,n)%mod;
    }
    
    else{

    if(grid[i][j+1]=='*' && grid[i+1][j]=='*')
    return dp[i][j]=0;

    else  if(grid[i][j+1]=='*')
    return dp[i][j]=solve(grid,i+1,j,n)%mod;
    
    else  if(grid[i+1][j]=='*')
    return dp[i][j]=solve(grid,i,j+1,n)%mod;

    else
    return dp[i][j]=(solve(grid,i,j+1,n)%mod+solve(grid,i+1,j,n)%mod)%mod;
    }
 }


int main()
{

int n;
cin>>n;

vector<string>grid;

for(int i=0;i<n;i++){
    string str;
    cin>>str;
    grid.push_back(str);
}

dp.resize(n,vector<long long int>(n,-1));

if(grid[0][0]=='*')
cout<<0<<endl;

else
cout<<solve(grid,0,0,n)%mod;

 
 
 
    return 0;
}