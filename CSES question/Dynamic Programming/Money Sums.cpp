#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> dp;

void solve(vector<int> &arr, set<int> &st, int idx, int sum, int size) {
    if (idx >= size) {
        st.insert(sum);
        return;
    }

    if (dp[idx][sum] != -1) {
        return; // Already computed
    }

    // Mark the sum as computed for this index
    dp[idx][sum] = 1;

    // Include the current coin
    solve(arr, st, idx + 1, sum + arr[idx], size);
    
    // Exclude the current coin
    solve(arr, st, idx + 1, sum, size);
}

int main() {
    int size;
    cin >> size;
    vector<int> arr(size);

    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    set<int> st;
    // Maximum sum possible is 100 coins with value 1000
    dp.resize(size + 1, vector<int>(100001, -1));

    solve(arr, st, 0, 0, size);

    // Output the size of distinct sums
    cout << st.size() - 1 << endl;  // Exclude the initial sum (0)
    
    // Output all distinct sums in increasing order
    for (auto it : st) {
        if (it != 0) {
            cout << it << " ";
        }
    }

    return 0;
}
