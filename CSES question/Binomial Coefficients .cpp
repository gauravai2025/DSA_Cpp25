#include<bits/stdc++.h>
using namespace std;

int const m= 1e9 + 7;
int size=1e6;

typedef long long ll;

vector<ll> fact(size + 1);
vector<ll> invfact(size + 1);


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

    for (ll i = 1; i <= size; ++i)
    {
        fact[i] = fact[i - 1] * i;
        fact[i] %= m;
    }
}

 void inversefactorial()
{

    for (ll i = 0; i <= size; ++i)
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

    int qe;
    cin >> qe;

    while(qe--){
        ll n, r;
        cin >> n >> r;
        cout << combination(n, r) << "\n";
    }

    return 0;
}