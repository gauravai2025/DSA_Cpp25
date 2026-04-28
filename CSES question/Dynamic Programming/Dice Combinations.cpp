#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;
int const mod=1e9+7;

vector<ll>dp;

ll solve(int n,int sum){

// base case reach sum 
    if(sum==n)
    return 1;

   // out of bound 
    if(sum>n)
    return 0;

    if(dp[sum]!=-1)
    return dp[sum]%mod;
   
    return  dp[sum]=(solve(n,sum+1)%mod+solve(n,sum+2)%mod+solve(n,sum+3)%mod+solve(n,sum+4)%mod+solve(n,sum+5)%mod+solve(n,sum+6)%mod)%mod;


}
 
int main()
{

int n;
cin>>n;
dp.resize(n+1,-1);

cout<<solve(n,0);
 return 0;
}