#include<bits/stdc++.h>
using namespace std;

const int mod=1e9+7;
typedef long long ll;


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

ll minvprime(ll a)
{ 
    return expo(a, mod - 2, mod)%mod;
}



long long factorial(int N)
{
   ll fact=1;

    for (ll i = 1; i <= N; ++i)
    {
        fact= fact * i;
        fact %= mod;
    }
    return fact;
}

ll binomialcofficient(ll n, ll r)
{
    ll val1 = factorial(n);
    ll val2 =  minvprime(factorial(n-r));
    ll val3 = minvprime(factorial(r));
    return (((val1 * val2) % mod) * val3) % mod;
}

long long int catlan(int n){
  return (binomialcofficient(2*n,n)*minvprime(n+1))%mod;
}


long long int bracket_sequence(int n,string &str){
    int size=str.size();
    int cnto=0;

    for(int i=0;i<size;i++){
        if(str[i]=='(')
        cnto++;
    }

    int k=n/2-min(cnto,size-cnto);

  return catlan(k);
}
 
int main()
{
    
    int n;
    cin>>n;
    string str;
    cin>>str;

    if(n&1)
    cout<<0<<endl;
    else
    cout<<bracket_sequence(n,str);

    return 0;
}