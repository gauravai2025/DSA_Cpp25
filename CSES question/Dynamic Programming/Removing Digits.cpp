#include <bits/stdc++.h>
using namespace std;

vector<int> dp;

int solve(int val) {
    // Base case: if val is 0, no steps are needed
    if (val == 0) {
        return 0;
    }

    // Check if already computed
    if (dp[val] != -1) {
        return dp[val];
    }

    int minSteps = INT_MAX;
    int num = val;

    // Extract digits and try each subtraction
    while (num >0) {
        int digit = num % 10;
        num /= 10;

        // Only consider non-zero digits to avoid infinite recursion
        if (digit > 0) {
            minSteps = min(minSteps, solve(val - digit) + 1);
        }
    }

    // Memoize the result and return
    return dp[val] = minSteps;
}

int main() {
    int n;
    cin >> n;

    // Initialize the dp array with -1 (uncomputed)
    dp.resize(n + 1, -1);

    // Compute and print the result
    cout << solve(n) << endl;

    return 0;
}
