#include<bits/stdc++.h>
using namespace std;

const int mod=1e9+7;
typedef long long ll;
const int  N= 1e6 +5;


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
    return res%mod;
}

ll minvprime(ll a,ll mod)
{ 
    return expo(a, mod - 2, mod)%mod;
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

ll binomialcofficient(ll n, ll r, ll m)
{
    ll val1 = fact[n];
    ll val2 = invfact[n - r];
    ll val3 = invfact[r];
    return (((val1 * val2) % m) * val3) % m;
}

long long int catlan(int n){
  return (binomialcofficient(2*n,n,mod)*minvprime(n+1,mod))%mod;
}
 
int main()
{
    cout<<"enter number of query \n";
    int qe;
    cin>>qe;
    factorial();
    inversefactorial();

    cout<<"enter number\n";
       int n;

    while(qe--){
   cin>>n;
    cout<<catlan(n)<<endl;
    }

    return 0;
}