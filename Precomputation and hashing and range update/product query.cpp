#include<bits/stdc++.h>
using namespace std;

const int MOD = 1e9 + 7;

long long mod_exp(long long base, long long exp, long long mod) {
    long long result = 1;
    while (exp > 0) {
        if (exp % 2 == 1) {
            result = (result * base) % mod;
        }
        base = (base * base) % mod;
        exp /= 2;
    }
    return result;
}

vector<long long> compute_prefix_products(const vector<int>& arr, int mod) {
    int n = arr.size();
    vector<long long> prefix_product(n + 1, 1); // prefix_product[0] = 1 for convenience
    for (int i = 1; i <= n; ++i) {
        prefix_product[i] = (prefix_product[i - 1] * arr[i - 1]) % mod;
    }
    return prefix_product;
}

long long query_product(const vector<long long>& prefix_product, int l, int r, int mod) {
    long long result = prefix_product[r];
    if (l > 1) {
        long long inv = mod_exp(prefix_product[l - 1], mod - 2, mod);
        result = (result * inv) % mod;
    }
    return result;
}

int main() {
    int n, q;
    cin >> n >> q;
    vector<int> arr(n);
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }
    
    vector<long long> prefix_product = compute_prefix_products(arr, MOD);

    for (int i = 0; i < q; ++i) {
        int l, r;
        cin >> l >> r;
        cout << query_product(prefix_product, l, r, MOD) << endl;
    }

    return 0;
}
