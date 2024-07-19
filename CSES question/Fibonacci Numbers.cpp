#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

const int mod = 1e9+7;

void matrix_multiplication(ll A[2][2], ll B[2][2]) {
    ll ans[2][2] = {{0, 0}, {0, 0}};
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            for (int k = 0; k < 2; k++) {
                ans[i][j] = (ans[i][j] + A[i][k] * B[k][j] % mod) % mod;
            }
        }
    }
    // Copy the result into matrix C
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            B[i][j] = ans[i][j];
        }
    }
}

void matrix_exponentiation(ll trp[2][2], ll n, ll result[2][2]) {

    while (n>0) {

        if (n&1) {
         matrix_multiplication( trp, result);
        }

        matrix_multiplication(trp, trp);
        n=n>>1;
    }    
}

int main() {
    ll n;
    cin >> n;

    ll fib[2] = {0, 1};

    if (n < 2) {
        cout << fib[n] << endl;
        return 0;
    }

    ll trp[2][2] = {{0, 1}, {1, 1}};
    ll result[2][2] = {{1, 0}, {0, 1}};  // Identity matrix
    n--;

    matrix_exponentiation(trp, n, result);

    ll nth_fib = (fib[0] * result[0][1] + fib[1] * result[1][1]) % mod;
    cout << nth_fib << endl;

    return 0;
}
