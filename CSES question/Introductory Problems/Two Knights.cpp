#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
 
int main()
{
    ll n;
    cin>>n;

    ll ans=0;
    cout<<ans<<endl;
    ll attack_count=0;
    // ll inc_factor=0;

for(int i=2;i<=n;i++){
        ll num_cells=i*i;
        ans=num_cells*(num_cells-1)/2;
        attack_count=4*(i-1)*(i-2);
        ans-=attack_count;
        cout<<ans<<endl;

       

    }

    return 0;
}