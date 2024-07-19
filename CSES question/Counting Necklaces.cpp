#include <bits/stdc++.h>
#define MOD 1000000007

using namespace std;

// Function to compute (base^exp) % mod
long long mod_pow(long long base, long long exp, long long mod) {
    long long result = 1;
    while (exp > 0) {
        if (exp % 2 == 1) {
            result = (result * base) % mod;
        }
        base = (base * base) % mod;
        exp = exp / 2;
    }
    return result;
}

int main() {
    int n, m;
    cin >> n >> m;
    
    long long result = 0;
    for (int k = 0; k < n; ++k) {
        result = (result + mod_pow(m, __gcd(n, k), MOD)) % MOD; // burnside lemma
    }
    
    // Since we need to divide by n, we multiply by the modular inverse of n % MOD
    long long n_inv = mod_pow(n, MOD - 2, MOD);
    result = (result * n_inv) % MOD;
    
    cout << result << endl;
    
    return 0;
}
