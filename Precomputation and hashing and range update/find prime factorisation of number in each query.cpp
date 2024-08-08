#include <bits/stdc++.h>
using namespace std;
const int n=1e6; 
 vector<int> smallest_prime_factor(n + 1, 0);

void primeFactorization(int n) {
   

    // Sieve approach to calculate smallest prime factor (SPF) for every number
    for (int i = 2; i <= n; i++) {
        if (smallest_prime_factor[i] == 0) { // i is a prime number
            for (int j = i; j <= n; j += i) {
                if (smallest_prime_factor[j] == 0)
                    smallest_prime_factor[j] = i;
            }
        }
    }

}

   

int main() {

    primeFactorization(1e6);

    int q;
    cout<<"enter number of query:\n";
    cin>>q;
    cout<<"enter number: \n";

    while(q--){
        int num;
        cin>>num;
        cout<<"Prime factors of " << num << ": ";
        int temp = num;
        while (temp > 1) {
            cout << smallest_prime_factor[temp] << " ";
            temp /= smallest_prime_factor[temp];
        }
        cout << endl;
    }

    return 0;
}
