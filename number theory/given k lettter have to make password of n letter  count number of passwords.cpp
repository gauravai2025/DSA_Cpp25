#include<bits/stdc++.h>
using namespace std;

int const m= 1e9 + 7;
int const  N=1e5+1;

typedef long long ll;

vector<ll> fact(N);
vector<ll> invfact(N);


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
        fact[i] %= m;
    }
}

 void inversefactorial()
{

    for (ll i = 0; i <=N; ++i)
    {
        invfact[i] = minvprime(fact[i], m);
    }
}

 ll combination(ll n, ll r)
{
    ll val1 = fact[n];
    ll val2 = invfact[n - r];
    ll val3 = invfact[r];
    return (((val1 * val2) % m) * val3) % m;
}


int main()
{
    factorial();
    inversefactorial();

    int t;
    cin >>t;

    while(t--){
        ll n, k;
        cin >> n >> k;
        ll num_selection=combination(k, n)%m;

		ll num_arrange=fact[n]%m;

		ll num_password=(num_selection*num_arrange)%m;
		cout<<num_password<<endl;

    }

    return 0;
}