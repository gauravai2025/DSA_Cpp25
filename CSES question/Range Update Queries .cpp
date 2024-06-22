#include <bits/stdc++.h>
using namespace std;

int main() {
    int size, qe;
    cin >> size >> qe;
    vector<long long> arr(size, 0);
    vector<long long> diff(size + 1, 0); // Difference array
    vector<long long> prefix(size, 0);   // Prefix sum array
    bool prefixUpdated = false;          // Flag to check if prefix sums are updated

    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    int type, l, r, val, k;

    while (qe--) {
        cin >> type;

        if (type == 1) {
            cin >> l >> r >> val;
            l--;
            r--;
            diff[l] += val;
            if (r + 1 < size) {
                diff[r + 1] -= val;
            }
            prefixUpdated = false; // Mark prefix sums as outdated
        } else if (type == 2) {
            cin >> k;
            k--;

            // Update prefix sums if necessary
            if (!prefixUpdated) {
                // Build prefix sum array from difference array
                prefix[0] = diff[0];
                for (int i = 1; i < size; i++) {
                    prefix[i] = prefix[i - 1] + diff[i];
                }
                prefixUpdated = true; // Mark prefix sums as updated
            }

            // Output the result using precomputed prefix sums
            cout << arr[k] + prefix[k] << "\n";
        }
    }

    return 0;
}
