#include <bits/stdc++.h>
using namespace std;

long long count_subsetsum(vector<int>& arr, long long target) {
    int n = arr.size();
    int mid = n / 2;

    // Generate all subset sums for the left half
    vector<long long> left;
    for (int i = 0; i < (1 << mid); i++) {
        long long sum = 0;
        for (int j = 0; j < mid; j++) {
            if (i & (1 << j)) sum += arr[j];
        }
        left.push_back(sum);
    }

    // Generate all subset sums for the right half
    vector<long long> right;
    for (int i = 0; i < (1 << (n - mid)); i++) {
        long long sum = 0;
        for (int j = 0; j < (n - mid); j++) {
            if (i & (1 << j)) sum += arr[j + mid];
        }
        right.push_back(sum);
    }

    // Sort the left subset sums for binary search
    sort(left.begin(), left.end());

    // Count subsets that sum up to the target
    long long count = 0;
    for (long long r : right) {
        long long complement = target - r;

        // Use binary search to count occurrences of 'complement' in 'left'
        count += upper_bound(left.begin(), left.end(), complement) -
                 lower_bound(left.begin(), left.end(), complement);
    }

    return count;
}

int main() {
    int n;
    long long target;
    cin >> n >> target;

    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << count_subsetsum(arr, target) << endl;

    return 0;
}
