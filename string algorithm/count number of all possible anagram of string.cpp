#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const ll mod = 1e9 + 7;

ll power(ll a, ll b) {
  ll res = 1;

  while (b) {
    if (b & 1) {
      res *= a;
      res %= mod;
    }

    b >>= 1;
    a = a * a;
    a %= mod;
  }

  return res;
}

ll mod_inv(ll a) {
  return power(a, mod - 2);
}

vector<ll> fact(501);
vector<ll> inv(11);

void solve() {
  string s; cin >> s;
  ll res = fact[s.size()];

  map<char, ll> freq;
  for (auto i: s) freq[i] += 1;
  for (auto i: freq) {
    res = res * inv[i.second];
    res %= mod;
  }

  cout << res << "\n";
}

int main(void) {
  cin.tie(0)->sync_with_stdio(false);
  fact[0] = 1;
  for (ll i = 1; i <= 500; ++i) {
    fact[i] = fact[i - 1] * i;
    fact[i] %= mod;
  }
  
  for (ll i = 0; i <= 10; ++i) {
    inv[i] = mod_inv(fact[i]);
  }

  int t; cin >> t;
  while (t--) {
    solve();
  }
}