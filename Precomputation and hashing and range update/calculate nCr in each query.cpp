#include<bits/stdc++.h>
using namespace std;

 #define mod 1000000007
const int  N= 1e6 +5;
typedef long long ll;

vector<ll> fact(N + 1);
vector<ll> invfact(N+ 1);


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

void factorial()
{
    fact[0] = 1;

    for (ll i = 1; i <= N; ++i)
    {
        fact[i] = fact[i - 1] * i;
        fact[i] %= mod;
    }
}

void inversefactorial()
{

    for (ll i = 0; i <= N; ++i)
    {
        invfact[i] = minvprime(fact[i], mod);
    }
}

ll combination(ll n, ll r, ll m)
{
    if(r>n)
    return 0;
    ll val1 = fact[n];
    ll val2 = invfact[n - r];
    ll val3 = invfact[r];
    return (((val1 * val2) % m) * val3) % m;
}

int main()
{

 int q;
    cout<<"enter number of  query\n";
    cin>>q;

    factorial();
    inversefactorial();

  cout<<"enter n and r for each query \n";

    while(q--){
        ll n,r;
        cin>>n>>r;
        cout<<combination(n,r,mod)<<endl;
    }

    return 0;
}