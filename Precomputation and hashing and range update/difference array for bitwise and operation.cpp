#include<bits/stdc++.h>
using namespace std;

int main() {
    int size;
    cin >> size;
    vector<int> arr(size, (1 << 30) - 1);  // Initialize array with all bits set (max value)

    int q;
    cin >> q;

    vector<vector<int>> pre(size + 1, vector<int>(30, 0));  // Prefix sum array for each bit

    // Process each query
    while (q--) {
        int l, r, x;
        cin >> l >> r >> x;
        l--;  // Convert to 0-based index
        r--;  // Convert to 0-based index

        // Process each bit of x
        for (int i = 0; i < 30; i++) {
            if ((x & (1 << i)) == 0) {  // If the ith bit is 0 in x, force the ith bit in the range [l, r] to 0
                pre[l][i]++;  // Start forcing bit i to 0 at index l
                if (r + 1 < size)
                    pre[r + 1][i]--;  // Stop forcing bit i to 0 after index r
            }
        }
    }

    // Calculate the final array using the prefix sum for each bit
    for (int i = 0; i < size; i++) {
        int val = (1 << 30) - 1;  // Start with all bits set (maximum possible value)
        for (int j = 0; j < 30; j++) {

            if (i > 0) {
                pre[i][j] += pre[i - 1][j];  // Accumulate the prefix sum for bit j
            }
            
            if (pre[i][j] > 0) {
                val &= ~(1 << j);  // Force bit j to 0 unset jth bit
            }
        }
        arr[i] = val;  // Update the array with the final value
    }

    // Print the final array
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
