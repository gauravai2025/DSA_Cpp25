#include <bits/stdc++.h>
#define ll long long
#define endl "\n"
using namespace std;


void solve() {
    
    ll t;
    cin>>t;

    while (t--) {
        ll n, m;
        cin >> n >> m;

       deque<ll> arr;
       vector<ll>prefix;
       vector<ll>reversequery;
       ll pre=1;

        for (int i = 0; i < n; i++) {  
            ll x;
            cin>>x;
            arr.push_back(x);
            
        }

        string query;
        cin >> query;

        for (char ch : query) {

          if(ch=='L'){
            reversequery.push_back(arr.front());
              arr.pop_front();
            }

         else{
            reversequery.push_back(arr.back());
            arr.pop_back();
            }
         }

     reverse(reversequery.begin(),reversequery.end());

        for(auto x:reversequery){
            pre*=x;
            pre%=m;
            prefix.push_back(pre);
        }

        reverse(prefix.begin(),prefix.end());
        
          for(auto x:prefix){
            cout<<x<<" ";
        }

        cout << endl;
    }
}

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    solve();
    return 0;
}
