#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
 
int main()
{

ll n;
cin>>n;

vector<ll>arr(n);

for(int i=0;i<n;i++){
    cin>>arr[i];
}

map<ll,ll>mp;
map<ll,bool>visited;

for(int i=31;i>=0;i--){
    ll cnt=0;
    for(int j=0;j<n;j++){
        if(arr[j]&(1<<i) && visited[j]==false){
            cnt++;
            visited[j]=true;
        }
    }
    mp[i]=cnt;
}

ll ans=0;

for(auto it:mp){
   ll val=it.second;
   ans+=(val*(val-1))/2;
}


cout<<ans<<endl;

    return 0;
}