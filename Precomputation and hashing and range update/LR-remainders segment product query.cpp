#include <bits/stdc++.h>
#define ll long long
#define endl "\n"
using namespace std;

long long binpow(long long a, long long b, long long m){
    a %= m;
    long long res = 1;
    while (b > 0) {
        if (b & 1)
            res = res * a % m;
        a = a * a % m;
        b >>= 1;
    }
    return res;
}

void  factors(ll n, map<ll,ll>&m1) {
    
 for (ll x = 2; x*x <= n; x++) {
 while (n%x == 0) {
 m1[x]++;
 n /= x;
 }
 }
 if (n > 1) 
 m1[n]++;

 }
 
 
void solve()
{
    ll t;
    cin>>t;
    while(t--)
    {

    ll n,m;
    cin>>n>>m;

    ll arr[n],i;

    for(i=0;i<n;i++) 
    cin>>arr[i];

    map<ll,ll> kk;
    vector<map<ll,ll>>diveach(n);

    for(i=0;i<n;i++)
    {
        map<ll,ll>m1;
        factors(arr[i],m1);
       diveach[i]=m1;

        
        for(auto &it:m1)
        kk[it.first]+=it.second;
    }

    ll l=0,r=n-1;

    string query;
    cin>>query;
 
        for(char ch:query)
        {
            ll ans=1;
            ll count;
           bool flag=false;
            for(auto it:kk){
            if(it.second==0) continue;
            flag=1;
            count=it.second;
            ans=(ans*(binpow(it.first,count,m)))%m;
            }

            if(!flag && m==1)
            ans=0;
            else 
            ans=(ans+m)%m;

            cout<<ans<<" ";

            if(ch=='L'){
                for(auto it:diveach[l])
                {
                 kk[it.first]-=it.second;
                }
                l++;
            }

            else{
            for(auto it:diveach[r])
            {
                kk[it.first]-=it.second;
            }
            r--;
            }
        }

        cout<<endl;
       
    }
}

signed main()
{
ios_base::sync_with_stdio(0);
cin.tie(0);

solve();
return 0;
}