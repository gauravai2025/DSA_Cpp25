#include <bits/stdc++.h>
using namespace std;

const int mod = 1e9 + 7;

long long int binomialcofficient1(int n, int r) {
    vector<long long int> fact(n + 1, 0); // Define fact locally

    fact[0] = 1; // Corrected initialization

    for (int i = 1; i <= n; i++) {
        fact[i] = (i * fact[i - 1]) % mod; // Calculating factorial modulo mod
    }

    long long int numerator = fact[n];
    long long int denominator = (fact[r] * fact[n - r]) % mod;

    // Calculate (denominator)^-1 modulo mod using Fermat's little theorem
    long long int inverse_denominator = 1;
    long long int exponent = mod - 2;
    while (exponent > 0) {
        if (exponent % 2 == 1) {
            inverse_denominator = (inverse_denominator * denominator) % mod;
        }
        denominator = (denominator * denominator) % mod;
        exponent /= 2;
    }

    long long int ans = (numerator * inverse_denominator) % mod;
    return ans;
}

int main() {
    int n, m;
    cin >> n >> m;

    int p = n + m - 1;

    cout << binomialcofficient1(p, m) << endl;

    return 0;
}
