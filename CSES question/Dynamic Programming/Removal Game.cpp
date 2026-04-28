#include <bits/stdc++.h>
using namespace std;

long long solve(int i, int j, vector<long long>& arr,
                vector<vector<long long>>& dp) {

    if (i == j) return arr[i];

    if (dp[i][j] != LLONG_MIN)
        return dp[i][j];

    long long takeLeft = arr[i] - solve(i + 1, j, arr, dp);
    long long takeRight = arr[j] - solve(i, j - 1, arr, dp);

    return dp[i][j] = max(takeLeft, takeRight);
}

int main() {
    int n;
    cin >> n;

    vector<long long> arr(n);
    for (int i = 0; i < n; i++) cin >> arr[i];

    vector<vector<long long>> dp(n, vector<long long>(n, LLONG_MIN));

    long long diff = solve(0, n - 1, arr, dp);
    long long total = accumulate(arr.begin(), arr.end(), 0LL);

    cout << (total + diff) / 2 << endl;
}