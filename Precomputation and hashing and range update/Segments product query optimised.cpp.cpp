#include <bits/stdc++.h>
#define ll long long
#define endl "\n"
using namespace std;

// left and right side of a segment and some modulo. find the multiplication of all the integers in this segment of the array modulo the given modulus
const ll MAX_PRECOMPUTE = 1e2;


long long binpow(long long a, long long b, long long m) {
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
     // Precompute factors for numbers up to MAX_PRECOMPUTE
    vector<map<ll, ll>> diveach(MAX_PRECOMPUTE + 1);
    for (ll i = 2; i <= MAX_PRECOMPUTE; i++) {
        map<ll, ll> m1;
        factors(i, m1);
        diveach[i] = m1;
    }

    ll n;
    cin>>n;
    ll arr[n],i;

    vector<map<ll,ll>> v;
    map<ll,ll> kk;

    for(i=0;i<n;i++) 
    {
    cin>>arr[i];

        map<ll,ll>m1;
       m1=diveach[arr[i]];
        
        for(auto &it:m1)
        kk[it.first]+=it.second;
        v.push_back(kk);
    }

    ll t;
    cin>>t;
    while(t--)
    {
        ll l,r,m;
        cin>>l>>r>>m;
        l--,r--;
        ll ans=1;
        for(auto &it:v[r])
        {
            ll count;
            if(l>0)
            count=it.second-v[l-1][it.first];
            else count=it.second;
            ans=(ans*(binpow(it.first,count,m)))%m;
        }
        if(m==1) ans=0;
        cout<<ans<<endl;
    }
return;
}

signed main()
{
ios_base::sync_with_stdio(0);
cin.tie(0);

solve();
return 0;
}