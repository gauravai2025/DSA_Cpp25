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

int main()
{
string str;
cout<<"enter string: \n";
cin>>str;

factorial();
inversefactorial();
int size=str.size();
vector<int>feq(26,0);

for(int i=0;i<size;i++){
    feq[str[i]-'a']++;
}

ll ans=fact[size]%mod;

for(int i=0;i<26;i++){
    if(feq[i]>0)
   ans*=invfact[feq[i]]%mod;
   ans%=mod; 
}
cout<<ans<<endl;
return 0;
}