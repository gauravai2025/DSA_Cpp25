#include <bits/stdc++.h>
using namespace std;

int const mod = 1e9 + 7;
long long int x, y;

void exteuclid(long long int a, long long int b) {
    if (b == 0) {
        x = 1;
        y = 0;
        return;
    }
    exteuclid(b, a % b);
    long long int xnew = y;
    long long int ynew = x - a / b * y;
    x = xnew;
    y = ynew;
}

int invmodulo(long long int a, long long int m) {
    if (__gcd(a, m) == 1) {
        exteuclid(a, m);
        return (x + m) % m;
    } else
        return -1;
}

long long int mod_pow(long long int b, long long int p) {
    long long int res = 1;
    while (p) {
        if (p & 1)
            res = (res * b) % mod;
        b = (b * b) % mod;
        p >>= 1;
    }
    return res % mod;
}

void cnt_sum(vector<pair<long long int, long long int>>& v) {
    long long int cntdiv = 1;
    for (auto& it : v) {
        cntdiv *= (it.second + 1);
        cntdiv %= mod;
    }

    long long int sum = 1;
    long long int product = 1;

    for (auto& it : v) {
        long long int b = it.first;
        long long int p = it.second;
        sum = (sum * (mod_pow(b, p + 1) - 1 + mod) % mod) * invmodulo(b - 1, mod) % mod;
    }

    cout << cntdiv << " ";
        cout <<sum<< " ";


    for (auto& it : v) {
        long long int b = it.first;
        long long int p = it.second;
        p = (p * cntdiv + 1) / 2;
        product *= (mod_pow(b, p));
        product %= mod;
    }

    cout << product % mod << endl;
}

int main() {
    int n;
    cin >> n;
    vector<pair<long long int, long long int>> v;

    while (n--) {
        long long int b, k;
        cin >> b >> k;
        v.push_back({b, k});
    }

    cnt_sum(v);

    return 0;
}
