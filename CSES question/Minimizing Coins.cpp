#include<bits/stdc++.h>
using namespace std;
 typedef long long int ll;
vector<ll>dp;

ll solve(vector<int>&coin, int sum,int x){

    if(sum==x){
       return 0 ; 
    }

    if(sum>x)
    return INT_MAX;

    if(dp[sum]!=-1)
    return dp[sum];

 ll mncoin=INT_MAX;

for(int i=0;i<coin.size();i++){

mncoin=min(mncoin,1+solve(coin,sum+coin[i],x));

}

return dp[sum]=mncoin;

   
}
 
int main()
{

int n,x;
cin>>n>>x;

vector<int>coin(n,0);

for(int i=0;i<n;i++){
    cin>>coin[i];
}

dp.resize(x+1,-1);
int ans=INT_MAX;
ans=solve(coin,0,x);

if(ans==INT_MAX)
cout<<-1<<endl;
else
cout<<ans;

return 0;
}