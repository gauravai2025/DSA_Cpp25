ll derangement(ll n){

    ll ans=0;

    for(int i=0;i<=n;i++){

        if(i&1)
       ans-=invfact[i];
        else
        ans+=invfact[i];

        ans=(ans+mod)%mod;
    }

    return (ans*fact[n])%mod;
}