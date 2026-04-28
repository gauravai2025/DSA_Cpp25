#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;
vector<vector<long long int>>dp;

const int mod=1e9+7;


ll expo(ll a, ll b, ll m)
{
    ll res = 1;
    while (b > 0)
    {
        if (b & 1)
            res = (res * a) % m;
        a = (a * a) % m;
        b = b >> 1;
    }
    return res;
}

ll minvprime(ll a, ll m)
{ // for prime m
    return expo(a, m - 2, m);
}
long long int solve(vector<int>&arr,int idx,int target,int sum){

    // base case

    if(idx>=arr.size()){
        if(sum==target)
        return 1;
        else
        return 0;
    }

    if(sum>target){
        return 0;
    }

    if(dp[idx][sum]!=-1)
    return dp[idx][sum]%mod;

    return dp[idx][sum]=(solve(arr,idx+1,target,sum)%mod+solve(arr,idx+1,target,sum+arr[idx])%mod)%mod;
}
 
int main()
{

int n;
cin>>n;

vector<int>arr(n);

for(int i=0;i<n;i++){
    arr[i]=i+1;
}
 
 int sum=n*(n+1)/2; // sum of n natural numbers

 if(sum&1 || n==1){
    cout<<0<<endl;
    return 0;
 }


int target=sum/2;
 dp.resize(n+1,vector<long long int>(target+1,-1));

 ll ans=solve(arr,0,target,0);
 ans=(ans*minvprime(2,mod))%mod ; // avoid double counting

 cout<<ans; 
return 0;
}