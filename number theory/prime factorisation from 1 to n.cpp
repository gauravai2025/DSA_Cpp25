#include <bits/stdc++.h>
using namespace std;

void primeFactorization(int n) {
    vector<int> smallest_prime_factor(n + 1, 0);

    // Sieve approach to calculate smallest prime factor (SPF) for every number
    for (int i = 2; i <= n; i++) {
        if (smallest_prime_factor[i] == 0) { // i is a prime number
            for (int j = i; j <= n; j += i) {
                if (smallest_prime_factor[j] == 0)
                    smallest_prime_factor[j] = i;
            }
        }
    }

    // Function to print prime factors for each number from 1 to n
    for (int i = 2; i <= n; i++) {
        cout << "Prime factors of " << i << ": ";
        int temp = i;
        while (temp > 1) {
            cout << smallest_prime_factor[temp] << " ";
            temp /= smallest_prime_factor[temp];
        }
        cout << endl;
    }
}

int main() {
    int n;
    cout << "Enter value of n: ";
    cin >> n;

    primeFactorization(n);

    return 0;
}
