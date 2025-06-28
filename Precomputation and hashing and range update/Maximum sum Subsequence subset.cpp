#include<bits/stdc++.h>
using namespace std;

#define ll long long int

void solve(vector<ll>arr,ll n,ll m){

    if(n==1){
   cout<<arr[0]%m<<endl;
    return ;
    }

    ll ans=0;

    vector<ll>left;
    vector<ll>right;
    int leftcnt=(n/2);
    ll rightcnt=n-leftcnt;

    for(ll i=0;i<(1l<<leftcnt);i++){
        ll sum=0;
        for(int j=0;j<leftcnt;j++){
            if(i&(1l<<j)){
                sum+=arr[j];
                sum%=m;
            }
        }

        left.push_back(sum);
    }

    for(ll i=0;i<(1l<<rightcnt);i++){
        ll sum=0;
        for(int j=0;j<rightcnt;j++){
            if(i&(1l<<j)){
                sum+=arr[j+leftcnt];
                sum%=m;
            }
        }

        right.push_back(sum);
    }

    ll mx1=*max_element(left.begin(),left.end());
    ll mx2=*max_element(right.begin(),right.end());

    ans=max({ans,mx1,mx2});

    sort(left.begin(),left.end());


    for(auto it:right){
        ll find=m-it-1;
        auto it2=upper_bound(left.begin(),left.end(),find);

        if(it2!=left.begin()){
            it2--;
            ans=max(ans,(*it2)+it);
        }

        ll val=it+left[leftcnt-1];
        val%=m;
        ans=max(ans,val);
    }
    cout<<ans<<endl;
}
 
int main()
{
ll n,m;
cin>>n>>m;

vector<ll>arr(n);

for(ll i=0;i<n;i++){
    cin>>arr[i];
}

solve(arr,n,m);
 return 0;
}