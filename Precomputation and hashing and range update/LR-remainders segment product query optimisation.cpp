#include <bits/stdc++.h>
#define ll long long
#define endl "\n"
using namespace std;

const ll MAX_PRECOMPUTE = 1e4;

// Function for modular exponentiation
long long binpow(long long a, long long b, long long m) {
    a %= m;
    long long res = 1;
    while (b > 0) {
        if (b & 1)
            res = res * a % m;
        a = a * a % m;
        b >>= 1;
    }
    return res;
}

// Function to compute prime factorization
void factors(ll n, map<ll, ll>& m1) {
    for (ll x = 2; x * x <= n; x++) {
        while (n % x == 0) {
            m1[x]++;
            n /= x;
        }
    }
    if (n > 1)
        m1[n]++;
}

void solve() {
    // Precompute factors for numbers up to MAX_PRECOMPUTE
    vector<map<ll, ll>> diveach(MAX_PRECOMPUTE + 1);
    for (ll i = 2; i <= MAX_PRECOMPUTE; i++) {
        map<ll, ll> m1;
        factors(i, m1);
        diveach[i] = m1;
    }

    ll t;
    cin >> t;

    while (t--) {
        ll n, m;
        cin >> n >> m;

        ll arr[n];
        map<ll, ll> kk;

        for (int i = 0; i < n; i++) {
            cin >> arr[i];
            if (arr[i] != 1) {
                
                    for (auto &it : diveach[arr[i]]) {
                        kk[it.first] += it.second;
                    }
               
            }
        }

        ll l = 0, r = n - 1;
        string query;
        cin >> query;

        for (char ch : query) {
            // Calculate answer for current range
            ll ans = 1;
            if (m == 1) {
                ans = 0;
            }
             else {
                for (auto it : kk) {
                    if (it.second > 0) {
                        ans = ans * binpow(it.first, it.second, m) % m;
                    }
                }
            }

            cout << ans << " ";

            // Update range for 'L' or 'R'
            if (ch == 'L') {
                for (auto it : diveach[arr[l]]) {
                    kk[it.first] -= it.second;
                }
                l++;
            } else {  // ch == 'R'
                for (auto it : diveach[arr[r]]) {
                    kk[it.first] -= it.second;
                }
                r--;
            }
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
