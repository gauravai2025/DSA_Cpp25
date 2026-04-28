#include<bits/stdc++.h>
using namespace std;

const int mod=1e9+7; 

long long int sumdiv(long long int n){
     
    long long int sum=0;
    unordered_map<long long int,int>mp;

    for(long long int i=2;i*i<=n;i++){
        int cnt=0;

        while(n%i==0){
          cnt++;
          n/=i;

    }

    mp[i]=cnt;

    
}

if(n>1)
mp[n]=1;

}


int main()
{
    int n;
    cin>>n;
long long int sum=0;
    for(int i=1;i<=n;i++){
        sum=(sum+(sumdiv(i))%mod)%mod;
    }

    cout<<sum;
    return 0;
}