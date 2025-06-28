#include<bits/stdc++.h>
using namespace std;

long long count_subsetsum(vector<int>& arr, int target) {
    
    int n = arr.size();
    int middlepoint = n / 2;

    unordered_map<long long, int>left, right;

    // Generate all subset sums for the left half
    for (int i = 0; i < (1 << middlepoint); i++) {
        long long sum = 0;
        for (int j = 0; j < middlepoint; j++) {
            if (i & (1 << j)) {
                sum += arr[j];
            }
        }
        left[sum]++;
    }

    // Generate all subset sums for the right half
    int remainingcnt = n - middlepoint;
    for (int i = 0; i < (1 << remainingcnt); i++) {
        long long sum = 0;
        for (int j = 0; j < remainingcnt; j++) {
            if (i & (1 << j)) {
                sum += arr[j + middlepoint];
            }
        }
        right[sum]++;
    }

    // Count subsets that sum up to the target
    long long cntsubset = 0;
    for (auto it : left) {
        long long sum = it.first;
        int freq = it.second;
        if (right.count(target - sum)) {
            cntsubset += 1LL * freq * right[target - sum];
        }
    }

    return cntsubset;
}

int main() {
    int n, target;
    cin >> n >> target;

    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << count_subsetsum(arr, target) << endl;

    return 0;
}
